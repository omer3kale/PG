#include "match.h"

#include <iostream>
#include <string>

void match(char c, std::string input, std::size_t &pos,
           bool &error_found)
{
    std::cout << "Betrete match() fuer das Zeichen " << c
              << std::endl;

    if ( pos >= input.length() ) {
        std::cout << "Input-Zeichenkette zu kurz. "
                  << "Erwarte noch das Zeichen " << c
                  << std::endl
                  << "Verlasse match()" << std::endl;
        error_found = true;
        return;
    }
    if ( input.at(pos) != c ) {
        std::cout << "Fehler: an Position "
                  << pos << ", erwarte "
                  << c << " und sehe " << input.at(pos)
                  << std::endl;
        std::cout << "Verlasse match()" << std::endl;
        error_found = true;
        return;
    }

    pos++;

    std::cout << "Zeichen " << c << " konsumiert.\n"
              << "Verlasse match() fuer das Zeichen "
              << c << std::endl;

    // In diesem Fall behält die Variable error_found
    // den Wert, den der Aufrufer übergeben hatte.
    // Es könnte ja sein, dass es vorher schon mal
    // einen Fehler gab ...
}
