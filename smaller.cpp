/*
Author: Aurnab Das
Course: CSCI-135
Instructor: Mike Zamansky
Assignment: Lab1A

Two Values are inputed and program determines the value that is smaller
*/

#include<iostream>

int main()
{
int x,y;
std::cout << "Type a number:";
std::cin >> x;
std::cout << "Type a number:";
std::cin >> y;

if (x>y){
    std::cout << y << " is the smaller value.\n";
} else {
    std::cout << x << " is the smaller value.\n";
   
}
return 0;

}
