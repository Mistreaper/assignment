#ifndef COLLATZCONJECTURE_H
#define COLLATZCONJECTURE_H
#include <iostream>

    
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