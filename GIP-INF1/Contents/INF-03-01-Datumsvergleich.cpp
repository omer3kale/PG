#include <iostream>
using namespace std;

int main()
{
    int tag1, monat1, jahr1, tag2, monat2, jahr2;

    cout << "Bitte geben Sie den Tag des ersten Datums ein: ";
    cin >> tag1;
    cout << "Bitte geben Sie den Monat des ersten Datums ein: ";
    cin >> monat1;
    cout << "Bitte geben Sie das Jahr des ersten Datums ein: ";
    cin >> jahr1;
    cout << "Bitte geben Sie den Tag des zweiten Datums ein: ";
    cin >> tag2;
    cout << "Bitte geben Sie den Monat des zweiten Datums ein: ";
    cin >> monat2;
    cout << "Bitte geben Sie das Jahr des zweiten Datums ein: ";
    cin >> jahr2;

    if (jahr1 != jahr2)
    {
        if (jahr1 < jahr2)
            cout << "Das erste Datum liegt vor dem zweiten Datum." << endl;
        else
            cout << "Das zweite Datum liegt vor dem ersten Datum." << endl;
    }
    else if (monat1 != monat2)
    {
        if (monat1 < monat2)
            cout << "Das erste Datum liegt vor dem zweiten Datum." << endl;
        else
            cout << "Das zweite Datum liegt vor dem ersten Datum." << endl;
    }
    else if (tag1 != tag2)
    {
        if (tag1 < tag2)
            cout << "Das erste Datum liegt vor dem zweiten Datum." << endl;
        else
            cout << "Das zweite Datum liegt vor dem ersten Datum." << endl;
    }
    else
    {
        cout << "Beide Datumsangaben sind gleich." << endl;
    }

    return 0;
}
