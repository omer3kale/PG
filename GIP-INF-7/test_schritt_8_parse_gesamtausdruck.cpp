#define TEST_FILE test_schritt_8_parse_gesamtausdruck

#include <string>

#include "gip_mini_catch.h"

#include "parse_gesamtausdruck.h"

TEST_CASE("parse_gesamtausdruck() bekommt einen korrekt gebildeten Gesamt-Ausdruck") {
    std::size_t pos = 0;
    bool error_found = false;
    std::string input = "";

    pos = 0;
    error_found = false;
    input = "2.";
    parse_gesamtausdruck(input, pos, error_found);
    REQUIRE(error_found == false);
    REQUIRE(pos == input.length());

    pos = 0;
    error_found = false;
    input = "1U2.";
    parse_gesamtausdruck(input, pos, error_found);
    REQUIRE(error_found == false);
    REQUIRE(pos == input.length());

    pos = 0;
    error_found = false;
    input = "(1U2).";
    parse_gesamtausdruck(input, pos, error_found);
    REQUIRE(error_found == false);
    REQUIRE(pos == input.length());

    pos = 0;
    error_found = false;
    input = "1U2O3.";
    parse_gesamtausdruck(input, pos, error_found);
    REQUIRE(error_found == false);
    REQUIRE(pos == input.length());

    pos = 0;
    error_found = false;
    input = "(1U2O3).";
    parse_gesamtausdruck(input, pos, error_found);
    REQUIRE(error_found == false);
    REQUIRE(pos == input.length());

    pos = 0;
    error_found = false;
    input = "3O1<2.";
    parse_gesamtausdruck(input, pos, error_found);
    REQUIRE(error_found == false);
    REQUIRE(pos == input.length());

    pos = 0;
    error_found = false;
    input = "3O(1<2).";
    parse_gesamtausdruck(input, pos, error_found);
    REQUIRE(error_found == false);
    REQUIRE(pos == input.length());

    pos = 0;
    error_found = false;
    input = "(3O(1<2)).";
    parse_gesamtausdruck(input, pos, error_found);
    REQUIRE(error_found == false);
    REQUIRE(pos == input.length());

    pos = 0;
    error_found = false;
    input = "4>3O1<2.";
    parse_gesamtausdruck(input, pos, error_found);
    REQUIRE(error_found == false);
    REQUIRE(pos == input.length());

    pos = 0;
    error_found = false;
    input = "(4>3)O(1<2).";
    parse_gesamtausdruck(input, pos, error_found);
    REQUIRE(error_found == false);
    REQUIRE(pos == input.length());

    pos = 0;
    error_found = false;
    input = "(4>3O1<2).";
    parse_gesamtausdruck(input, pos, error_found);
    REQUIRE(error_found == false);
    REQUIRE(pos == input.length());

    pos = 0;
    error_found = false;
    input = "((4>3)O1<2).";
    parse_gesamtausdruck(input, pos, error_found);
    REQUIRE(error_found == false);
    REQUIRE(pos == input.length());

    pos = 0;
    error_found = false;
    input = "(4>3O(1<2)).";
    parse_gesamtausdruck(input, pos, error_found);
    REQUIRE(error_found == false);
    REQUIRE(pos == input.length());

    pos = 0;
    error_found = false;
    input = "((4>3)O(1<2)).";
    parse_gesamtausdruck(input, pos, error_found);
    REQUIRE(error_found == false);
    REQUIRE(pos == input.length());
}

TEST_CASE("parse_gesamtausdruck() bekommt einen inkorrekt gebildeten Gesamt-Ausdruck") {
    std::size_t pos = 0;
    bool error_found = false;
    std::string input = "";

    pos = 0;
    error_found = false;
    input = "2U";
    parse_gesamtausdruck(input, pos, error_found);
    REQUIRE(error_found == true || pos != input.length());

    pos = 0;
    error_found = false;
    input = "2U3";
    parse_gesamtausdruck(input, pos, error_found);
    REQUIRE(error_found == true || pos != input.length());

    pos = 0;
    error_found = false;
    input = "1UO2";
    parse_gesamtausdruck(input, pos, error_found);
    REQUIRE(error_found == true || pos != input.length());
}

TEST_CASE("parse_gesamtausdruck() bei leerem Input") {
    std::size_t pos = 0;
    bool error_found = false;

    parse_gesamtausdruck("", pos, error_found);
    REQUIRE(error_found == true);
    REQUIRE(pos == 0);
}

TEST_CASE("parse_gesamtausdruck() veraendert bei korrekt gebildetem Gesamtausdruck den error_found Indikator nicht") {
    std::size_t pos = 0;
    bool error_found = false;
    std::string input = "1U2.";

    parse_gesamtausdruck(input, pos, error_found);
    REQUIRE(error_found == false);
    REQUIRE(pos == input.length());

    pos = 0;
    error_found = true; 
    parse_gesamtausdruck(input, pos, error_found);
    REQUIRE(error_found == true);
    REQUIRE(pos == input.length());
}
