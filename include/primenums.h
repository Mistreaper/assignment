#ifndef PRIMENUMS_H
#define PRIMENUMS_H
#include <iostream>

/* This is a base method to check if a number is prime or not. It uses a loop so that j is the divisor, and i is the tester. The loop keeps increasing j by 1. The bool isPrime 
is only modified when a prime is false, not true. The loop of division will break once isPrime is false. At the end, we will return the bool value of isPrime*/ 
bool checkPrime(int i) {
  bool isPrime = true;

  // 0 and 1 are not prime numbers


  for (int j = 2; j <= i / 2; ++j) {
    if (i % j  == 0) {
      isPrime = false;
      break;
    }
  }

  return isPrime;
}

/* This method will print primes depending on the parameter x. It uses a counter, and increases the counter by one if it finds a prime number (checkPrime returns true).
It uses a while loop, and will break once counter is equal to x. i will be our tester, and we will increment i when checkPrime returns true or false. */
void printPrimes(int x) {
    int i = 0; 
    bool on = true;
    int counter;     
    while (on) {
        if (checkPrime(i)) {
            std::cout << i << " ";
            counter++;
            i++; 
        } else {
            i++;
        }
        if (counter == x) {
            break;
        }
    }
}

// This method is a mix of checkPrime() and printPrimes(), merging them into one.
void unifiedMethod(int x) {
    int i = 1;
    int counter;
    bool isPrime;
    while (counter <= x) {
        isPrime = true;
        if (i == 0 ||  i  == 1) {
            isPrime = false;
        }
       for (int j = 2; j <= i/2; ++j) {
            // isPrime = true; 
           if (i % j == 0) {
               isPrime = false;
               break;
           }
       }
       if (isPrime) {
           std::cout << i << " ";
           i++;
           counter++;
       } else {
           i++;
       }
    }    

}
#endif