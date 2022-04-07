// Copyright (c) 2022 Yiyun Qin All rights reserved
//
// Created by Yiyun Qin
// Created in April 2022
// This is a math program, showing whether you are acceptable for the date

#include <iostream>
#include <random>
#include <string>

int main() {
    // This function compares your age and the command
    std::string age;
    int ageInteger;

    // input
    std::cout << "Please enter your age: ";
    std::cin >> age;

    // process & output
    std::cout << "" << std::endl;
    try {
        ageInteger = std::stoi(age);
        if (ageInteger > 25 && ageInteger < 40) {
            std::cout << "You are an acceptable age.";
        } else {
            std::cout << "You are NOT an acceptable age!";
        }
    } catch (std::invalid_argument) {
        std::cout << age << " is not a valid answer!";
    }
    std::cout << "\n\nDone." << std::endl;
}
