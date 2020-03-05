//
//  operatorShift.hpp
//  operatorOverload
//
//  Created by Adam Lev-Ari on 01/01/2020.
//  Copyright © 2020 Adam Lev-Ari. All rights reserved.
//

#ifndef operatorShift_hpp
#define operatorShift_hpp

#include <stdio.h>
#include <iostream>
#include "LINE.h"
#include "POLI.h"
#include "math.h"

using namespace std;
    
POLI operator ^ (LINE A, int e){
    POLI R(A.getA(), 0, A.getB(), e);
    R.setX(A.getX());
    /*
    POLI R;
    R.a = A.a;
    R.c = A.b;
    R.e = e;
    R.x = A.x;
    */
     return R;
}

LINE operator + (LINE A, LINE B){
    LINE R(A.getA()+B.getA(), A.getB()+B.getB());
    if(A.getX()) R.setX(A.getX());
    else R.setX(B.getX());
    /*
    R.b = A.b + B.b;
    R.a = A.a + B.a;
    if(A.x) R.x = A.x;
    else R.x = B.x;
    */
     return R;
}

POLI operator + (POLI A, LINE B){
    POLI R(A.getA(), A.getB()+B.getA(), A.getC()+B.getB(), A.getE());
    R.setX(A.getX());
    /*
    R.a = A.a;
    R.b = A.b + B.a;
    R.c = A.c + B.b;
    R.e = A.e;
    R.x = A.x;
    */
    return R;
}

LINE operator - (LINE A, LINE B){//same as +
    LINE R(A.getA()-B.getA(), A.getB()-B.getB());
    if (A.getX()) R.setX(A.getX());
    else R.setX(B.getX());
    /*
    R.b = A.b - B.b;
    R.a = A.a - B.a;
    if(A.x) R.x = A.x;
    else R.x = B.x;
    */
    return R;
}

POLI operator - (POLI A, LINE B){
    POLI R(A.getA(), A.getB()-B.getA(), A.getC()-B.getB(), A.getE());
    R.setX(A.getX());
    /*
    R.a = A.a;
    R.b = A.b - B.a;
    R.c = A.c - B.b;
    R.e = A.e;
    R.x = A.x;
    */
    return R;
}

LINE operator * (LINE A, LINE B){
    LINE R(A.getA()*B.getB()+B.getA()*A.getB(), A.getB()*B.getB());
    if (A.getX()) R.setX(A.getX());
    else R.setX(B.getX());
    /*
    R.a = A.a * B.b + B.a * A.b;
    R.b = A.b * B.b;
    if(A.x) R.x = A.x;
    else R.x = B.x;
    */
    return R;
}

LINE operator / (LINE A, LINE B){
    LINE R(A.getA()/B.getB(), A.getB()/B.getB());
    R.setX(A.getX());
    /*
    R.b = A.b / B.b;
    R.a = A.a / B.b;
    R.x = A.x;
    */
    return R;
}

LINE operator == (LINE A, LINE B){//assumes that only 1 solution.
    LINE C = A - B;
    C.getX()->i = -C.getB()/C.getA();
    //C.x->i = -C.b/C.a;
    return C;
}

POLI operator == (POLI A, LINE B){
    POLI C = A - B;
    C.getX()->i = (-C.getB() + sqrtf(powf(C.getB(), 2) - (4*C.getA()*C.getC())))/(2*C.getA());
    return C;
}

ostream &operator << (ostream &output, const VAR &A) {
   if (A.i)
       output << "X = " << A.i;
    else
        throw "Error";
   return output;
}

int solve(POLI x){return (int)x.getX()->i;}
int solve(LINE x){return (int)x.getX()->i;}


#endif /* operatorShift_hpp */
