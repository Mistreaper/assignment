#ifndef NUMPATT_H
#define NUMPATT_H
#include <iostream>
#include <string>
#include <vector>

void triangle(int n) {
    for (int i = 1; i < n; i++) {
        std::cout << " * \n";
        for (int j = 1; j <= i; j++) {
            std::cout << " * ";
        } 
    }
    std::cout << " *\n";
}
// Sequence: 1 1 2 1 2 3 1 2 3 4... Find the nth term in the sequence.
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