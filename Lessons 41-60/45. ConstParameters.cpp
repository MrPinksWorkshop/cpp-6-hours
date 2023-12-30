#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>
#include <iomanip>

// 45. Const parameters
// const parameter = parameter that is modified with a const keyword
//                   parameter that is effectively read-only
//                   code is more secure (tell other programmers not to mess with my code lol)
//                   conveys intent useful for references and pointers

// pass by reference is a bigger deal with const parameter

void printInfo(const std::string &name, const int &age);

int main()
{
    std::string name = "Louis";
    int age = 19;

    //invoke the function in the main function

    printInfo(name,age);

    return 0;
}

void printInfo(const std::string &name, const int &age){
    name = " ";
    age = 0;
    std::cout << name << '\n';
    std::cout << age << '\n';
}
