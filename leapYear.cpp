// Copyright (c) 2022 Yiyun Qin All rights reserved
//
// Created by Yiyun Qin
// Created in April 2022
// This is a math program, determining whether a year is a leap year or not

#include <iostream>
#include <string>

int main() {
    // This function determines the leap year
    std::string yearString;
    int yearInteger;

    // input
    std::cout << "Please enter the year: ";
    std::cin >> yearString;

    // process & output
    std::cout << "" << std::endl;
    try {
        yearInteger = std::stoi(yearString);
        if (yearInteger % 4 == 0) {
            if (yearInteger % 100 == 0) {
                if (yearInteger % 400 == 0) {
                    std::cout << yearString << " is definitely a leap year!";
                } else {
                    std::cout << yearString << " is NOT a leap year!";
                }
            } else {
                std::cout << yearString << " is definitely a leap year!";
            }
        } else {
            std::cout << yearString << " is NOT a leap year!";
        }
    } catch (std::invalid_argument) {
        std::cout << "Invalid answer!";
    }
    std::cout << "\n\nDone." << std::endl;
}
