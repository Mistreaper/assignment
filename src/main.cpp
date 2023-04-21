#include <iostream>


void printSomething(int *pX) {
   std::cout << "X value is " << *pX << std::endl;
}

int main(void)
{
   int x = 5;
   int *pX = NULL; // assign NULL before declaring a pointer`
   pX = &x;
   printSomething(pX);
}
