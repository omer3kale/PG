#include <iostream>
using namespace std;

int main()
{
    char eingabe1, eingabe2;

    cout << "Bitte geben Sie die erste Ziffer ein: ";
    cin >> eingabe1;
    cout << "Bitte geben Sie die zweite Ziffer ein: ";
    cin >> eingabe2;

    if (eingabe1 == 'q' || eingabe2 == 'q')
    {
        cout << "Das Programm wurde durch Eingabe von q beendet." << endl;
        return 1;
    }
    else
    {
        int zahl1 = eingabe1 - '0';
        int zahl2 = eingabe2 - '0';
        int ergebnis = zahl1 + zahl2;
        cout << zahl1 << " + " << zahl2 << " = " << ergebnis << endl;
        return 0;
    }
}
