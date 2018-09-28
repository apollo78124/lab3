//
// Created by dldms on 9/27/2018.
//

#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() put this in one cpp file
#include "catch.hpp"
#include "stack.hpp"

TEST_CASE("A new stack is empty", "[stack")
{
    Stack tester;
    REQUIRE(tester.empty() == true);
    REQUIRE(tester.full() == false);

    for (int i = 0; i < 10; i++) {
        tester.push(i);
    }

    REQUIRE(tester.empty() == false);
    REQUIRE(tester.full() == true);

    tester.print();
    std::cout << "Current top: " << tester.top() << std::endl;

    for (int i = 0; i < 10; i++) {
        tester.pop();
    }
    REQUIRE(tester.empty() == true);
    REQUIRE(tester.full() == false);

    std::cout << "Current top after pop: " << tester.top() << std::endl;
}