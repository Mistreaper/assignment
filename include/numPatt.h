#ifndef NUMPATT_H
#define NUMPATT_H
#include <iostream>
#include <string>
#include <vector>

void eTriangle() {
    int x; 
    std::cout << "How many levels do you want to print? \n";
    std::cout << "$ ";
    std::cin >> x; 
    // space counter
    int spaceCounter = x;
    // asterisk counter
    int asteriskCounter = 1;
    for (int i = 0; i < x; i++) {
        // for the spaces
        for (int i = 0; i < spaceCounter; i++) {
            std::cout << " ";
        }
        spaceCounter--;
        // for printing asterisk after space
        for (int i = 0; i < asteriskCounter; i++) {
            std::cout << "*";
            // create newline
            if (i == asteriskCounter - 1) {
                std::cout << "\n";
            }
        }
        asteriskCounter+=2;
    }
}
// draws a triangle with n levels
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

void collatzConjecture(int num) {
    bool check = true;
    while (check) {
        if (num % 2 == 0) {
            num = num / 2;
            std::cout << num << " ";
        } else if (num % 2 != 0) {
            num = num * 3 + 1;
            std::cout << num << " ";
        }
        if (num == 1) {
            std::cout << "finished \n"; 
            break;
        } 
    } 
}
#endif