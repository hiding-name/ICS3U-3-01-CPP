// Copyright (c) 2019 myself All rights reserved.
//
// Created by: Matsuru Hoshi
// Created on: Sept 2019
// This is program adds numbers

#include <iostream>

int main() {
    // This will add numbers
    double number;
    double number1;
    double answer;

    // Welcome statement
    std::cout << "NUMBER CALCULATOR 3000" << std::endl;
    std::cout << "Welcome, this is Number Calculator 3000!" << std::endl;
    std::cout << "Press Enter to continue." << std::endl;
    std::cin.ignore();

    // input
    std::cout << "\nWhat is the first number: " << std::endl;
    std::cin >> number;
    std::cout << "What is the other number: " << std::endl;
    std::cin >> number1;

    // process
    answer = number + number1

    // output
    std::cout << "\nThe answer is: " << answer << std::endl;
}
