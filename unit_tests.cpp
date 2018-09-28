//
// Created by dldms on 9/27/2018.
//

#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() put this in one cpp file
#include "catch.hpp"
#include "stack.cpp"

TEST_CASE("A new stack is empty", "[stack")
{
    Stack tester;
    REQUIRE(tester.empty() == true);
    REQUIRE(tester.full() == false);
}