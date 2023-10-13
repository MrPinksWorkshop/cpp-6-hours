#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>
#include <iomanip>


// 28. Overloaded functions
// functions can have the same names
// but with a different set of parameters

void bakePizza();
void bakePizza(std::string topping1);
void bakePizza(std::string topping1, std::string topping2);

int main(){

    bakePizza("pepperoni", "mushroom");

    return 0;
}

void bakePizza(){
    std::cout << "Here is your pizza!\n";
}

// a function name + parameter = function signature
void bakePizza(std::string topping1){
    std::cout << "Here is your " << topping1 << " pizza!\n";
}

void bakePizza(std::string topping1, std::string topping2){
    std::cout << "Here is your " << topping1 << " and " << topping2 << "pizza!\n";
}