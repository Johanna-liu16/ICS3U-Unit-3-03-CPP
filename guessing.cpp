// Copyright (c) 2022 Johanna Liu All rights reserved
//
// Created by: Johanna Liu
// Created on: Sep 2022
// This program is a random number guessing game

#include <iostream>
#include <random>

int main() {
    // this function generates a random number
    int userNumber;
    int randomNumber;

    std::random_device rseed;
    std::mt19937 rgen(rseed());  // mersenne_twister
    std::uniform_int_distribution<int> idist(0, 9);  // [0,9]
    randomNumber = idist(rgen);

    // input
    std::cout << "This program is a guessing game." << std::endl;
    std::cout << "Enter a number between 0-9: ";
    std::cin >> userNumber;

    // process
    if (userNumber == randomNumber) {
        // output
        std::cout << "YAY! You guessed the correct number!";
    } else {
        // output
        std::cout << "Random number was " << randomNumber << ". Try again.";
    }

    std::cout << std::endl;
    std::cout << "\nDone." << std::endl;
}
