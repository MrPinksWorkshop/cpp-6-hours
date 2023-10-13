#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>
#include <iomanip>

// 19. Do while loops
// do while loop = do some block of code first,
//                 THEN repeat again if condition is true


int main(){

    int number;

        std::cout << "Enter a positive #: ";
        std::cin >> number;

    while(number < 0){
        std::cout << "Enter a positive #: ";
        std::cin >> number;
    }

    std::cout << "The # is: " << number;


    a better way of writing the above code --> do while loop
    int number;

    do{
        std::cout << "Enter a positive #: ";
        std::cin >> number;
    } while(number < 0);

    std::cout << "The # is: " << number;        

    return 0;
}