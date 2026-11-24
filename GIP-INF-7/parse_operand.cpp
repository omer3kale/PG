#include <iostream>
#include <string>

#include "parse_operand.h"

#include "expect.h"
#include "match.h"
#include "parse_number.h"
#include "parse_ausdruck.h"

void parse_operand(std::string input, std::size_t &pos, bool &error_found)
{
    std::cout << "Betrete parse_operand()" << std::endl;

    if (expect('(', input, pos))
    {
        std::cout << "Betrete parse_operand(): '(' Fall" << std::endl;
        match('(', input, pos, error_found);
        parse_ausdruck(input, pos, error_found);
        match(')', input, pos, error_found);
        std::cout << "Verlasse parse_operand(): '(' Fall" << std::endl;
    }
    else
    {
        parse_number(input, pos, error_found);
    }

    std::cout << "Verlasse parse_operand()" << std::endl;
}