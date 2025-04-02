// Copyright (c) 2025 Luke Di Bert All rights reserved.
//
// Created by: Luke Di Bert
// Date: March , 2025
//

#include <cmath>
// adds math library
#include <iomanip>
// adds iomanip library for rounding
#include <iostream>
// adds iostream library
#include <string>
// adds string library

int main() {
    std::string userAge;

    std::cout << "Enter your age: ";
    std::cin >> userAge;

    try {
        int userAgeNum = std::stoi(userAge);
        if (userAgeNum > 25 && userAgeNum < 40)
            std::cout << "You can date their daughter" << std::endl;
        else
            std::cout << "You cannot date their daughter";
    } catch (const std::invalid_argument&) {
        std::cout << userAge << " is not an integer" << std::endl;
    }
}
