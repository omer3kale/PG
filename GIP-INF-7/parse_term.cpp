#include <iostream>
#include <string>

#include "parse_term.h"

#include "expect.h"
#include "match.h"
#include "parse_operand.h"

void parse_term(std::string input, std::size_t &pos, bool &error_found)
{
    std::cout << "Betrete parse_term()" << std::endl;

    parse_operand(input, pos, error_found);

    while (expect('>', input, pos) || expect('<', input, pos))
    {
        if (expect('>', input, pos))
        {
            std::cout << "Betrete parse_term(): '>' Fall" << std::endl;
            match('>', input, pos, error_found);
            parse_operand(input, pos, error_found);
            std::cout << "Verlasse parse_term(): '>' Fall" << std::endl;
        }
        else if (expect('<', input, pos))
        {
            std::cout << "Betrete parse_term(): '<' Fall" << std::endl;
            match('<', input, pos, error_found);
            parse_operand(input, pos, error_found);
            std::cout << "Verlasse parse_term(): '<' Fall" << std::endl;
        }
    }

    std::cout << "Verlasse parse_term()" << std::endl;
}