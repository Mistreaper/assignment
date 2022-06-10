#ifndef NUMPATT_H
#define NUMPATT_H
#include <iostream>
#include <string>
#include <vector>

void oneOneTwo(int n) {
    int x = 1;
    std::vector<int> v; 
    int counter = 0;
    while (counter < n) {
        for (int i = 0; i < x; i++) {
            v.push_back(i + 1); 
            counter++; 
        }
        x++;
    }
    std::cout << v[n-1] << std::endl;
}

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