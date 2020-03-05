//
//  badkan.cpp
//  operatorOverload
//
//  Created by Adam Lev-Ari on 01/01/2020.
//  Copyright © 2020 Adam Lev-Ari. All rights reserved.
//

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

