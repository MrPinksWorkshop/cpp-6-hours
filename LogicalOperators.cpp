#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>
#include <iomanip>


// 15. And, or, not logical operators
// && = check if two conditions are true
// || = check if at least one of two conditions is true
// ! = reverses the logical state of its operand


int main(){

    int temp;
    bool sunny = true;

    std::cout << "Enter the temperature: "; 
    std::cin >> temp;

    if(temp <= 0 || temp >= 30){
        std::cout << "The temperature is bad!\n";
    }
    else{
        std::cout << "The temperature is good!\n";
    }

    if(!sunny){
        std::cout << "It is cloudy outside!";
    }
    else{
        std::cout << "It is sunny outside!";
    }

    return 0;
}
