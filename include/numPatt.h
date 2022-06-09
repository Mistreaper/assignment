#ifndef NUMPATT_H
#define NUMPATT_H
#include <iostream>

// the next number is the sum of this number and the previous number.
void fibonacci(int x) {

    // this number
    int thn = 1;
    // the previous number
    int pn = 0;
    // the sum of the two numbers, which is the next number 
    int nn;
    int counter = 1;
    while (counter <= x) {
        std::cout << pn << " "; 
        nn = thn + pn;
        pn = thn;
        thn = nn;
        counter++;
    }
}

#endif