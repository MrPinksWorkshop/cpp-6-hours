#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>
#include <iomanip>

// 44. Pass by VALUE vs. pass by REFERENCE

int main(){

    std::string x = "Kool-Aid";
    std::string y = "Water";
    std::string temp;

    temp = x;
    x = y;
    y = temp;

    std::cout << "X: " << x << '\n';
    std::cout << "Y: " << y << '\n';

    return 0;
}

void swap(std::string &x, std::string &y);

int main(){

    std::string x = "Kool-Aid";
    std::string y = "Water";

    swap(x, y);

    std::cout << "X: " << x << '\n';
    std::cout << "Y: " << y << '\n';

    return 0;
}

// this won't work cuz normally when we pass a variable to a function,  we're passing by value
// when we invoke the function, we're creating copies of the original values
// we're switching two copies but not the original values
// void swap(std::string &x, std::string &y){
//     std::string temp;
//     temp = x;
//     x = y;
//     y = temp;
// }

// pass by REFERENCE
// pass by value creates copies of x and y 
// with the parameters when we use the address of operator
// we're passing the memory addresses to where the original x and y variables are located
// and then swapping the values

// use pass by reference as often as possible

void swap(std::string &x, std::string &y){
    std::string temp;
    temp = x;
    x = y;
    y = temp;
}