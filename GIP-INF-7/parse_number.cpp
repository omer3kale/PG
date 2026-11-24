#include <iostream>
#include <string>

#include "expect.h"
#include "match.h"

#include "parse_number.h"

void parse_number(std::string input, std::size_t &pos, bool &error_found)
{
    std::cout << "Betrete parse_number()" << std::endl;

    if (expect('0', input, pos))
        match('0', input, pos, error_found);
    else if (expect('1', input, pos))
        match('1', input, pos, error_found);
    else if (expect('2', input, pos))
        match('2', input, pos, error_found);
    else if (expect('3', input, pos))
        match('3', input, pos, error_found);
    else if (expect('4', input, pos))
        match('4', input, pos, error_found);
    else if (expect('5', input, pos))
        match('5', input, pos, error_found);
    else if (expect('6', input, pos))
        match('6', input, pos, error_found);
    else if (expect('7', input, pos))
        match('7', input, pos, error_found);
    else if (expect('8', input, pos))
        match('8', input, pos, error_found);
    else
        match('9', input, pos, error_found);

    std::cout << "Verlasse parse_number()" << std::endl;
}