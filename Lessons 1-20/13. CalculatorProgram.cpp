#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>
#include <iomanip>

// 13. Console calculator program

int main(){

    char op; // operator
    double num1;
    double num2;
    double result;

    std::cout << "********* CALCULATOR *********\n";

    std::cout << "Enter either (+ - * /): ";
    std::cin >> op;

    std::cout << "Enter #1: ";
    std::cin >> num1;

    std::cout << "Enter #2: ";
    std::cin >> num2; 
    
    switch(op){
        case '+':
            result = num1 + num2;
            std::cout << "result: " << result << '\n';
            break;
        case '-':
            result = num1 - num2;
            std::cout << "result: " << result << '\n';
            break;
        case '*':
            result = num1 * num2;
            std::cout << "result: " << result << '\n';
            break;
        case '/':
            result = num1 / num2;
            std::cout << "result: " << result << '\n';
            break;
        default:
            std::cout << "That wasn't a valid operator\n";
            break;
    }

    std::cout << "*******************************";

    return 0;
}