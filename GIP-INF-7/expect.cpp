#include "expect.h"

#include <iostream>
#include <string>

bool expect(char c, std::string input, std::size_t pos)
{
    std::cout << "Teste auf das Zeichen " << c << std::endl;

    if ( pos >= input.length() )
    {
        std::cout << "Aber schon am Ende der "
                  << "Eingabe-Zeichenkette angelangt.\n";
        return false;
    }
    if ( input.at(pos) == c )
    {
        std::cout << "Zeichen " << c << " gefunden.\n";
        return true;
    }
    else
    {
        std::cout << "Test auf " << c << " nicht erfolgreich. "
                  << "Stattdessen " << input.at(pos)
                  << " gesehen.\n";
        return false;
    }
}