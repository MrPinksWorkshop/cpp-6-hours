#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>
#include <iomanip>

// 14. Ternary operators

// ternary operator ?: = replacement to an if/else statement
// condition ? expression1 : expression2;

int main(){

    if(grade >= 60){
         std::cout << "You pass!";
    }
    else{
        std::cout << "You fail!";
    }


    int grade = 75;
    grade >= 60? std::cout << "You pass!" : std::cout << "You fail";

    int number = 9;
    number % 2 == 1 ? std::cout << "ODD" : std::cout << "EVEN";

    bool hungry = true;

    hungry ? std::cout << "You are hungry" : std::cout << "You are full";
    // the code below does the same thing
    std::cout << (hungry ? "You are hungry" : "You are full");
    
    return 0;
}