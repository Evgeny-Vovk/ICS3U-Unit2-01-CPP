// Copyright(c) 2022 Evgeny Vovk All rights reserved
//
// Created by : Evgeny Vovk
// Created on : September 2022
// ICS3U-Unit1-03.cpp File, learning simple math and storyboards in C++

#include <iostream>
#include <cmath>

int main() {
    std::cout << "\nThe radius of a circle is 15mm.\n";
    std::cout << "The area of the circle is "
    << (M_PI * pow(15 , 2)) << "mm².\n";
    std::cout << "The perimeter of the circle is " << (2 * 15 * M_PI) << "mm.";

    std::cout << "\n\nDone.\n";
}
