Praktikumstermin Nr. 01, INF: Visual Studio Code, HalloWelt Programm
Ziel dieses Praktikumstermins
Sie machen sich mit der Entwicklungs¬umgebung Visual Studio vertraut. Ferner analysieren Sie einige Grundregeln der Programmiersprache C++.

Ziel hier: Vertraut machen mit der benutzten Entwicklungsumgebung, Analysieren einiger Grundregeln von C++.

Abgabemethodik bei diesem Praktikumstermin
Nachdem Sie alle Aufgaben für sich alleine erfolgreich durchgearbeitet haben, gehen Sie die Aufgaben noch einmal gemeinsam mit der Praktikumsbetreuung durch und beschreiben, was sie beim Durcharbeiten der Aufgaben für Ergebnisse beobachtet haben.

Ob Sie dabei die notwendigen Änderungen im Programm und das entsprechende Neucompilieren und Neustarten des Programms noch einmal wiederholen oder ob Sie das Programmverhalten aus ihrem Gedächtnis bzw. basierend auf etwaigen Notizen, die Sie vielleicht gemacht haben, erzählen entscheiden Sie nach Bedarf gemeinsam mit der Praktikumsaufsicht.

Visual Studio Code auf den FH Terminalrechnern
Sollten Sie das Praktikum an einem Terminalrechner der FH Aachen absolvieren, so brauchen Sie dort Visual Studio Code nicht mehr zu installieren, da es schon vorinstalliert ist.

Achtung: Es ist noch eine „Nicht-GIP-Version“ von Visual Studio Code auf den Terminalrechnern installiert und deren Icon „drängt sich ggfs. in den Vordergrund“. Starten Sie Visual Studio Code also nicht über ein ggfs. vorhandenes Desktop Icon oder über einen entsprechenden Startmenü-Eintrag, denn dann starten Sie wahrscheinlich eine Version ohne die GIP-spezifischen Anpassungen und Erweiterungen.
Öffnen Sie stattdessen einen Dateiexplorer für das Verzeichnis C:\vscodegip und starten Sie die dort vorhandene Datei Code.exe durch Doppelklick.

Aufgabe INF-01.01: (Bestandenen AGUM Test nachweisen)
AGUM = Arbeits-, Gesundheits- und Umweltschutzmanagement

Zur Nutzung der Praktikumsräume müssen Sie eine Sicherheitsunterweisung absolvieren. Dies umfasst Lesematerial und einen Abschlusstest. Zeigen Sie im Praktikum ihren bestandenen AGUM Test vor. Absolvieren Sie den Test schon vor dem Praktikumstermin, nicht erst im Praktikum!

Link zum Test: https://www.ili.fh-aachen.de/goto_elearning_crs_267243.html

Aufgabe INF-01.02: (Projektordner und Arbeitsbereich anlegen)
Folgen Sie den Anweisungen der im GIP-INF Ilias Kurs verfügbaren Präsentation über die „Visual Studio Code – GIP Edition“, um Visual Studio Code zu installieren (falls eigener Rechner) und ein erstes Projekt anzulegen. Beachten Sie dabei:

Nutzen Sie immer die aktuellste Version dieser Präsentation. Es ist durchaus möglich, dass es über das Semester hinweg immer mal wieder aktualisierte Versionen dieser Präsentation in Ilias geben wird.

Benennen Sie das Projekt wie in der Präsentation angegeben mit GIP-Prakt-01-Aufgabe-01.

Auf den Terminalrechnern unbedingt irgendwo unter Laufwerk H: speichern. Nur so stehen die dort gespeicherten Dateien auch automatisch auf anderen Terminalrechnern an gleicher Stelle zur Verfügung.

Wählen Sie nach Anlegen des Projekts (mittels Neues C++ Projekt erstellen und den weiteren in der Präsentation beschriebenen Schritten zum Anlegen und Starten des ersten Projekts) im Menü Datei den Eintrag Arbeitsbereich speichern unter … aus. Ändern Sie den vorgeschlagenen Dateinamen in GIP-2026-2027-workspace und wählen Sie als Verzeichnis für die Speicherung das Verzeichnis eine Ebene höher als das vorgeschlagene Projektverzeichnis aus, sprich das Verzeichnis, in dem sich das GIP-Prakt-01-Aufgabe-01 Projektverzeichnis befindet. Speichern Sie die Arbeitsbereich-Konfiguration dort ab.

Aufgabe INF-01.03: (HalloWelt Programm)
Nutzen Sie das C++ HalloWelt-Programm, welches bei automatisch erstellt wird. Ergänzen Sie die Zeile using namespace std; und ändern Sie std::cout in cout sowie std::endl in endl gemäß dem HalloWelt Programm aus den Vorlesungsunterlagen.
Ändern Sie den Ausgabetext von Hello, World! in Hallo Welt!
Compilieren und starten Sie das geänderte Programm aus Visual Studio Code heraus.

Testlauf:


Aufgabe INF-01.04: (Relevanz return 0 & system(„PAUSE“))
Setzen Sie die Zeilen return 0; und system("PAUSE"); in einen Blockkommentar. Was ist der Unterschied in der Ausführung verglichen mit Aufgabe INF-01.03 und welchen Rückgabewert des Programms beobachten Sie in Visual Studio?

Aufgabe INF-01.05: (Blockkommentare; Codeblöcke auskommentieren)
Ändern Sie den Blockkommentar aus Aufgabe INF-01.04 so, dass alle Zeilen im Rumpf des Hauptprogramms in den Block-kommentar eingeschlossen sind. Führen Sie das Programm aus. Was beobachten Sie? Was können wir also daraus folgern für ein C++ Hauptprogramm mit einem leeren Rumpf? Compiliert so ein Programm? Und wie sieht seine Ausführung aus?

Bemerkung: Dieses Vorgehen, einen Teil des C++ Codes über Kommentare zu „deaktivieren“, nennt man das Auskommentieren dieses (Teils des) Codes.

Aufgabe INF-01.06: (Relevanz von Zeilenumbrüchen)
In C++ werden Anweisungen mit einem Semikolon abgeschlossen. Verändern Sie den Quellcode so, dass Sie die C++ Anweisungen über mehrere Zeilen „strecken“, indem Sie z.B. bei return 0; das return, die 0 und das Semikolon in aufeinanderfolgende Zeilen schreiben. Compiliert und läuft das Programm noch?

Aufgabe INF-01.07: (Semikolon terminiert Anweisungen)
Nehmen Sie nun das Semikolon hinter einer der Anweisungen ganz weg. Compiliert und läuft das Programm noch?

Beobachten Sie die Syntaxprüfung, die schon in den Quelltext-Editor eingebaut ist: Suchen Sie rot unterschlängelte Teile des Quelltexts, fahren Sie mit der Maus darüber und warten Sie zwei Sekunden (Mauszeiger nicht bewegen). Was meldet das kleine Pop-Up für die Fehlerstelle.

Aufgabe INF-01.08: (Mehrere Anweisungen in einer Zeile)
Ergänzen Sie das Semikolon wieder und schreiben Sie mehrere Anweisungen in eine Textzeile des Quelltexts. Compiliert und läuft das Programm noch?

Aufgabe INF-01.09: (Anweisungsblöcke)
Setzen Sie jeden C++ Befehl (der sich ggf. über mehrere Zeilen des Quelltexts erstreckt) in eigene geschweifte Klammern {…}. Compiliert das Programm? Ändert sich etwas an der Programmausführung?

Aufgabe INF-01.10: (Einrückungen)
Einrückungen des C++ Programmcodes (z.B. im Rumpf des Hauptprogramms) dienen nur dazu, die Verständlichkeit des Quelltexts für den Programmierer zu erhöhen. Verifizieren Sie dies, indem Sie zuerst verschiedene Zeilen des Quelltexts verschieden stark einrücken und anschließend alle Einrückungen innerhalb des Quelltexts ganz wegnehmen.

Notlösung: FH Account funktioniert nicht & kein eigener Rechner
Für den Fall, dass ihr FH Account nicht funktionieren sollte (und Sie sich somit nicht an einem FH Terminalrechner einloggen können) und Sie auch nicht an ihrem eigenen Rechner arbeiten können, ist es für dieses Praktikum ausnahmsweise gestattet, eine Online C++ Programmierumgebung zu nutzen, z.B. unter

Sie müssen uns dann aber zeigen können, dass Sie ihren FH Account frühzeitig getestet haben und seitdem im Dialog mit sind, um ihr Account-Problem zu lösen. Ab dem zweiten Praktikum sollte


Praktikumstermin Nr. 02, INF: Umrechnungen, Position im Alphabet
Abgabe: In Ihrem GIP-INF-Praktikumstermin in der Woche vom 19.10. bis 23.10.2026.

Ihre Vorbereitungen fur diesen Praktikumstermin
Bereiten Sie sich auf den Praktikumstermin vor!

Das heisst, Sie sollten Ihre C++-Programme so weit vorarbeiten, dass Sie die geforderten Programme im Praktikum abgeben konnen.

Beachten Sie dabei insbesondere auch die Aufgabe INF-02.04!

Sie konnen alle Losungen gerne bereits komplett vor dem Praktikumstermin vorbereiten beziehungsweise programmieren.

Nutzen Sie, falls notwendig, zum Beispiel die Diskussion mit Mitstudierenden oder das Fragetutorium, falls Sie trotz der Hinweise noch Unterstutzung benotigen, um sich beispielsweise den „Trick“ in Aufgabe INF-02.04 zu erarbeiten.

(Pflicht-) Aufgabe INF-02.01
Umrechnung Celsius in Fahrenheit
Schreiben Sie ein C++-Programm, welches eine Temperatur als double-Fliesskomma-Eingabewert einliest und diese Temperatur anschliessend von Celsius in Fahrenheit umrechnet.

Es ist keine Prufung der Eingabe notwendig. Ihr Programm kann sich darauf verlassen, dass die Benutzereingabe eine korrekte Fliesskommazahl ist.

Die Formel zur Umrechnung einer Celsius-Temperatur in eine Fahrenheit-Temperatur lautet:

T
Fahrenheit
=
T
Celsius
⋅
1,8
+
32
T 
Fahrenheit
​
 =T 
Celsius
​
 ⋅1,8+32

Testlauf
Benutzereingaben sind zur Verdeutlichung im Original unterstrichen.
Bitte geben Sie die Temperatur in Grad Celsius ein:
? 12.3

Die Temperatur in Fahrenheit lautet: 54.14

Drücken Sie eine beliebige Taste . . .

(Pflicht-) Aufgabe INF-02.02
Umrechnung Meter in Fuss
Schreiben Sie ein C++-Programm, welches eine Lange als double-Fliesskomma-Eingabewert einliest und diese Lange anschliessend von Metern in Fuss umrechnet.

Es ist keine Prufung der Eingabe notwendig. Ihr Programm kann sich darauf verlassen, dass die Benutzereingabe eine Fliesskommazahl ist.

Die Formel zur Umrechnung einer Lange von Metern in Fuss lautet:

L
Fuss
=
L
Meter
⋅
3,2808
L 
Fuss
​
 =L 
Meter
​
 ⋅3,2808

Testlauf
Benutzereingaben sind zur Verdeutlichung im Original unterstrichen.


Bitte geben Sie die Laenge in Metern ein:
? 23.4

Die Laenge in Fuss lautet: 76.7707

Drücken Sie eine beliebige Taste . . .
(Pflicht-) Aufgabe INF-02.03
Umrechnung Euro in US-Dollar
Schreiben Sie ein C++-Programm, welches eine Geldmenge als double-Fliesskomma-Eingabewert einliest und diese Geldmenge anschliessend von Euro in US-Dollar umrechnet.

Es ist keine Prufung der Eingabe notwendig. Ihr Programm kann sich darauf verlassen, dass die Benutzereingabe eine Fliesskommazahl ist.

Es muss auch nicht auf zwei Stellen hinter dem Komma gerundet werden. Langere Nachkommaanteile sind erlaubt.

Die Formel zur Umrechnung von Euro in US-Dollar soll lauten:

Geld
US-Dollar
=
Geld
Euro
⋅
1,2957
Geld 
US-Dollar
​
 =Geld 
Euro
​
 ⋅1,2957

Testlauf
Benutzereingaben sind zur Verdeutlichung im Original unterstrichen.


Bitte geben Sie die Geldmenge in Euro ein:
? 34.5

Die Geldmenge in US Dollar lautet: 44.7017

Drücken Sie eine beliebige Taste . . .


(Pflicht-) Aufgabe INF-02.04
Kombinierte Umrechnung
Schreiben Sie ein C++-Programm, welches die Umrechnungen der vorherigen drei Aufgaben in einem einzigen Programm zusammenfasst.

Das Programm soll:

einen double-Fliesskomma-Eingabewert einlesen,

die gewunschte Umrechnung als Integer-Zahl auswahl erfragen und

anschliessend den umgerechneten Wert ausgeben.

Wichtige Einschrankung

Fur diejenigen unter Ihnen, die Konstrukte wie if, case oder Arrays bereits kennen: Das Programm darf kein if, kein case, keinen ?-Operator und keine anderen Kontrollflusskonstrukte, zum Beispiel Schleifen, verwenden.

Ferner durfen keine Datenstrukturen verwendet werden, die noch nicht in der Vorlesung behandelt wurden, beispielsweise Arrays.

Stattdessen durfen nur Eingabe, Ausgabe, Wertzuweisung, Variablen der einfachen Datentypen sowie die Grundrechenarten benutzt werden.

Alle drei vorherigen Umwandlungsberechnungen mussen daher in einer einzigen Berechnung zusammengefasst werden, die auch die Zahl auswahl zur Auswahl der Umrechnungsform einbezieht.

Diese Aufgabe ist als „Knobel-Aufgabe“ gedacht, um eine interessante Beschaftigung mit den Grundrechenarten zu ermoglichen. Sobald if und else eingefuhrt wurden, wurde man naturlich diese Konstrukte verwenden.

Hinweise
Die resultierende Berechnungsformel ist eine Summe, in deren drei Summanden sich die drei einzelnen Umrechnungsformeln wiederfinden.

Jeder Summand besteht aus einem Produkt, also einer Multiplikation.

Der eine Teil des Produkts ist die jeweilige Umrechnungsformel.

In den anderen Teil des Produkts muss der Wert auswahl einbezogen werden.

Wenn ein Wert mit null multipliziert wird, ergibt sich null.

Der Wert null tragt nicht zu einer Summe bei und wird damit nicht berucksichtigt.

Nutzen Sie dies, um die gerade nicht gefragten Teilformeln zu eliminieren.

Testlauf 1: Celsius in Fahrenheit

Ihre Eingabe:
? 12.3

Ihre Auswahl der Umwandlung:
1 - Celsius in Fahrenheit
2 - Meter in Fuss
3 - Euro in US Dollar
1

Das Ergebnis lautet: 54.14

Drücken Sie eine beliebige Taste . . .

Testlauf 2: Meter in Fuss


Ihre Eingabe:
? 23.4

Ihre Auswahl der Umwandlung:
1 - Celsius in Fahrenheit
2 - Meter in Fuss
3 - Euro in US Dollar
2

Das Ergebnis lautet: 76.7707

Drücken Sie eine beliebige Taste . . .

Testlauf 3: Euro in US-Dollar

Ihre Eingabe:
? 34.5

Ihre Auswahl der Umwandlung:
1 - Celsius in Fahrenheit
2 - Meter in Fuss
3 - Euro in US Dollar
3

Das Ergebnis lautet: 44.7017

Drücken Sie eine beliebige Taste . . .

(Pflicht-) Aufgabe INF-02.05
Position im Alphabet
Schreiben Sie ein C++-Programm, welches einen Kleinbuchstaben uber die Tastatur einliest und die Position des Buchstabens im Alphabet berechnet und ausgibt.

Die Positionszahlung beginnt bei 1 fur den Buchstaben a.

Sie konnen davon ausgehen, dass der Benutzer nur korrekte Eingaben macht.

Hinweis
Lassen Sie Ihr Programm den ASCII-Wert, also den ganzzahligen Positionsindex in der ASCII-Tabelle, des eingegebenen Buchstabens berechnen.

Finden Sie dann heraus und programmieren Sie, wie aus diesem Wert die Position im Alphabet berechnet werden kann, sodass dies fur alle Buchstaben a, b, c, … auf die gleiche Weise funktioniert.

Geben Sie den berechneten Wert anschliessend entsprechend den Testläufen aus.

Testlauf 1

Bitte geben Sie den Buchstaben ein:
? a

Der Buchstabe a hat die Position 1 im Alphabet.

Drücken Sie eine beliebige Taste . . .

Bitte geben Sie den Buchstaben ein:
? d

Der Buchstabe d hat die Position 4 im Alphabet.

Drücken Sie eine beliebige Taste . . .

Bitte geben Sie den Buchstaben ein:
? z

Der Buchstabe z hat die Position 26 im Alphabet.

Drücken Sie eine beliebige Taste . . .


Praktikumstermin Nr. 03: Vergleich von Datumsangaben (if-else) und Taschenrechner (if-else)
Abgabe: In Ihrem GIP-INF-Praktikumstermin in der Woche vom 16.10. bis 30.10.2026.

Aufgabe INF-03.01
Vergleich von Datumsangaben
Schreiben Sie ein C++ Programm, welches zwei Datumsangaben einliest und ausgibt, welche der beiden Datumsangaben früher als die andere liegt.

Sind beide Datumsangaben gleich, so soll das Programm eine entsprechende Meldung ausgeben.

Das Programm soll die Lösung nur durch Vergleich der beiden Tages-, Monats- und Jahreszahlen bestimmen (in einer von Ihnen gewählten Reihenfolge der Vergleiche). Die Lösung darf also nicht z.B. dadurch bestimmt werden, dass beide Datumsangaben komplett in Tage umgerechnet werden und dann die Tageszahlen miteinander verglichen werden (auch wenn dies als Lösung auch funktionieren würde). Hintergrund: Sie sollen das if-else Konstrukt üben, und das muss nur beim vorgeschriebenen Lösungsweg mehrfach verwendet werden … Sie können davon ausgehen, dass der Benutzer nur Eingaben macht, bei denen beide Datumsangaben gültig sind.

Hinweis: Bevor Sie mit der Programmierung einer Lösung beginnen, überlegen Sie sich bitte genau, wie Sie selbst vorgehen, wenn Sie zwei Datumsangaben miteinander vergleichen. In welcher Reihenfolge vergleichen Sie die Datumsteile miteinander? Was entscheidet den Vergleich?

Hintergrund
Das Ziel dieser Aufgabe ist das Üben von mehrfachen Entscheidungen mit if-else.

Überlegen Sie vor der Implementierung:

In welcher Reihenfolge vergleichen Sie Datumsteile?

Wann ist die Entscheidung bereits eindeutig?

Wann müssen weitere Vergleiche durchgeführt werden?

Testlauf 1
Bitte geben Sie den Tag des ersten Datums ein: 3 
 Bitte geben Sie den Monat des ersten Datums ein: 8 
 Bitte geben Sie das Jahr des ersten Datums ein: 2016 
 

Bitte geben Sie den Tag des zweiten Datums ein: 3 
 Bitte geben Sie den Monat des zweiten Datums ein: 8 
 Bitte geben Sie das Jahr des zweiten Datums ein: 2016 
 

Beide Datumsangaben sind gleich.

Testlauf 2
Bitte geben Sie den Tag des ersten Datums ein: 31 
 Bitte geben Sie den Monat des ersten Datums ein: 12 
 Bitte geben Sie das Jahr des ersten Datums ein: 1999 

Bitte geben Sie den Tag des zweiten Datums ein: 3 
 Bitte geben Sie den Monat des zweiten Datums ein: 4 
 Bitte geben Sie das Jahr des zweiten Datums ein: 2000 
 
 Das erste Datum liegt vor dem zweiten Datum.

Testlauf 3
Bitte geben Sie den Tag des ersten Datums ein: 5
 Bitte geben Sie den Monat des ersten Datums ein: 7
 Bitte geben Sie das Jahr des ersten Datums ein: 2000
 
 Bitte geben Sie den Tag des zweiten Datums ein: 6
 Bitte geben Sie den Monat des zweiten Datums ein: 6
 Bitte geben Sie das Jahr des zweiten Datums ein: 2000


Das zweite Datum liegt vor dem ersten Datum.

Testlauf 4
Bitte geben Sie den Tag des ersten Datums ein: 2 
 Bitte geben Sie den Monat des ersten Datums ein: 3 
 Bitte geben Sie das Jahr des ersten Datums ein: 2010 
 
 Bitte geben Sie den Tag des zweiten Datums ein: 8 
 Bitte geben Sie den Monat des zweiten Datums ein: 8 
 Bitte geben Sie das Jahr des zweiten Datums ein: 2005 

Das zweite Datum liegt vor dem ersten Datum.

Aufgabe INF-03.02: Taschenrechner mit Buchstaben- und Zahleneingabe
Aufgabenstellung
Schreiben Sie ein C++ Hauptprogramm, welches zwei „einstellige“ ganze Zahlen (d.h. jeweils nur eine Zahlziffer 0 bis 9) einliest und diese beiden Zahlen dann addiert und das Ergebnis ausgibt. In diesem Fall soll sich das Programm mit dem Rückgabewert 0 beenden.

Sollte der Benutzer jedoch bei einer der beiden Zahlen statt einer Zahlziffer den Buchstaben q eingeben, so soll sich das Programm mit einer entsprechenden Meldung (siehe Testläufe) und dem Rückgabewert 1 beenden.

Sie können davon ausgehen, dass der Benutzer nur korrekte Eingaben macht.

Hinweis: Da nun auch ein Buchstabe eine korrekte Eingabe darstellt, muss Ihr Programm die beiden Benutzereingaben auf jeden Fall erst einmal als Buchstabe einlesen (auch wenn der Ausgabetext auf den Bildschirm sagt „bitte geben Sie eine Ziffer ein“). Erst wenn geprüft wurde, ob die jeweilige Eingabe nicht der Buchstabe q ist bzw. dass die Eingabe eine der Zahlziffern 0 bis 9 ist, müssen Sie diese Eingabe dann in den richtigen Zahlwert umwandeln und mit den beiden resultierenden Zahlwerten dann das Ergebnis ausrechnen.

Hinweis 2: Sie können bei der Programmentwicklung in Entwicklungsschritten vorgehen. Im Praktikum muss aber auch dann nur das finale Ergebnis vorgezeigt werden; die Entwicklungsschritte könnten Ihnen aber helfen, die Lösung Schritt-für-Schritt zu entwickeln. Gehen Sie z.B. in folgenden Schritten vor:

Schreiben Sie ein C++ Programm, welches zwei Buchstaben nacheinander einliest

und die eingegebenen Buchstabenwerte wieder ausgibt.

Bitte geben Sie die erste Ziffer ein: ? 3
 Bitte geben Sie die zweite Ziffer ein: ? q
 Der erste eingegebene Buchstabe lautet: 3
 Der zweite eingegebene Buchstabe lautet: q
 Drücken Sie eine beliebige Taste . . .

Ändern / Erweitern Sie das Programm, so dass es nach der Eingabe und der

Ausgabe der obigen Zeilen prüft, ob es sich bei einer oder beiden der Eingaben um den Buchstaben q handelt. In diesem Fall soll zusätzlich ein entsprechender Ausgabetext ausgegeben werden und das Programm soll mit dem Rückgabewert 1 enden. Ansonsten soll nichts ausgegeben werden (außer dem Text von system(„PAUSE“);) und das Programm soll sich mit dem Rückgabewert 0 beenden.

Bitte geben Sie die erste Ziffer ein: ? 3
 Bitte geben Sie die zweite Ziffer ein: ? q
 Der erste eingegebene Buchstabe lautet: 3
 Der zweite eingegebene Buchstabe lautet: q
 Das Programm wurde durch Eingabe von q beendet
. Drücken Sie eine beliebige Taste . . .

Ändern / Erweitern Sie das Programm, so dass es für den Fall, dass nicht der

Buchstabe q eingegeben wurde, die beiden Eingabe-„Buchstaben“ in ihre entsprechenden Zahlwerte umrechnet.

Bitte geben Sie die erste Ziffer ein: ?3
 Bitte geben Sie die zweite Ziffer ein: ? 4
 Der erste eingegebene Buchstabe lautet: 3 
 Der zweite eingegebene Buchstabe lautet: 4 
 Der Buchstabe 3 wurde jetzt in den Ganzzahl-Wert 3 umgerechnet. 
 Der Buchstabe 4 wurde jetzt in den Ganzzahl-Wert 4 umgerechnet. 
 Drücken Sie eine beliebige Taste . . . 

Ändern Sie das Programm so, dass der Ergebniswert berechnet und ausgegeben

wird. Passen Sie alle anderen Ausgaben des Programms so an, dass Sie den Anforderungen der Testläufe der finalen Lösung entsprechen (insbesondere Löschen der „Zwischenausgaben“ wie „der … eingegebene Buchstabe lautet …“ und „der Buchstabe … wurde jetzt in den Ganzzahl-Wert … umgerechnet“).

Testlauf 1
Bitte geben Sie die erste Ziffer ein: 3
 Bitte geben Sie die zweite Ziffer ein: 4


3 + 4 = 7

Return-Code: 0

Testlauf 2
Bitte geben Sie die erste Ziffer ein: 8
 Bitte geben Sie die zweite Ziffer ein: 9


8 + 9 = 17

Return-Code:0

Testlauf 3
Bitte geben Sie die erste Ziffer ein: 0
 Bitte geben Sie die zweite Ziffer ein: 0


0 + 0 = 0

Return-Code:0

Testlauf 4
Bitte geben Sie die erste Ziffer ein: q
 Bitte geben Sie die zweite Ziffer ein: 3


Das Programm wurde durch Eingabe von q beendet.

Return-Code: 1

Testlauf 5
Bitte geben Sie die erste Ziffer ein: 5
 Bitte geben Sie die zweite Ziffer ein: q


Das Programm wurde durch Eingabe von q beendet.

Return-Code: 1

Testlauf 6
Bitte geben Sie die erste Ziffer ein: q
 Bitte geben Sie die zweite Ziffer ein: q


Das Programm wurde durch Eingabe von q beendet.

Praktikumstermin Nr. 04: Caesar-Verschlüsselung (if-else, Schleife, C++ Strings)
Abgabe: In Ihrem GIP-INF-Praktikumstermin in der Woche vom 02.11. bis 06.11.2026.

Aufgabe INF-04.01 – Caesar-Verschlüsselung
Schreiben Sie eine C++ Funktion



welche eine einzeilige Zeichenkette als String einliest und diese Zeichenkette anschließend durch Rechtsverschiebung um v Positionen verschlüsselt zurückgibt.

Ihre Funktion soll eingefügt werden in eine .cpp Datei mit Hauptprogramm, welche in Ilias zum Download vorgegeben ist. Dieses Hauptprogramm führt auch einige Tests mit ihrer Funktion aus, so dass Sie Hinweise bekommen, ob ihre Funktion korrekt zu funktionieren scheint oder nicht.

Die Verschlüsselung durch Verschieben („Caesar-Verschlüsselung“ oder auch „Caesar-Chiffre“) funktioniert dabei wie folgt:
Die Verschiebepositionen-Anzahl v legt fest, dass jeder Kleinbuchstabe und jeder Großbuchstabe aus dem Originaltext ersetzt wird durch seinen v-ten Nachfolger im Alphabet. Die Verschiebung wird dabei zyklisch fortgesetzt, d.h. es erfolgt ein sogenannter Wrap-Around bei den Kleinbuchstaben sowie bei den Großbuchstaben (man fängt vorne wieder an, wenn man am Ende angekommen ist).

a → b → c → d → … → x → y → z 
 |__________________________| 

A → B → C → D → … → X → Y → Z 
 |__________________________| 

z + 1 = a 

z + 2 = b 

z + 3 = c 

Lassen Sie sich durch den Begriff „verschieben“ nicht irritieren: Bei der Caesar-Verschlüsselung bleibt jeder Buchstaben an seinem Platz. Aber der Buchstabe wird ersetzt durch einen anderen Buchstaben, der sich durch die Verschiebung des Alphabets um die angegebene Anzahl an Positionen ergibt.

Beispiel :

Bei einer Verschiebepositionen-Anzahl v von 2 würde der Text apz als crb verschlüsselt, weil sich das c aus dem a durch Verschieben um 2 ergibt, das r aus dem p durch Verschieben um 2 und das b aus dem z ergibt durch Verschieben um 2 (beim „Verschlüsseln“ des Buchstabens z inklusive Wrap-Around beim ersten Verschiebe-Schritt, d.h. aus dem z wird beim ersten Verschiebe-Schritt ein a und aus diesem beim zweiten Verschiebe-Schritt ein b).

Beispiel:

Original:            a   p   z 

	
Verschluesselt:      c   r   b 

Alle Zeichen anders als Klein- und Großbuchstaben (z.B. Satzzeichen, Leerzeichen) sollen unverändert in den verschlüsselten Text übernommen werden.

Ihr Programm soll erst die Zeichenkette und dann die Anzahl der Verschiebepositionen v als (positive) ganze Zahl einlesen. Die 0 (Null, d.h. keine Verschiebung) ist als Eingabe erlaubt. Es sind auch Verschiebungen um mehr als 26 Positionen erlaubt, d.h. größer als der Umfang des Alphabets, siehe Testläufe. Der zu verschlüsselnde Originaltext darf auch leer sein.

Ihr Programm kann davon ausgehen, dass der Benutzer nur korrekte Eingaben macht.

Testlauf 1
Verschluesselungs-Test erfolgreich (test case passed)! abc ==(2)⟹ cde
Verschluesselungs-Test erfolgreich (test case passed)! ABC ==(2)⟹ CDE
Verschluesselungs-Test erfolgreich (test case passed)! abc.,!? ==(4)⟹ efg.,!?
Verschluesselungs-Test erfolgreich (test case passed)! apz ==(2)⟹ crb 
Verschluesselungs-Test erfolgreich (test case passed)! xYz. ABC ==(5)⟹ cDe. FGH 
Verschluesselungs-Test erfolgreich (test case passed)! ., !? ==(4)⟹ ., !? 
Verschluesselungs-Test erfolgreich (test case passed)! abcXYZ! ==(0)⟹ abcXYZ! 
Verschluesselungs-Test erfolgreich (test case passed)! ==(7)⟹
Verschluesselungs-Test erfolgreich (test case passed)! aBxYz! ==(26)⟹ aBxYz! 
Verschluesselungs-Test erfolgreich (test case passed)! aB! ==(28)⟹ cD! 
Verschluesselungs-Test erfolgreich (test case passed)! aBxYz! ==(52)⟹ aBxYz! 
Verschluesselungs-Test erfolgreich (test case passed)! aBxYz! ==(78)⟹ aBxYz! 
Verschluesselungs-Test erfolgreich (test case passed)! aBxYz! ==(99)⟹ vWsTu! 
Verschluesselungs-Test erfolgreich (test case passed)! abc def xyz!ABC XYZ? ==(3)⟹ def ghi abc!DEF ABC? 
Verschluesselungs-Test erfolgreich (test case passed)! Abc Zyx! ==(55)⟹ Def Cba! 
Bitte geben Sie den zu verschluesselnden Text ein: ? abc def xyz!ABC XYZ?
Bitte geben Sie die Anzahl Verschiebepositionen ein (als positive ganze Zahl): ? 3
Verschluesselt: def ghi abc!DEF ABC?
Drücken Sie eine beliebige Taste . . .

Testlauf 2
Verschluesselungs-Test erfolgreich (test case passed)! abc ==(2)⟹ cde
Verschluesselungs-Test erfolgreich (test case passed)! ABC ==(2)⟹ CDE
Verschluesselungs-Test erfolgreich (test case passed)! abc.,!? ==(4)⟹ efg.,!?
Verschluesselungs-Test erfolgreich (test case passed)! apz ==(2)⟹ crb
Verschluesselungs-Test erfolgreich (test case passed)! xYz. ABC ==(5)⟹ cDe. FGH
Verschluesselungs-Test erfolgreich (test case passed)! ., !? ==(4)⟹ ., !?
Verschluesselungs-Test erfolgreich (test case passed)! abcXYZ! ==(0)⟹ abcXYZ!
Verschluesselungs-Test erfolgreich (test case passed)! ==(7)⟹
Verschluesselungs-Test erfolgreich (test case passed)! aBxYz! ==(26)⟹ aBxYz!
Verschluesselungs-Test erfolgreich (test case passed)! aB! ==(28)⟹ cD!
Verschluesselungs-Test erfolgreich (test case passed)! aBxYz! ==(52)⟹ aBxYz!
Verschluesselungs-Test erfolgreich (test case passed)! aBxYz! ==(78)⟹ aBxYz!
Verschluesselungs-Test erfolgreich (test case passed)! aBxYz! ==(99)⟹ vWsTu!
Verschluesselungs-Test erfolgreich (test case passed)! abc def xyz!ABC XYZ? ==(3)⟹ def ghi abc!DEF ABC?
Verschluesselungs-Test erfolgreich (test case passed)! Abc Zyx! ==(55)⟹ Def Cba!
Bitte geben Sie den zu verschluesselnden Text ein: ? Abc Zyx!Bitte geben Sie die Anzahl Verschiebepositionen ein (als positive ganze Zahl): ? 55
Verschluesselt: Def Cba!
Drücken Sie eine beliebige Taste . . .

(Pflicht-)Aufgabe INF-04.02: Busfahrplan (while, do-while, if-else)
Schreiben Sie ein C++ Programm, welches den Tagesfahrplan eines Busses berechnet und ausgibt, so wie er an einer Haltestelle aushängen könnte.

Die Uhrzeit des ersten Busses wird vom Benutzer abgefragt, wobei Stunde und Minute dieser Uhrzeit einzeln als Ganzzahlen eingelesen werden. Diese Uhrzeit wird dann vom System zur Überprüfung erneut ausgegeben, siehe Testlauf.

Danach wird die Taktzeit des Busses in Minuten eingelesen. Die Taktzeit darf nicht größer als 180 Minuten sein und muss auch größer Null sein. Ab Mitternacht fahren keine Busse mehr.

Die Benutzereingaben betreffend Uhrzeit des ersten Busses und Taktzeit sollen vom System auf Korrektheit überprüft werden. Verwenden Sie dazu die do-while Schleife.

Testlauf 1
@@@ #div style=„font: normal 14pt ‚Courier New‘; width: 100%“> @

Bitte geben Sie die Stunden der Startuhrzeit ein: ? -5 
 Bitte geben Sie die Stunden der Startuhrzeit ein: ? 0
 Bitte geben Sie die Minuten der Startuhrzeit ein: ? 60 
 Bitte geben Sie die Minuten der Startuhrzeit ein: ? 30 
 Der erste Bus faehrt also um 0:30 Uhr. 
 Bitte geben Sie die Taktzeit in Minuten ein: ? 200 
 Bitte geben Sie die Taktzeit in Minuten ein: ? 10 
 0:30 0:40 0:50 
 1:0 1:10 1:20 1:30 1:40 1:50 
 2:0 2:10 2:20 2:30 2:40 2:50 
 3:0 3:10 3:20 3:30 3:40 3:50 
 4:0 4:10 4:20 4:30 4:40 4:50 
 5:0 5:10 5:20 5:30 5:40 5:50 
 6:0 6:10 6:20 6:30 6:40 6:50 
 7:0 7:10 7:20 7:30 7:40 7:50 
 8:0 8:10 8:20 8:30 8:40 8:50 
 9:0 9:10 9:20 9:30 9:40 9:50 
 10:0 10:10 10:20 10:30 10:40 10:50 
 11:0 11:10 11:20 11:30 11:40 11:50 
 12:0 12:10 12:20 12:30 12:40 12:50 
 13:0 13:10 13:20 13:30 13:40 13:50 
 14:0 14:10 14:20 14:30 14:40 14:50 
 15:0 15:10 15:20 15:30 15:40 15:50 
 16:0 16:10 16:20 16:30 16:40 16:50 
 17:0 17:10 17:20 17:30 17:40 17:50 
 18:0 18:10 18:20 18:30 18:40 18:50 
 19:0 19:10 19:20 19:30 19:40 19:50 
 20:0 20:10 20:20 20:30 20:40 20:50 
 21:0 21:10 21:20 21:30 21:40 21:50 
 22:0 22:10 22:20 22:30 22:40 22:50 
 23:0 23:10 23:20 23:30 23:40 23:50 
 Drücken Sie eine beliebige Taste . . .

Testlauf 2
Bitte geben Sie die Stunden der Startuhrzeit ein: ? 4 
 Bitte geben Sie die Minuten der Startuhrzeit ein: ? 0 
 Der erste Bus faehrt also um 4:0 Uhr. 
 Bitte geben Sie die Taktzeit in Minuten ein: ? 11 
 4:0 4:11 4:22 4:33 4:44 4:55 
 5:6 5:17 5:28 5:39 5:50 
 6:1 6:12 6:23 6:34 6:45 6:56 
 7:7 7:18 7:29 7:40 7:51 
 8:2 8:13 8:24 8:35 8:46 8:57 
 9:8 9:19 9:30 9:41 9:52 
 10:3 10:14 10:25 10:36 10:47 10:58 
 11:9 11:20 11:31 11:42 11:53 
 12:4 12:15 12:26 12:37 12:48 12:59 
 13:10 13:21 13:32 13:43 13:54 
 14:5 14:16 14:27 14:38 14:49 
 15:0 15:11 15:22 15:33 15:44 15:55 
 16:6 16:17 16:28 16:39 16:50 
 17:1 17:12 17:23 17:34 17:45 17:56 
 18:7 18:18 18:29 18:40 18:51 
 19:2 19:13 19:24 19:35 19:46 19:57 
 20:8 20:19 20:30 20:41 20:52 
 21:3 21:14 21:25 21:36 21:47 21:58 
 22:9 22:20 22:31 22:42 22:53 
 23:4 23:15 23:26 23:37 23:48 23:59 
 Drücken Sie eine beliebige Taste . . . 

Testlauf 3
Bitte geben Sie die Stunden der Startuhrzeit ein: ? 15 
 Bitte geben Sie die Minuten der Startuhrzeit ein: ? 59 
 Der erste Bus faehrt also um 15:59 Uhr. 
 Bitte geben Sie die Taktzeit in Minuten ein: ? 90 
 15:59 
 17:29 
 18:59 
 20:29 
 21:59 
 23:29 
 Drücken Sie eine beliebige Taste . . . 

Aufgabe INF-04.03 – Kleinste und größte Zahl
Schreiben Sie ein C++ Hauptprogramm, welches nacheinander fünf ganze Zahlen (int) einliest und zum Abschluss die kleinste und die größte der eingegebenen Zahlen wieder ausgibt. Ferner soll ausgegeben werden, an wievielter Stelle der eingegeben Zahlen diese beiden Zahlen eingegeben wurden.

Sollte einer der letztendlichen „Extremwerte“ mehrfach in der Eingabe vorkommen, so soll das erste Vorkommen gemerkt und am Schluss ausgegeben werden.

Ihr Programm soll dabei eine oder mehrere Schleifen benutzen, d.h. es sollen sich in ihrem C++ Programm keine mehrfach vorkommenden fast identischen Code-Teile finden. Außerdem soll ihr Programm nicht alle fünf eingegebenen Zahlen miteinander vergleichen, denn das wäre sehr aufwändig in der Programmierung und sehr wenig „smart“ im algorithmischen Vorgehen. Überlegen Sie sich, wie Sie vorgehen würden, wenn Sie von fünf Personen die älteste und die jüngste Person bestimmen müssten. Programmieren Sie dann hren C++ Algorithmus entsprechend. Denken Sie dran: Sie haben die Möglichkeit, sich in Variablen bestimmte Informationen zu „merken“. Nutzen Sie diese Möglichkeit!

Testlauf 1
Bitte geben Sie die 1. Zahl ein: ? 2
 Bitte geben Sie die 2. Zahl ein: ? 3
 Bitte geben Sie die 3. Zahl ein: ? 1
 Bitte geben Sie die 4. Zahl ein: ? 5
 Bitte geben Sie die 5. Zahl ein: ? 4
 Die 3. Zahl war die kleinste der eingegebenen Zahlen und lautet: 1
 Die 4. Zahl war die groesste der eingegebenen Zahlen und lautet: 5
 Drücken Sie eine beliebige Taste . . .

Testlauf 2
Bitte geben Sie die 1. Zahl ein: ? -5
 Bitte geben Sie die 2. Zahl ein: ? -4
 Bitte geben Sie die 3. Zahl ein: ? -3
 Bitte geben Sie die 4. Zahl ein: ? -2
 Bitte geben Sie die 5. Zahl ein: ? -1
 Die 1. Zahl war die kleinste der eingegebenen Zahlen und lautet: -5
 Die 5. Zahl war die groesste der eingegebenen Zahlen und lautet: -1
 Drücken Sie eine beliebige Taste . . .

Testlauf 3
Bitte geben Sie die 1. Zahl ein: ? 0
 Bitte geben Sie die 2. Zahl ein: ? 0
 Bitte geben Sie die 3. Zahl ein: ? 0
 Bitte geben Sie die 4. Zahl ein: ? 0
 Bitte geben Sie die 5. Zahl ein: ? 0
 Die 1. Zahl war die kleinste der eingegebenen Zahlen und lautet: 0
 Die 1. Zahl war die groesste der eingegebenen Zahlen und lautet: 0
 Drücken Sie eine beliebige Taste . . .



 Praktikumstermin Nr. 05: Säulendiagramm, Sudoku einlesen, Animation
Abgabe: in Ihrem GIP-INF-Praktikumstermin in der Woche vom 9. bis 13. November 2026.

(Pflicht-) Aufgabe INF-05.01 – Säulendiagramm
Schleifen, if-else, Arrays

Schreiben Sie ein C++-Programm, welches fünf ganzzahlige Werte zwischen 1 und 9 (beides inklusive) in ein Array einliest und die eingegebenen Werte anschließend als stehendes Säulendiagramm aus Pluszeichen und Sternen ausgibt.

„Leere Positionen“ oberhalb der Säulen sollen durch Punkte dargestellt werden.

Die Eingabewerte sollen geprüft werden. Bei einer falschen Eingabe soll der Benutzer erneut zur Eingabe aufgefordert werden. Sie können davon ausgehen, dass der Benutzer nur Zahlen eingibt.

Hinweis zur Ausgabe
Mit den uns zur Verfügung stehenden Mechanismen kann die Ausgabe auf cout nur von links nach rechts und dabei gleichzeitig von oben nach unten erfolgen.

Beispiel für ein Säulendiagramm mit den Eingabewerten 9, 2, 6, 3, 7:



Um dieses Ausgabeverhalten umzusetzen, muss das Programm alle Höhenlinienwerte von 9 bis 1 in dieser Reihenfolge durchlaufen. Für jeden Höhenlinienwert werden die fünf Eingabewerte nacheinander geprüft:

Liegt ein Eingabewert oberhalb der Höhenlinie, wird ein Punkt ausgegeben.

Liegt er auf der Höhenlinie, wird ein Sternchen ausgegeben.

Liegt er unterhalb der Höhenlinie, wird ein Pluszeichen ausgegeben.

Die Ausgabe wird zeilenweise von links nach rechts erzeugt. Zuerst wird jede Säule für die Höhenlinie 9 geprüft, danach für 8 und so weiter bis 1:



Testläufe
Benutzereingaben sind zur Verdeutlichung unterstrichen.

Testlauf 1
Bitte geben Sie die 1. Zahl ein: ? 99
Bitte geben Sie die 1. Zahl ein: ? -5
Bitte geben Sie die 1. Zahl ein: ? 9
Bitte geben Sie die 2. Zahl ein: ? 2
Bitte geben Sie die 3. Zahl ein: ? 6
Bitte geben Sie die 4. Zahl ein: ? 3
Bitte geben Sie die 5. Zahl ein: ? 7
9*....
8+....
7+...*
6+.*.+
5+.+.+
4+.+.+
3+.+*+
2+*+++
1+++++
 12345
Drücken Sie eine beliebige Taste . . .
Testlauf 2
Bitte geben Sie die 1. Zahl ein: ? 1
Bitte geben Sie die 2. Zahl ein: ? 2
Bitte geben Sie die 3. Zahl ein: ? 3
Bitte geben Sie die 4. Zahl ein: ? 4
Bitte geben Sie die 5. Zahl ein: ? 5
9.....
8.....
7.....
6.....
5....*
4...*+
3..*++
2.*+++
1*++++
 12345
Drücken Sie eine beliebige Taste . . .
Testlauf 3
Bitte geben Sie die 1. Zahl ein: ? 3
Bitte geben Sie die 2. Zahl ein: ? 3
Bitte geben Sie die 3. Zahl ein: ? 3
Bitte geben Sie die 4. Zahl ein: ? 3
Bitte geben Sie die 5. Zahl ein: ? 3
9.....
8.....
7.....
6.....
5.....
4.....
3*****
2+++++
1+++++
 12345
Drücken Sie eine beliebige Taste . . .
(Pflicht-) Aufgabe INF-05.02 – Sudoku einlesen
Zweidimensionale Arrays

Sudoku ist ein Logikrätsel. In der üblichen Version ist es das Ziel, ein 9 × 9-Gitter mit den Ziffern 1 bis 9 so zu füllen, dass jede Ziffer in jeder Spalte, in jeder Zeile und in jedem 3 × 3-Unterquadrat genau einmal vorkommt.

Schreiben Sie ein C++-Programm, welches ein gelöstes Sudoku einliest und in einem Array



abspeichert. In diesem Array sollen nur die 9 × 9 Zahlenwerte abgelegt werden. Die optischen Blocktrennzeichen der Eingabe dürfen nicht im Array vorkommen. Außerdem sollen die tatsächlichen Zahlenwerte gespeichert werden, nicht die ASCII-Codes der Ziffern: Eine 3 soll also als Wert 3 gespeichert werden, nicht als ASCII-Wert 51.

Lesen Sie dazu zuerst die 11 Eingabezeilen in ein Array ein:



Es müssen zwei Einträge mehr als die neun Sudoku-Zeilen sein, da die Eingabe zwei Zeilen mit horizontalen Trennstrichen enthält. In der Eingabe gibt es keine Leerzeichen; diese werden durch Punkte ersetzt. Die Zahlen im Sudoku-Eingabetext sind immer einstellig.

Ihr Programm kann davon ausgehen, dass der Benutzer nur korrekt formatierte Eingaben macht. Die Gültigkeit der Zahlen – ob sie einstellig sind und den Sudoku-Regeln entsprechen – muss nicht geprüft werden. Der Benutzer gibt das Sudoku vollständig selbst ein, einschließlich der Punkte, senkrechten Striche und Minuszeichen.

Anschließend soll das Sudoku mit anderen Trennzeichen wieder ausgegeben werden (siehe Testläufe). Die Ausgabe darf nur unter Verwendung der Werte aus unsigned int sudoku[9][9] erzeugt werden. Auf den Eingabetext eingabe[] darf dann nicht mehr zurückgegriffen werden.

Hinweis: Kopieren Sie die Beispiel-Sudokus aus den Testläufen in einen separaten Editor oder in einen Blockkommentar in Ihrem C++-Quelltext. Dann können Sie die Eingaben per Copy-and-paste für Ihre Testläufe verwenden.

Testläufe
Benutzereingaben sind diesmal nicht unterstrichen, sondern blau gefärbt.

Testlauf 1
Bitte geben Sie das Sudoku ein:
.5.1.4.|.8.6.9.|.7.2.3
.8.7.2.|.3.4.5.|.6.1.9
.9.6.3.|.2.1.7.|.5.4.8
-------|-------|-------
.6.2.8.|.1.3.4.|.9.5.7
.1.9.7.|.6.5.2.|.8.3.4
.4.3.5.|.7.9.8.|.1.6.2
-------|-------|-------
.2.4.6.|.9.7.1.|.3.8.5
.7.5.1.|.4.8.3.|.2.9.6
.3.8.9.|.5.2.6.|.4.7.1

Das Sudoku lautet:
;5;1;4;//;8;6;9;//;7;2;3
;8;7;2;//;3;4;5;//;6;1;9
;9;6;3;//;2;1;7;//;5;4;8
=======//=======//=======
;6;2;8;//;1;3;4;//;9;5;7
;1;9;7;//;6;5;2;//;8;3;4
;4;3;5;//;7;9;8;//;1;6;2
=======//=======//=======
;2;4;6;//;9;7;1;//;3;8;5
;7;5;1;//;4;8;3;//;2;9;6
;3;8;9;//;5;2;6;//;4;7;1
Drücken Sie eine beliebige Taste . . .
Testlauf 2
Bitte geben Sie das Sudoku ein:
.9.4.6.|.3.1.8.|.2.7.5
.1.2.3.|.7.5.6.|.9.4.8
.5.8.7.|.2.4.9.|.6.3.1
-------|-------|-------
.8.1.4.|.9.2.5.|.7.6.3
.2.7.5.|.1.6.3.|.8.9.4
.6.3.9.|.8.7.4.|.1.5.2
-------|-------|-------
.3.6.8.|.5.9.2.|.4.1.7
.4.5.1.|.6.8.7.|.3.2.9
.7.9.2.|.4.3.1.|.5.8.6

Das Sudoku lautet:
;9;4;6;//;3;1;8;//;2;7;5
;1;2;3;//;7;5;6;//;9;4;8
;5;8;7;//;2;4;9;//;6;3;1
=======//=======//=======
;8;1;4;//;9;2;5;//;7;6;3
;2;7;5;//;1;6;3;//;8;9;4
;6;3;9;//;8;7;4;//;1;5;2
=======//=======//=======
;3;6;8;//;5;9;2;//;4;1;7
;4;5;1;//;6;8;7;//;3;2;9
;7;9;2;//;4;3;1;//;5;8;6
Drücken Sie eine beliebige Taste . . .
(Pflicht-) Aufgabe INF-05.03 – Animation
Diese Aufgabe ist keine eigentliche Challenge, sondern bereitet auf die weitere Nutzung der grafischen Ausgabe in kommenden GIP-INF-Praktika vor. Sie ist Pflicht; wir setzen daher voraus, dass die Grafik auf Ihrem System funktioniert.

In dieser Aufgabe verwenden wir die Grafikbibliothek von CImg in einer für GIP-Zwecke angepassten Form. Diese Bibliothek sollte auch auf Linux- und Mac-Rechnern funktionieren. Wir sichern Ihnen jedoch nur zu, dass sie auf den FH-Terminalrechnern funktioniert.

Legen Sie in einem neuen Projekt eine leere Headerdatei CImgGIP08.h an.

Kopieren Sie den Inhalt der gleichnamigen Datei CImgGIP08.h aus dem GIP-INF-Praktikumsordner in Ilias in diese Datei.

Legen Sie eine Quelltextdatei main.cpp an und kopieren Sie den Inhalt der in Ilias vorgegebenen Datei animation_geruest.cpp hinein.

Ausgangssituation

Aufgabe
Erweitern Sie das Hauptprogramm so, dass sich das weiße Quadrat immer zwischen dem linken und rechten Rand des blauen Quadrats hin und her bewegt.

Sobald der linke Rand des weißen Quadrats den linken Rand des blauen Quadrats berührt oder der rechte Rand des weißen Quadrats den rechten Rand des blauen Quadrats erreicht, soll sich die Bewegungsrichtung umkehren. Bei jedem Schleifendurchlauf soll die x-Koordinate des weißen Quadrats um den Wert delta erhöht oder erniedrigt werden.

Praktikumstermin Nr. 06: Sudoku prüfen, Zeichenkette suchen rekursiv inkl. Unit Tests
Abgabe: in Ihrem GIP-INF-Praktikumstermin in der Woche vom 16. bis 20. November 2026.

(Pflicht-) Aufgabe INF-06.01 – Sudoku auf Gültigkeit prüfen
Schleifen, if, Strings, Funktionen

Nutzen Sie Ihre Lösung der vorherigen Sudoku Praktikumsaufgabe (aus dem vorigen GIP-INF Praktikum) für das Einlesen des Sudokus.

Legen Sie im Projekt eine leere Datei sudoku_pruefen_main.cpp an und kopieren Sie den Inhalt der in Ilias liegenden gleichnamigen Datei in diese Datei. Ergänzen Sie den Inhalt dieser Datei zu einem C++ Programm, welches ein Sudoku einliest (nutzen Sie dafür gerne Ihre Lösung der Sudoku Praktikumsaufgabe aus dem vorigen GIP-INF Praktikum) und in einem Array …

unsigned int sudoku[9][9] = { 0 };

… abspeichert. Anschließend soll das Programm prüfen, ob das Sudoku den Sudoku-Regeln genügt: „… jede Ziffer in jeder Spalte, in jeder Zeile und in jedem Block (3 × 3-Unterquadrat) genau einmal vorkommt“.

Das Ergebnis der Prüfung soll ausgegeben werden mitsamt Hinweisen auf mehrfach oder gar nicht vorkommenden Zahlen, siehe Testläufe. Die Zeilen, Spalten und Blöcke sind dabei von 0 an durchnummeriert. Innerhalb der Prüfung einer Zeile/Spalte/Blocks werden „Regelverletzungen“ in aufsteigender Zeilen-/Spalten-/Block- und aufsteigender Zahlen-Reihenfolge ausgegeben.

Die Prüfungen der Sudoku-Korrektheit und die Umwandlung der Eingabezeilen in die Sudoku-Werte (gemäß der Aufgabe aus dem letzten Praktikum) sind dabei zwecks Strukturierung des Gesamtprogramms in Funktionen ausgelagert. Da die Größe des Sudokus und die Anzahl der Eingabezeilen als globale Konstanten verfügbar sind, brauchen diese Werte auch nicht als weitere Funktionsparameter übergeben zu werden, wie das sonst üblich ist, wenn Arrays als Funktionsparameter übergeben werden.

Hinweis (muss aber nicht unbedingt genutzt werden): Für Sudoku-Blöcke 0 … 8 liegen …

die Zeilen des Blocks im Bereich von zeile = block / 3 * 3 bis zeile <= block / 3 * 3 + 2

die Spalten des Blocks im Bereich von spalte = block % 3 * 3 bis spalte <= block % 3 * 3 + 2

Die Sudokus der beiden Testläufe finden Sie auch in einer Datei in Ilias.

Sollten bei nicht gültigen Sudokus die „Meldungen“ ihres Programms in einer anderen Reihenfolge sein als in den Testläufen oder einzelne „Meldungen“ über mehrfach vorhandene bzw. nicht vorhandene Zahlen bei ihnen mehrfach vorkommen, so ist das auch o.k. Letztendlich müssen die einzelnen Meldungen (mal abgesehen von Wiederholungen und Reihenfolge) aber sein wie in den Testläufen …

In Ilias finden Sie eine HTML Datei sudoku_check.html, mittels der Sie den Outputs ihrer Praktikumslösung für drei gegebene Sudokus auf einfache Art prüfen können. Laden Sie die HTML Datei in ihren Webbrowser und copy-pasten Sie dann den Output ihres C++ Programms in den Textbereich rechts des jeweiligen Sudokus. Die Webseite sollte Ihnen dann Rückmeldung geben, inwieweit die Ausgaben ihres Programms von der gewünschten Lösung abweichen. Eine unterschiedliche Reihenfolge der Ausgabezeilen wird dabei von der Webseite „ignoriert“, d.h. auch bei anderer Reihenfolge werden Sie eine positive Rückmeldung bekommen, wenn die Zeilen an sich stimmen und vollständig sind …



Testläufe
Benutzereingaben diesmal nicht unterstrichen, da sonst zu unübersichtlich.

Testlauf 1
Bitte geben Sie das Sudoku ein:
.5.1.4.|.8.6.9.|.7.2.3
.8.7.2.|.3.4.5.|.6.1.9
.9.6.3.|.2.1.7.|.5.4.8
-------|-------|-------
.6.2.8.|.1.3.4.|.9.5.7
.1.9.7.|.6.5.2.|.8.3.4
.4.3.5.|.7.9.8.|.1.6.2
-------|-------|-------
.2.4.6.|.9.7.1.|.3.8.5
.7.5.1.|.4.8.3.|.2.9.6
.3.8.9.|.5.2.6.|.4.7.1
Das Sudoku ist gueltig.
Drücken Sie eine beliebige Taste . . .
Im folgenden Sudoku wiederholen sich bei den „Meldungen“ bestimmte Muster. Dadurch ist es leichter zu kontrollieren, ob von ihrem Programm die richtigen Meldungen generiert werden. Ich habe durch Farbgebung versucht, die sich wiederholenden Muster hervorzuheben …

Testlauf 2
Bitte geben Sie das Sudoku ein:
.1.1.4.|.8.6.9.|.7.2.3
.8.7.2.|.3.4.5.|.6.1.9
.9.6.3.|.2.1.7.|.5.4.8
-------|-------|-------
.6.2.8.|.1.3.4.|.9.5.7
.1.9.7.|.6.5.2.|.8.3.4
.4.3.5.|.7.9.8.|.1.6.2
-------|-------|-------
.2.4.6.|.9.7.1.|.3.8.5
.7.5.1.|.4.8.3.|.2.9.6
.3.8.9.|.5.2.6.|.4.7.9
Spalte 0: Zahl 1 kommt mehrfach vor.
Spalte 0: Zahl 5 kommt nicht vor.
Spalte 8: Zahl 1 kommt nicht vor.
Spalte 8: Zahl 9 kommt mehrfach vor.
Zeile 0: Zahl 1 kommt mehrfach vor.
Zeile 0: Zahl 5 kommt nicht vor.
Zeile 8: Zahl 1 kommt nicht vor.
Zeile 8: Zahl 9 kommt mehrfach vor.
Block 0: Zahl 1 kommt mehrfach vor.
Block 0: Zahl 5 kommt nicht vor.
Block 8: Zahl 1 kommt nicht vor.
Block 8: Zahl 9 kommt mehrfach vor.
Drücken Sie eine beliebige Taste . . .
(Pflicht-) Aufgabe INF-06.02 – Zeichenkette suchen rekursiv inkl. Unit Tests
Rekursion, String-operationen

Legen Sie im Projekt eine leere Datei suchen_rekursiv.cpp an und kopieren Sie den Inhalt der in Ilias liegenden gleichnamigen Datei in diese Datei. Programmieren Sie in dieser Datei plus einer zugehörigen Headerdatei eine C++-Funktion
int zeichenkette_suchen_rekursiv(string text,
                                 string zkette,
                                 size_t text_pos = 0,
                                 size_t text_such_pos = 0,
                                 size_t zkette_such_pos = 0
);




welche durch Rekursion ermittelt, ob die Zeichenkette zkette in dem einzeiligen Text text (ggf. mit Leerzeichen und/oder Satzzeichen) vorkommt. Die Funktion darf keinerlei Schleifen benutzen.

text_pos bezeichne die Position innerhalb von text, ab der gerade versucht wird, die Zeichenkette zkette zu finden. Wenn an einer text_pos das linkeste Zeichen der gesuchten Zeichenkette gefunden wird, so werden ab dieser Stelle mittels der Positionszähler text_such_pos (aktuelle Vergleichsposition im einzeiligen Text) und zkette_such_pos (aktuelle Vergleichsposition in der zu suchenden Zeichenkette) auch alle weiteren Zeichen des Textes und der Such-Zeichenkette rekursiv verglichen.

Sollte die Zeichenkette nicht in dem Text vorkommen, so soll der Wert -1 zurückgegeben werden. Anderenfalls wird die Startposition zurückgegeben, ab der das erste (linkeste) Vorkommen von zkette in text beginnt. Die Zählung der Positionen im Text beginne bei 0.

Die Zeichenkette zkette darf nicht der leere String sein. Ihre Funktion kann aber davon ausgehen, dass dies immer der Fall ist und muss dies nicht prüfen. Der Text text darf auch der leere String sein. In einem leeren Text kann natürlich nichts gefunden werden.

Schreiben Sie ferner ein C++-Hauptprogramm, welches die Eingaben entgegennimmt, die Funktion aufruft und das Ergebnis ausgibt (siehe Testläufe).

Es ist Ihnen nicht erlaubt, Systemfunktionen zur Suche von Zeichenketten o.ä. zu verwenden. Schleifen auch nicht erlaubt, siehe oben.

Legen Sie im Projekt eine leere Headerdatei gip_mini_catch.h an und kopieren Sie den Inhalt der in Ilias liegenden gleichnamigen Datei in diese Headerdatei. Verfahren Sie ebenso mit den Dateien aufruf_visualisieren.h und aufruf_visualisieren.cpp.

Legen Sie im Projekt eine leere Datei test_suchen_rekursiv.cpp an und kopieren Sie den Inhalt der in Ilias liegenden gleichnamigen Datei in diese Datei. Ergänzen Sie die Unit Tests in dieser Datei um die Testfälle, die in den unten angegebenen Testläufen vorgegeben sind.

Legen Sie im Projekt eine leere Datei suchen_rekursiv_main.cpp an und kopieren Sie den Inhalt der in Ilias liegenden gleichnamigen Datei in diese Datei. Ergänzen Sie das C++-Hauptprogramm so, dass es Eingaben entgegennimmt, die Funktion aufruft und das Ergebnis ausgibt (siehe Testläufe).

Testläufe
Benutzereingaben sind zur Verdeutlichung unterstrichen.

Testlauf 1
Alle Tests erfolgreich (26 REQUIREs in 7 Test Cases)
Bitte geben Sie den Text ein: ? abcdefg
Bitte geben Sie die zu suchende Zeichenkette ein: ? bcd99
Die Zeichenkette 'bcd99' ist NICHT in dem Text 'abcdefg' enthalten.
Drücken Sie eine beliebige Taste . . .
Testlauf 2
Alle Tests erfolgreich (26 REQUIREs in 7 Test Cases)
Bitte geben Sie den Text ein: ? xy abc abcdefgh
Bitte geben Sie die zu suchende Zeichenkette ein: ? abcde
Die Zeichenkette 'abcde' ist in dem Text 'xy abc abcdefgh' enthalten.
Sie startet ab Zeichen 7 (bei Zaehlung ab 0).
Drücken Sie eine beliebige Taste . . .
Testlauf 3
Alle Tests erfolgreich (26 REQUIREs in 7 Test Cases)
Bitte geben Sie den Text ein: ? xyz 123 456 abc
Bitte geben Sie die zu suchende Zeichenkette ein: ? 123 4
Die Zeichenkette '123 4' ist in dem Text 'xyz 123 456 abc' enthalten.
Sie startet ab Zeichen 4 (bei Zaehlung ab 0).
Drücken Sie eine beliebige Taste . . .
Testlauf 4
Alle Tests erfolgreich (26 REQUIREs in 7 Test Cases)
Bitte geben Sie den Text ein: ? abc defg
Bitte geben Sie die zu suchende Zeichenkette ein: ? abc d
Die Zeichenkette 'abc d' ist in dem Text 'abc defg' enthalten.
Sie startet ab Zeichen 0 (bei Zaehlung ab 0).
Drücken Sie eine beliebige Taste . . .
Testlauf 5
Alle Tests erfolgreich (26 REQUIREs in 7 Test Cases)
Bitte geben Sie den Text ein: ? abcdefg
Bitte geben Sie die zu suchende Zeichenkette ein: ? efg
Die Zeichenkette 'efg' ist in dem Text 'abcdefg' enthalten.
Sie startet ab Zeichen 4 (bei Zaehlung ab 0).
Drücken Sie eine beliebige Taste . . .
Zum Verständnis
Interner Beispielablauf der Rekursion: Text abcabcdef, Zeichenkette abcd

Wenn Sie in der Datei suchen_rekursiv.cpp den Aufruf der Funktion aufruf_visualisieren(…) „aktivieren“, dann sehen Sie auf dem Bildschirm erläuternde Programmausgaben, die Ihnen helfen sollen nachzuvollziehen, welche rekursiven Aufrufe in ihrem Programm stattfinden und welchen „Suchsituationen“ diese entsprechen. Die blau eingefärbten Zeilen werden nicht von der Funktion aufruf_visualisieren(…) ausgegeben, sondern diese habe ich hier ergänzt, um Ihnen ein besseres Verständnis des rekursiven Algorithmus zu ermöglichen. Ihre Lösung muss aber nicht genauso vorgehen und „entscheiden“, wie dies „mein“ Algorithmus gemäß der blauen Ausgabezeilen tut.

zeichenkette_suchen_rekursiv(
           text: "abcdabcdef",
           zkette: "cda",
           text_pos: 0,
           text_such_pos: 0,
           zkette_such_pos: 0)
0123456789
abcdabcde
cda ((zkette ab 'text_pos' 0, d.h. ab dort im Text wird aktuell verglichen))
^ ((hier wird gerade verglichen))
Suche an dieser Pos. erfolglos ('a' ungleich 'c'), schiebe zkette eine Pos. weiter
======================================================================
zeichenkette_suchen_rekursiv(
           text: "abcdabcdef",
           zkette: "cda",
           text_pos: 1,
           text_such_pos: 1,
           zkette_such_pos: 0)
0123456789
abcdabcde
 cda ((zkette ab 'text_pos' 1, d.h. ab dort im Text wird aktuell verglichen))
 ^ ((hier wird gerade verglichen))
Suche an dieser Pos. erfolglos ('b' ungleich 'c'), schiebe zkette eine Pos. weiter
======================================================================
zeichenkette_suchen_rekursiv(
           text: "abcdabcdef",
           zkette: "cda",
           text_pos: 2,
           text_such_pos: 2,
           zkette_such_pos: 0)
0123456789
abcdabcde
  cda ((zkette ab 'text_pos' 2, d.h. ab dort im Text wird aktuell verglichen))
  ^ ((hier wird gerade verglichen))
Zeichen c gefunden, mache weiter
======================================================================
zeichenkette_suchen_rekursiv(
           text: "abcdabcdef",
           zkette: "cda",
           text_pos: 2,
           text_such_pos: 3,
           zkette_such_pos: 1)
0123456789
abcdabcde
  cda ((zkette ab 'text_pos' 2, d.h. ab dort im Text wird aktuell verglichen))
   ^ ((hier wird gerade verglichen))
Zeichen d gefunden, mache weiter
======================================================================
zeichenkette_suchen_rekursiv(
           text: "abcdabcdef",
           zkette: "cda",
           text_pos: 2,
           text_such_pos: 4,
           zkette_such_pos: 2)
0123456789
abcdabcde
  cda ((zkette ab 'text_pos' 2, d.h. ab dort im Text wird aktuell verglichen))
    ^ ((hier wird gerade verglichen))
Zeichen a gefunden und damit Zeichenkette komplett gefunden
Die Zeichenkette 'cda' ist in dem Text 'abcdabcdef' enthalten.
Sie startet ab Zeichen 2 (bei Zaehlung ab 0).
======================================================================
======================================================================
======================================================================
Weiterer Suchfall:

zeichenkette_suchen_rekursiv(
           text: "abcdabcdef",
           zkette: "cde",
           text_pos: 0,
           text_such_pos: 0,
           zkette_such_pos: 0)
0123456789
abcdabcde
cde ((zkette ab 'text_pos' 0, d.h. ab dort im Text wird aktuell verglichen))
^ ((hier wird gerade verglichen))
Suche an dieser Pos. erfolglos ('a' ungleich 'c'), schiebe zkette eine Pos. weiter
======================================================================
zeichenkette_suchen_rekursiv(
           text: "abcdabcdef",
           zkette: "cde",
           text_pos: 1,
           text_such_pos: 1,
           zkette_such_pos: 0)
0123456789
abcdabcde
 cde ((zkette ab 'text_pos' 1, d.h. ab dort im Text wird aktuell verglichen))
 ^ ((hier wird gerade verglichen))
Suche an dieser Pos. erfolglos ('b' ungleich 'c'), schiebe zkette eine Pos. weiter
======================================================================
zeichenkette_suchen_rekursiv(
           text: "abcdabcdef",
           zkette: "cde",
           text_pos: 2,
           text_such_pos: 2,
           zkette_such_pos: 0)
0123456789
abcdabcde
  cde ((zkette ab 'text_pos' 2, d.h. ab dort im Text wird aktuell verglichen))
  ^ ((hier wird gerade verglichen))
Zeichen c gefunden, mache weiter
======================================================================
zeichenkette_suchen_rekursiv(
           text: "abcdabcdef",
           zkette: "cde",
           text_pos: 2,
           text_such_pos: 3,
           zkette_such_pos: 1)
0123456789
abcdabcde
  cde ((zkette ab 'text_pos' 2, d.h. ab dort im Text wird aktuell verglichen))
   ^ ((hier wird gerade verglichen))
Zeichen d gefunden, mache weiter
======================================================================
zeichenkette_suchen_rekursiv(
           text: "abcdabcdef",
           zkette: "cde",
           text_pos: 2,
           text_such_pos: 4,
           zkette_such_pos: 2)
0123456789
abcdabcde
  cde ((zkette ab 'text_pos' 2, d.h. ab dort im Text wird aktuell verglichen))
    ^ ((hier wird gerade verglichen))
Suche an dieser Pos. erfolglos ('a' ungleich 'e'), schiebe zkette eine Pos. weiter
======================================================================
zeichenkette_suchen_rekursiv(
           text: "abcdabcdef",
           zkette: "cde",
           text_pos: 3,
           text_such_pos: 3,
           zkette_such_pos: 0)
0123456789
abcdabcde
   cde ((zkette ab 'text_pos' 3, d.h. ab dort im Text wird aktuell verglichen))
   ^ ((hier wird gerade verglichen))
Suche an dieser Pos. erfolglos ('d' ungleich 'c'), schiebe zkette eine Pos. weiter
======================================================================
zeichenkette_suchen_rekursiv(
           text: "abcdabcdef",
           zkette: "cde",
           text_pos: 4,
           text_such_pos: 4,
           zkette_such_pos: 0)
0123456789
abcdabcde
    cde ((zkette ab 'text_pos' 4, d.h. ab dort im Text wird aktuell verglichen))
    ^ ((hier wird gerade verglichen))
Suche an dieser Pos. erfolglos ('a' ungleich 'c'), schiebe zkette eine Pos. weiter
======================================================================
zeichenkette_suchen_rekursiv(
           text: "abcdabcdef",
           zkette: "cde",
           text_pos: 5,
           text_such_pos: 5,
           zkette_such_pos: 0)
0123456789
abcdabcde
     cde ((zkette ab 'text_pos' 5, d.h. ab dort im Text wird aktuell verglichen))
     ^ ((hier wird gerade verglichen))
Suche an dieser Pos. erfolglos ('b' ungleich 'c'), schiebe zkette eine Pos. weiter
======================================================================
zeichenkette_suchen_rekursiv(
           text: "abcdabcdef",
           zkette: "cde",
           text_pos: 6,
           text_such_pos: 6,
           zkette_such_pos: 0)
0123456789
abcdabcde
      cde ((zkette ab 'text_pos' 6, d.h. ab dort im Text wird aktuell verglichen))
      ^ ((hier wird gerade verglichen))
Zeichen c gefunden, mache weiter
======================================================================
zeichenkette_suchen_rekursiv(
           text: "abcdabcdef",
           zkette: "cde",
           text_pos: 6,
           text_such_pos: 7,
           zkette_such_pos: 1)
0123456789
abcdabcde
      cde ((zkette ab 'text_pos' 6, d.h. ab dort im Text wird aktuell verglichen))
       ^ ((hier wird gerade verglichen))
Zeichen d gefunden, mache weiter
======================================================================
zeichenkette_suchen_rekursiv(
           text: "abcdabcdef",
           zkette: "cde",
           text_pos: 6,
           text_such_pos: 8,
           zkette_such_pos: 2)
0123456789
abcdabcde
      cde ((zkette ab 'text_pos' 6, d.h. ab dort im Text wird aktuell verglichen))
        ^ ((hier wird gerade verglichen))
Zeichen e gefunden und damit Zeichenkette komplett gefunden
Die Zeichenkette 'cde' ist in dem Text 'abcdabcdf' enthalten.
Sie startet ab Zeichen 6 (bei Zaehlung ab 0).

