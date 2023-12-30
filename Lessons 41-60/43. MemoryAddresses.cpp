#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>
#include <iomanip>

// 43. Memory addresses
// memory address = a location in memory where data is stored
// a memory address can be accessed with & (address-of operator)
// one of the reasons using datatypes: to know how much memory we need to allocate to fin certain values

int main(){


    std::string name = "Louis";
    int age = 21;
    bool student = true;

    // hexidecimal address
    std::cout << &name << '\n';
    std::cout << &age << '\n';
    std::cout << &student << '\n';

    
    return 0;
}
