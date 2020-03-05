//
//  POLI.hpp
//  operatorOverload
//
//  Created by Adam Lev-Ari on 01/01/2020.
//  Copyright © 2020 Adam Lev-Ari. All rights reserved.
//

#ifndef POLI_hpp
#define POLI_hpp

#include <stdio.h>
#include "VAR.h"

class POLI{     //FORM: ax^e+bx+c
private:
    float a,b,c;
    int e;
    VAR* x;
    
public:
    POLI(): a(0), b(0), c(0), e(1){}            //default Constructor
    POLI(float a, int e) : a(a), e(e) {}        //make form of: x^e into POLI
    POLI(float a, float b, float c, int e) : a(a), b(b), c(c), e(e) {}   //copy Constructor
    ~POLI(){}
    
    float getA() { return a; };
    float getB() { return b; };
    float getC() { return c; };
    int getE() { return e; };
    VAR* getX() { return x; };
    void setX(VAR* x) { this->x = x; }
};
#endif /* POLI_hpp */
