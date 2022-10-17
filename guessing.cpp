// Copyright (c) 2022 Johanna Liu All rights reserved
//
// Created by: Johanna Liu
// Created on: Sep 2022
// This program is a random number guessing game

#include <iomanip>
#include <iostream>

int main() {
    // this function generates a random number
    int randomNumber;
    int userNumber;

    // input
    std::cout << "This program is a guessing game." << std::endl;
    std::cout << "Enter a number between 0-9: ";
    std::cin >> userNumber;

    // process
    if (userNumber == SPECIAL_NUMBER) {
        // output
        std::cout << "YAY! You guessed the correct number!";
    }

    if (userNumber != SPECIAL_NUMBER) {
        // output
        std::cout << "Try again";
    }

    std::cout << std::endl;
    std::cout << "\nDone." << std::endl;
}
