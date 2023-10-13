#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>
#include <iomanip>


// 18. While loops
// kinda like a if statement
// except it can potentially repeat something infinitely
// force a user to do something in order to continue with the rest of the code

int main(){

    std::string name;

    while(name.empty()){
        std::cout << "Enter your name: ";
        std::getline(std::cin, name);
    }

    std::cout << "Hello " << name;

    return 0;
}