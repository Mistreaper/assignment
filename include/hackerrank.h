#ifndef HACKERRANK_H 
#define HACKERRANK_H
#include <iostream>
#include <vector>
#include <numeric>

// Return amount of tallest candles
int birthdayCakeCandles(int candleAmount) {
    int max = 0; 
    int count = 1; 
    for (int it = 0; it < candleAmount; it++) {
        int n;
        std::cin >> n;
        if (max < n) {
            max = n;
            count = 1; 
        } else if (max == n) {
            count++; 
        }
    }
    return count;
}

inline std::vector<int> compareTriplets() {
    int alicepoints = 0;
    int bobpoints = 0; 

    std::vector<int> a, b; 
    // get values of a and b
    for (int i = 0; i < 3; i++) {
        int valueToBeAdded; 
        std::cin >> valueToBeAdded;
        a.push_back(valueToBeAdded);
    }
    for (int i = 0; i < 3; i++) {
        int valueToBeAdded; 
        std::cin >> valueToBeAdded;
        b.push_back(valueToBeAdded);
    }
    std::vector<int> aliceandbob;
    for (int i = 0; i < 3; i++) {
        if (a[i] > b[i]) {
           alicepoints++; 
        } else if (a[i] < b[i]) {
            bobpoints++;
        } else if (a[i] == b[i]) {
            alicepoints+=0; 
            bobpoints+=0;
        }
    }
    // aliceandbob.insert(aliceandbob.end(), {alicepoints, bobpoints});
    aliceandbob.push_back(alicepoints);
    aliceandbob.push_back(bobpoints);
    // std::cout << aliceandbob[0] << " " << aliceandbob[1];
    return aliceandbob;
}
// first line is n, the size of the array
// second line is space-separated ints to put in array
inline void simpleArraySum() {
    // get n
    int n;
    std::cin >> n;
    // std::cout << "\n";
    
    // create the array
    std::vector<int> ar;
    int sum;
    // add value to array
    for (int i = 0; i < n; i++) {
        int valueToBeAdded;
        std::cin >> valueToBeAdded;
        ar.push_back(valueToBeAdded);
        if (std::cin.peek() == '\n') {
            break;
        } 
    } 
    
    // sum them.  
    sum = std::accumulate(ar.begin(), ar.end(), 0);
    std::cout << sum << std::endl;
}

// First line is number of rectangles, the rest is the width and height of them. Print the number of golden rectangles.
// Remember that it doesn't specify W:H or H:W, that means we have to check both.
inline void goldenRectangle() {
    // number of rects
    int rectNum;
    // number of golden rects
    int gRectNum = 0;
    std::cin >> rectNum;
    int W, H;
    double whRatio, hwRatio; 
    for (int i = 0; i < rectNum; i++) {
        std::cin >> W >> H;
        whRatio = (double) W / H;
        hwRatio = (double) H / W; 
        if (whRatio <= 1.7 && whRatio >= 1.6) {
            gRectNum++;
        }
        if (hwRatio <= 1.7 && hwRatio >= 1.6) {
            gRectNum++;
        }
    }
    std::cout << gRectNum << std::endl;
   
}
#endif