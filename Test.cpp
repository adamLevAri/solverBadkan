//
//  Test.cpp
//  operatorOverload
//
//  Created by Adam Lev-Ari on 01/01/2020.
//  Copyright © 2020 Adam Lev-Ari. All rights reserved.
//

#include "doctest.h"
#include "solver.hpp"

TEST_CASE("Test case 1") {
   	Variable x;

    CHECK(solve((2*x^2) - 4*x + 3 == 9) == string("3"));
    CHECK(solve((2*x^2) - 4*x + 3 == 9) == string("3"));
    CHECK(solve((x^2) + 6*x == -9) == string("-3"));
    CHECK(solve(2*x-4 == 10) == string("7"));
    CHECK(solve((x^2) == 16) == string("4"));
    
    CHECK(solve((2*x^2) - 4*x + 3 == 9) == string("3"));
    CHECK(solve((2*x^2) - 4*x + 3 == 9) == string("3"));
    CHECK(solve((x^2) + 6*x == -9) == string("-3"));
    CHECK(solve(2*x-4 == 10) == string("7"));
    CHECK(solve((x^2) == 16) == string("4"));
    
    
}

TEST_CASE("Test case 2") {
    Variable y;
    
    CHECK(solve((2*y^2) - 4*y + 3 == 9) == string("3"));
    CHECK(solve((2*y^2) - 4*y + 3 == 9) == string("3"));
    CHECK(solve((y^2) + 6*y == -9) == string("-3"));
    CHECK(solve(2*y-4 == 10) == string("7"));
    CHECK(solve((y^2) == 16) == string("4"));
}
