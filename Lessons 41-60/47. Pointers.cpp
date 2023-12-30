#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>
#include <iomanip>

// 47. Pointers
// pointer = a variable that stores a memory address of another variable
//           sometimes it's easier to work with an address
// imagine there are 5 pizzas, I don't have to walk to each one of my neighbors
// but just tell them to come to my house
//  & address-of operator
//  * dereference operator


int main(){

    std::string name = "Louis";
    int age = 19;
    std::string freePizzas[5] = {"pizza1", "pizza2", "pizza3", "pizza4", "pizza5"};


    // create a pointer, use the same data type as the variable pointing to
    std::string *pName = &name;
    int *pAge = &age;
    std::string *pFreePizzas = freePizzas;


    std::cout << pName << '\n';
    std::cout << *pName << '\n';
    std::cout << *pAge << '\n';
    // the array is already a memory address
    std::cout << freePizzas << '\n';
    // the pointer should produce the same result
    std::cout << pFreePizzas << '\n';
    // producing the first element in the array (dereference operator)
    std::cout << *pFreePizzas << '\n';

    return 0;
}