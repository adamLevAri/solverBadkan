//
//  Test.cpp
//  operatorOverload
//
//  Created by Adam Lev-Ari on 01/01/2020.
//  Copyright © 2020 Adam Lev-Ari. All rights reserved.
//

#include "doctest.h"
#include "solver.hpp"
using namespace ariel;

TEST_CASE("Test case 1") {
   	VAR x;

    CHECK(solve((2*x^2) - 4*x + 3 == 9) == 3);
    CHECK(solve((2*x^2) - 4*x + 3 == 9) == 3);
    CHECK(solve((x^2) + 6*x == -9) == -3);
    CHECK(solve(2*x-4 == 10) == 7);
    CHECK(solve((x^2) == 16) == 4);
    
    CHECK(solve((2*x^2) - 4*x + 3 == 9) == 3);
    CHECK(solve((2*x^2) - 4*x + 3 == 9) == 3);
    CHECK(solve((x^2) + 6*x == -9) == -3);
    CHECK(solve(2*x-4 == 10) == 7);
    CHECK(solve((x^2) == 16) == 4);
    
    
}

TEST_CASE("Test case 2") {
    VAR y;
    
    CHECK(solve((2*y^2) - 4*y + 3 == 9) == 3);
    CHECK(solve((2*y^2) - 4*y + 3 == 9) == 3);
    CHECK(solve((y^2) + 6*y == -9) == -3);
    CHECK(solve(2*y-4 == 10) == 7);
    CHECK(solve((y^2) == 16) == 4);
}

#include "badkan.h"

int main(){

    VAR x;

    badkan::TestCase testcase;
    testcase.setname("My tests")
        .CHECK_EQUAL(solve((2*x^2) - 4*x + 3 == 9), 3)
        .CHECK_EQUAL(solve((x^2) + 6*x == -9), -3)
        .CHECK_EQUAL(solve(2*x-4 == 10), 7)
        .CHECK_EQUAL(solve((x^2) == 16),4)
        .print();

    
    return 0;
}

