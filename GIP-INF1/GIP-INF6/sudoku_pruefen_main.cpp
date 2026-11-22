// Datei: sudoku_pruefen_main.cpp

#include <iostream>
#include <string>
using namespace std;

const size_t sudoku_groesse = 9;
const size_t eingabe_groesse = 11;

bool pruefe_spalten(int sudoku[][sudoku_groesse])
{
    // Ihr Code hier ...


}

bool pruefe_zeilen(int sudoku[][sudoku_groesse])
{
    // Ihr Code hier ...


}

bool pruefe_bloecke(int sudoku[][sudoku_groesse])
{
    // Ihr Code hier ...


}

void konvertiere(string eingabe[], int sudoku[][sudoku_groesse])
{
    // Ihr Code aus dem letzten Praktikum zum Umwandeln der Eingabe-Texte
    // fuer die Zeilen in das Array sudoku[][] hier hin ...


}

int main() 
{
    int sudoku[sudoku_groesse][sudoku_groesse] = { 0 };
    string eingabe[eingabe_groesse];

    cout << "Bitte geben Sie das Sudoku ein:" << endl;
    for (size_t i = 0; i < eingabe_groesse; i++)
        getline(cin, eingabe[i]);

    konvertiere(eingabe, sudoku);

    bool ps = pruefe_spalten(sudoku);
    bool pz = pruefe_zeilen(sudoku);
    bool pb = pruefe_bloecke(sudoku); 

    if (ps && pz && pb)
        cout << "Das Sudoku ist gueltig." << endl;

    system("PAUSE");
    return 0;
}
