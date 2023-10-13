#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>
#include <iomanip>


// 26. User defined functions
// function = a block of reusable code

void happyBirthday(std::string name, int age); // declare a function before the main function

int main() // function is like a house, another function is like a neighbour house
// local scope
{

    std::string name = "Louis";
    int age = 19;

    happyBirthday(name, age);

    return 0;
}

void happyBirthday(std::string name, int age){ // a parenthesis a like a pair of telephones
// a matching set of parameters to pass the arguments
    std::cout << "Happy Birthday " << name << '\n';
    std::cout << "Happy Birthday " << name << '\n';
    std::cout << "Happy Birthday to dear " << name << '\n';
    std::cout << "Happy Birthday " << name << '\n';
    std::cout << "You are " << age << " years old!\n";
}
