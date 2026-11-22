package de.fhaachen.pg.tracker;

import java.time.LocalDate;
import java.util.ArrayList;
import java.util.List;

/**
 * Admission-critical deadline tracker — FH Aachen Informatik (IBP), WS 2026/27, Semester 1.
 *
 * Sources:
 *  - HM1 (51101, Hoever): 14 weekly Mumie Pflichttests, pass ≥12 with ≥75% each → exam admission.
 *    Deadlines from the Mumie course page (Thursdays 23:59).
 *  - GdI (51104, Ferrein): weekly Praktikum (Anwesenheitspflicht, Tue 12:15 Gr.3),
 *    weekly Pflicht-Praktikumsaufgabe via GIPCode (ILIAS), Pflicht-Offline-Aufgaben via Jenkins
 *    (all due mid-December).
 *  - TI (52105, Reke): Praktikum Gr. B1, Tue 08:15-11:15, 14-täglich from 27.10 (Anwesenheitspflicht).
 *  - Softskill Finanzmanagement (55851): weekly attendance Thu 15:45, EUP-E115.
 *  - Prüfungsanmeldung: window opens Nov/Dec — check HISinOne weekly from 01.11.
 */
public class DeadlineTracker {

    public record Deadline(LocalDate date, String module, String task, Severity severity) {
        @Override public String toString() {
            return "%s (%s) [%s] %s — %s".formatted(date, date.getDayOfWeek(), severity, module, task);
        }
    }

    public enum Severity { CRITICAL, IMPORTANT }

    static final LocalDate LECTURE_END = LocalDate.of(2027, 1, 29);
    static final LocalDate GDI_OFFLINE_DUE = LocalDate.of(2026, 12, 15); // "bis Mitte Dezember"

    public static List<Deadline> generate() {
        List<Deadline> out = new ArrayList<>();

        // HM1: 14 Pflichttests, real deadlines from Mumie (Thursdays 23:59).
        LocalDate[] mumie = {
            LocalDate.of(2026, 10, 15), LocalDate.of(2026, 10, 22), LocalDate.of(2026, 10, 29),
            LocalDate.of(2026, 11, 5),  LocalDate.of(2026, 11, 12), LocalDate.of(2026, 11, 19),
            LocalDate.of(2026, 11, 26), LocalDate.of(2026, 12, 3),  LocalDate.of(2026, 12, 10),
            LocalDate.of(2026, 12, 17), LocalDate.of(2027, 1, 7),   LocalDate.of(2027, 1, 14),
            LocalDate.of(2027, 1, 21),  LocalDate.of(2027, 1, 28)
        };
        for (int i = 0; i < mumie.length; i++) {
            out.add(new Deadline(mumie[i], "HM1 (51101)",
                    "Mumie Pflichttest %02d/14 — need ≥75%% (12 of 14 for exam admission)".formatted(i + 1),
                    Severity.CRITICAL));
        }

        // GdI: Praktikum weekly Tue 12:15 from 13.10; Pflichtaufgabe due before next session (GIPCode).
        LocalDate gdi = LocalDate.of(2026, 10, 13);
        int week = 0;
        while (!gdi.isAfter(LECTURE_END)) {
            out.add(new Deadline(gdi, "GdI (51104)",
                    "Praktikum session %d — attend (Anwesenheitspflicht) + submit Pflichtaufgabe via GIPCode"
                            .formatted(++week), Severity.CRITICAL));
            gdi = gdi.plusWeeks(1);
        }
        out.add(new Deadline(GDI_OFFLINE_DUE, "GdI (51104)",
                "ALL Pflicht-Offline-Aufgaben done in Jenkins (hard deadline)", Severity.CRITICAL));

        // TI: Praktikum Gr. B1, 14-täglich Tue 08:15 from 27.10.
        LocalDate ti = LocalDate.of(2026, 10, 27);
        while (!ti.isAfter(LECTURE_END)) {
            out.add(new Deadline(ti, "TI (52105)",
                    "Praktikum Gr. B1 — attend (Anwesenheitspflicht, 14-täglich)", Severity.CRITICAL));
            ti = ti.plusWeeks(2);
        }

        // Softskill: Finanzmanagement weekly Thu 15:45 from 15.10.
        LocalDate soft = LocalDate.of(2026, 10, 15);
        while (!soft.isAfter(LECTURE_END)) {
            out.add(new Deadline(soft, "Finanzmanagement (55851)",
                    "Attend session (Teilnahmeschein)", Severity.IMPORTANT));
            soft = soft.plusWeeks(1);
        }

        // Prüfungsanmeldung window (date TBA — check weekly from 01.11).
        out.add(new Deadline(LocalDate.of(2026, 11, 1), "ALL",
                "Check HISinOne weekly: Prüfungsanmeldung (51101, 51104, 52105, 55851)",
                Severity.CRITICAL));

        out.sort((a, b) -> a.date().compareTo(b.date()));
        return out;
    }

    public static void main(String[] args) {
        List<Deadline> all = generate();
        LocalDate today = args.length > 0 ? LocalDate.parse(args[0]) : LocalDate.now();

        System.out.println("=== Due in the next 7 days (from %s) ===".formatted(today));
        all.stream()
           .filter(d -> !d.date().isBefore(today) && !d.date().isAfter(today.plusDays(7)))
           .forEach(d -> System.out.println("  " + d));

        System.out.println("\n=== HM1 e-Test scoreboard ===");
        System.out.println("  14 Pflichttests — must pass at least 12 (≥75% each).");

        System.out.println("\n=== Full semester: " + all.size() + " deadlines ===");
        System.out.println("(pass a date YYYY-MM-DD to check another week)");
    }
}
