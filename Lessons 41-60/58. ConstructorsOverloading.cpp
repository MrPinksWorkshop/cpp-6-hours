#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>
#include <iomanip>


// 58. Constructors overloading
// overloaded constructors = multiple constructors w/ same name but different parameters
//                           allows for varying arguments when instantiating an object

class Pizza{
    public: 
        std::string topping1;
        std::string topping2;

    // a pizza constructor with no toppings
    Pizza(){

    }
    Pizza(std::string topping1){
        this->topping1 = topping1;
    }

    Pizza(std::string topping1, std::string topping2){
        this->topping1 = topping1;
        this->topping2 = topping2;
    }

};

int main(){

    Pizza pizza1("pepperoni");
    Pizza pizza2("mushrooms", "peppers");
    Pizza pizza3;

    std::cout << pizza2.topping1 << '\n';
    std::cout << pizza2.topping2 << '\n';

    return 0;
}