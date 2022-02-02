/*
Author: Aurnab Das
Course: CSCI-135
Instructor: Mike Zamansky
Assignment: Lab1C

Given the year hte programs tells wheater or not it is or is not a leap year
*/

#include <iostream>

int main()
{
int year;
std::cout << "Type in the Year:";
std::cin >> year;

if (year % 4 == 0){
    std::cout << "leap year\n";
} else if(year % 100 == 0){
    std::cout << "common year\n";
} else if (year % 400 == 0){
    std::cout << "leap year\n";
} else {
    std::cout << "common year\n";
}
return 0;
}


