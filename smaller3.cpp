/*
Author: Aurnab DAs
Course: CSCI-135
Instructor: Mike Zamansky
Assignment: Lab1B

Given three values find the smallest
*/
#include<iostream>

int main()
{
int x,y,z;

 std::cout << "type a number:";
 std::cin>> x;
 std::cout << "type a number:";
 std::cin>> y;
 std::cout << "type a number:";
 std::cin>> z;

if (x>=y and z>=y){
    std::cout << y << " is smallest\n";
} else if (y>=x and z>=x){
    std::cout << x << " is smallest\n";
} else if (y>=z and x>=z){
    std::cout << z <<  " is smallest\n";
    
}
return 0;
}

