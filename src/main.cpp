#include <iostream>
#include "collatzconjecture.h"
#include <primenums.h>

int main() {
    std::cout << "type value of counter: ";
    int howMany;
    std::cin >> howMany; 
    unifiedMethod(howMany);
    std::cout << "" << std::endl;
    return 0;
}