/*
Author: Aurnab Das
Course: CSCI-135
Instructor: Mike Zamansky
Assignment: Lab1D

Given the year and month the program prints how many days was in the month
*/

#include <iostream>

int main()
{
int year;
int month;
std::cout << "Type in the Year:";
std::cin >> year;
std::cout << "Type in the Month:";
std::cin >> month;


if (year % 4 == 0){
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 ||month == 12){
        std::cout << "29 days\n";
    } else if (month == 2){
        std::cout << "31 days\n";
    } else{
        std::cout << "30 days\n";
    }

} else if(year % 100 == 0){
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 ||month == 12){
        std::cout << "31 days\n";
    } else{
        std::cout << "30 days\n";
    }

} else if (year % 400 == 0){
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 ||month == 12){
        std::cout << "31 days\n";
    } else if (month == 2){
        std::cout << "29 days\n";
    } else{
        std::cout << "30 days\n";
    }

} else {
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 ||month == 12){
        std::cout << "31 days\n";
    } else{
        std::cout << "30 days\n";
}
return 0;
}
}