#include <iostream>
#include <string>

#include "parse_ausdruck.h"

#include "expect.h"
#include "match.h"
#include "parse_term.h"

void parse_ausdruck(std::string input, std::size_t &pos, bool &error_found)
{
    std::cout << "Betrete parse_ausdruck()" << std::endl;

    parse_term(input, pos, error_found);

    while (expect('U', input, pos) || expect('O', input, pos))
    {
        if (expect('U', input, pos))
        {
            std::cout << "Betrete parse_ausdruck(): 'U' Fall" << std::endl;
            match('U', input, pos, error_found);
            parse_term(input, pos, error_found);
            std::cout << "Verlasse parse_ausdruck(): 'U' Fall" << std::endl;
        }
        else if (expect('O', input, pos))
        {
            std::cout << "Betrete parse_ausdruck(): 'O' Fall" << std::endl;
            match('O', input, pos, error_found);
            parse_term(input, pos, error_found);
            std::cout << "Verlasse parse_ausdruck(): 'O' Fall" << std::endl;
        }
    }

    std::cout << "Verlasse parse_ausdruck()" << std::endl;
}