#include <iostream>

#include "src/util/complex.h"

using namespace std;

int main() {
    complex z(3.5,2.0);
   
    cout << "z is ("<<z.getR()<<","<<z.getI() <<") \n" << endl;

    complex cz = 7.5;
    z = cz;
    cout << "z is ("<<z.getR()<<","<<z.getI() <<") \n" << endl;


    return 0;
}