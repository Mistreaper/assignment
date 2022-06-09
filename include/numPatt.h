#ifndef NUMPATT_H
#define NUMPATT_H
#include <iostream>

void fibonacci(int x) {

    int thn = 1;
    int pn = 0;
    std::cout << pn << " ";
    std::cout << thn << " "; 
    int nn;
    int counter = 1;
    while (counter <= x) {
        nn = thn + pn;
        pn = thn;
        thn = nn;
        counter++;
        std::cout << thn << " "; 
    }
}

#endif