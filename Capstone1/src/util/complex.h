//
// Created by manu on 5/8/18.
//

#ifndef CAPSTONE1_COMPLEX_H
#define CAPSTONE1_COMPLEX_H

#include<iostream>
using namespace std;


class complex {
public:
    complex(double rnew, double inew) : r(rnew),i(inew){};
    complex(double r): complex(r,0.0){}
    complex(): complex(0.0){}

    complex& operator=(const complex& src);

    double getR() const;
    double getI() const;
private:
    double r, i;
};


#endif //CAPSTONE1_COMPLEX_H
