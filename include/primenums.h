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
    // number that's getting tested, will increment by 1 when concluding whether a number is prime or not 
    // int i = 1;

    // the counter. it adds after a number is concluded to be prime. when it's equal to x, break the loop.
    int counter = 0;
    int primeCounter = 0;
    // the flag. it shall remain unchanged when the number is prime. when it is not prime, it will switch to false in the for loop.
    bool isPrime;
    while (primeCounter < x) {
        isPrime = true;
        if (counter == 0 || counter  == 1) {
            isPrime = false;
        } else {
            for (int j = 2; j < counter; ++j) {
                    // isPrime = true; 

                    // remember that prime all odd except for 2 
                    if (counter % 2 == 0 && counter != 2) {
                        isPrime = false;
                    }

                    // and cannot be a multiple of 5 except for 5
                    if (counter % 5 == 0 && counter != 5) {
                        isPrime = false;
                    } 
                if (counter % j == 0) {
                    isPrime = false;
                    break;
                }
            }
        }
       
       if (isPrime) {
           std::cout << counter << " ";
        //    i++;
           counter++;
           primeCounter++;
       } else {
           counter++;
       }
    }    

}
#endif