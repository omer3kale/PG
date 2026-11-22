#include <iostream>
using namespace std;

int main()
{
    int stunde, minute, takt;

    // Stunde einlesen mit do-while (0-23)
    do
    {
        cout << "Bitte geben Sie die Stunden der Startuhrzeit ein: ? ";
        cin >> stunde;
    } while (stunde < 0 || stunde > 23);

    // Minute einlesen mit do-while (0-59)
    do
    {
        cout << "Bitte geben Sie die Minuten der Startuhrzeit ein: ? ";
        cin >> minute;
    } while (minute < 0 || minute > 59);

    cout << "Der erste Bus faehrt also um " << stunde << ":" << minute << " Uhr." << endl;

    // Taktzeit einlesen mit do-while (1-180)
    do
    {
        cout << "Bitte geben Sie die Taktzeit in Minuten ein: ? ";
        cin >> takt;
    } while (takt <= 0 || takt > 180);

    // Fahrplan berechnen und ausgeben
    int aktuelle_stunde = stunde;
    int aktuelle_minute = minute;
    int bus_counter = 0;

    while (aktuelle_stunde < 24)
    {
        cout << aktuelle_stunde << ":" << aktuelle_minute << " ";
        bus_counter++;

        // Zeilenumbruch nach jedem 6. Bus für bessere Lesbarkeit
        if (bus_counter % 6 == 0)
        {
            cout << endl;
        }

        // Nächste Abfahrtszeit berechnen
        aktuelle_minute += takt;
        aktuelle_stunde += aktuelle_minute / 60;
        aktuelle_minute = aktuelle_minute % 60;
    }
    cout << endl;

    system("PAUSE");
    return 0;
}
