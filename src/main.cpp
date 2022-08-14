#include <iostream>
#include <hackerearth.h>

int main() {
    std::vector<int> candlez;
    int candleAmount; 
    std::cin >> candleAmount;
    std::cout << "\n"; 
    for (int i = 0; i < candleAmount; i++) {
        int x; 
        std::cin >> x;
        candlez.push_back(x);
    }
   std::cout << birthdayCakeCandles(candleAmount, candlez) << std::endl;
    return 0;
}