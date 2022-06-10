#ifndef NUMPATT_H
#define NUMPATT_H
#include <iostream>

// new number is the sum of this number (thn) and the previous number (pn)
void fibonacci(int x) {
    // this number 
    int thn = 1;
    // previous number 
    int pn = 0;
    // the sum 
    int nn;
    // a counter 
    int counter = 0;
        while (counter < x) {
            std::cout << pn << " "; 
            nn = thn + pn;
            int* thnptr = &thn;
            int* nnptr = &nn; 
            pn = *thnptr;
            thn = *nnptr;
            counter++;
        }
}
#endif