#include <iostream>
using namespace std;

int main()
{
    int zahl;
    int kleinste, groesste;
    int pos_kleinste = 1, pos_groesste = 1;

    // Erste Zahl einlesen und als Initialwert setzen
    cout << "Bitte geben Sie die 1. Zahl ein: ? ";
    cin >> zahl;
    kleinste = zahl;
    groesste = zahl;

    // Restliche 4 Zahlen einlesen und vergleichen
    for (int i = 2; i <= 5; i++)
    {
        cout << "Bitte geben Sie die " << i << ". Zahl ein: ? ";
        cin >> zahl;

        if (zahl < kleinste)
        {
            kleinste = zahl;
            pos_kleinste = i;
        }
        if (zahl > groesste)
        {
            groesste = zahl;
            pos_groesste = i;
        }
    }

    cout << "Die " << pos_kleinste << ". Zahl war die kleinste der eingegebenen Zahlen und lautet: " << kleinste << endl;
    cout << "Die " << pos_groesste << ". Zahl war die groesste der eingegebenen Zahlen und lautet: " << groesste << endl;

    system("PAUSE");
    return 0;
}
