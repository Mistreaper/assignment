#include <iostream>
#include "primenums.h"
#include "numPatt.h"

int main() {
    int userinput;
    std::cout << "Enter a numberss: ";
    std::cin >> userinput;
    fibonacci(userinput);
    std::cout << "" << std::endl;
    return 0;

}