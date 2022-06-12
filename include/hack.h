// Only works on Linux/WSL2
#ifndef HACK_H
#define HACK_H
#include <iostream>
#include <string.h>
#include <chrono>
#include <thread>
#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */
#define BOLDBLACK   "\033[1m\033[30m"      /* Bold Black */
#define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
#define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
#define BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */
#define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
#define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
#define BOLDWHITE   "\033[1m\033[37m"      /* Bold White */

void loadingBar() {
    std::cout << "[";
    for (int i = 0; i < 64; i++) {
        std::cout << "#";
        std::chrono::milliseconds loadingBarWait( 3);
        std::this_thread::sleep_for(loadingBarWait);
    }
    std::cout << "]\n";
}
int hack() {
    std::cout << "Who do you want to hack?\n";
    int option;  
    std::chrono::milliseconds sleepDuration( 15);
    std::this_thread::sleep_for(sleepDuration);
    std::cout << "Type 1, 2, or 3\n";
    std::this_thread::sleep_for(sleepDuration);
    std::cout << "1. Yourself" << std::endl;
    std::cout << "2. The evil and corrupt government\n";
    std::cout << "3. A nearby device\n";
    std::this_thread::sleep_for(sleepDuration);
    std::cout << "Waiting for user input...\n$ ";
    std::cin >> option; 
    if (option == 1) {
       std::cout << "Hacking yourself...\n"; 
       std::this_thread::sleep_for(sleepDuration);
       loadingBar();         
       std::cout << "HACK STATUS = NOT_FOUND\n";
       std::this_thread::sleep_for(sleepDuration);
       return 1; 
    } else if (option == 2) {
       std::cout << "Hacking the government...\n";
       std::this_thread::sleep_for(sleepDuration);
       loadingBar();
       std::this_thread::sleep_for(sleepDuration);
       std::cout << "Hack finished!\n";
       return 0; 
    } else if (option == 3) {
       std::cout << "Finding a nearby device...\n";
       std::this_thread::sleep_for(sleepDuration);
       loadingBar();
       std::this_thread::sleep_for(sleepDuration);
       std::cout << "Hacking device...\n";
       std::this_thread::sleep_for(sleepDuration);
       loadingBar();
       std::this_thread::sleep_for(sleepDuration);
       std::cout << "Hack finished!\n";
       return 0; 
    } else {
        std::cout << "ERROR: OPTION_NOT_FOUND\n";
        return 1;
    }
    return 0;
} 
#endif