// Copyright Marli Peters 2023 All rights reserved.
// Created By: Marli Peters
// Date: Nov. 11, 2023
// This program asks users for their salary and time with a company then
// if they have been with the company for 5 or more years it will calculate
// a 5 % bonus based on their salary and displays the user their bonus.
#include <iostream>

int main() {
    // assign variables
    std::string salary_str;
    std::string company_time_str;

    // ask user for information to get bonus and set variables
    std::cout << "Please enter your yearly salary: " << std::endl;
    std::cin >> salary_str;
    std::cout << "Please enter your time with the company in years: "
    << std::endl;
    std::cin >> company_time_str;

    try {
        // convert user input to integers
        int salary_int;
        int company_time_int;
        salary_int = std::stoi(salary_str);
        company_time_int = std::stoi(company_time_str);
        // if user company time is under 5 years
        if (company_time_int < 5) {
            std::cout << "You do not qualify for a bonus." << std::endl;
            // if user company time is 5+ years
        } else if (company_time_int >= 5) {
            std::cout << "Your bonus is " <<
            salary_int * 0.05 << "$!" << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "Please enter valid numbers." << std::endl;
    }
    std::cout << "Thank you for participating!";
}
