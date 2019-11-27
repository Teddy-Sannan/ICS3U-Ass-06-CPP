// Copyright (c) 2019 St Mother Teresa High School All rights reserved.
//
// Created by: Teddy Sannan
// Created on: November 2019
// This calulates the area of a triangle
//  from another function

#include <iostream>
#include <string>
#include <cmath>

void volume_caclculation(int base, int height) {
    // This function uses the input to calculate and print the answer
    // variable declaration
    int volume;

    // process
    volume = pow(base, 2.0) * height / 3;
    // output
    std::cout << (base)<< "^2 x " << (height) << "/3 = " << (volume)
    << std::endl;
}

main() {
    // This function takes the input for the shape
    // variable declaration
    std::string baseEdge_as_string;
    std::string height_as_string;
    int baseEdge_as_int;
    int height_as_int;

    // input
    std::cout << "Enter the base edge: ";
    std::cin >> baseEdge_as_string;

    std::cout << "Enter the height: ";
    std::cin >> height_as_string;

    // skips line
    std::cout << "" << std::endl;

    try {
        // converts string to int
        baseEdge_as_int = std::stoi(baseEdge_as_string);
        height_as_int = std::stoi(height_as_string);

        // enters the volume_calculation function
        volume_caclculation(baseEdge_as_int, height_as_int);
    // prevents crashing from false input
    } catch (std::invalid_argument) {
        std::cout << "Invalid Input" << std::endl;
    }
}
