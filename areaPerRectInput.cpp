// Created by: Finn Kitor
// Created on: September 25th, 2022
// This program asks the user for the length
// and width of a rectangle. It then calculates
// and displays the area and perimeter.
#include <iostream>

// declare the variables
float length, width, area, perimeter;

int main() {
    // gets input from user
    std::cout << "We are going to calculate the area and\n";
    std::cout << "perimeter of a rectangle.\n";
    std::cout << "Enter the length (cm): ";
    std::cin >> length;
    std::cout << "Enter the width (cm): ";
    std::cin >> width;

    // calculates the area and perimeter
    area = length * width;
    perimeter = 2 * (length + width);

    // displays the results to the user
    std::cout << std::endl;
    std::cout << "Area = " << area << "cm.\n";
    std::cout << "Perimeter = " << perimeter << "cm.\n";
}