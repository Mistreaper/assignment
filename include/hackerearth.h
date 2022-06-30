#ifndef HACKEREARTH_H
#define HACKEREARTH_H
#include <iostream>

// First line is number of rectangles, the rest is the width and height of them. Print the number of golden rectangles.
// Remember that it doesn't specify W:H or H:W, that means we have to check both.

void goldenRectangle() {
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