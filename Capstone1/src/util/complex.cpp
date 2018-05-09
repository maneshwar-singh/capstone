//
// Created by manu on 5/8/18.
//

#include "complex.h"

complex& complex::operator=(const complex& src){
    i = src.getI();
    r = src.getR();
    return *this;
}

double complex::getR() const {
    return r;
}
double complex::getI() const {
    return i;
}