#include <iostream>
#include <string>

#include "parse_gesamtausdruck.h"

#include "expect.h"
#include "match.h"
#include "parse_ausdruck.h"

void parse_gesamtausdruck(std::string input, std::size_t &pos, bool &error_found)
{
    std::cout << "Betrete parse_gesamtausdruck()" << std::endl;

    parse_ausdruck(input, pos, error_found);
    match('.', input, pos, error_found);

    std::cout << "Verlasse parse_gesamtausdruck()" << std::endl;
}