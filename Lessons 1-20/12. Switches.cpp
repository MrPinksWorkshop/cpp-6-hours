#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>
#include <iomanip>

// 12. Switches
//switch = alternative to using many "else if" statements
//         compare one value against matching cases
//         more efficient and easier to raed


int main(){
    int month;
    std::cout << "Enter the month (1-12): ";
    std::cin >> month;

    switch(month){
        case 1:
            std::cout << "It is January";
            break;
        case 2: 
            std::cout << "It is February";
            break;
        case 3:
            std::cout << "It is March";
            break;
        case 4:
            std::cout << "It is April";
            break;
        case 5:
            std::cout << "It is May";
            break;

        default:
            std::cout << "Please enter in only numbers (1-12)";
            break;
    }

    return 0;
}


// another example
int main(){

    char grade;
    std::cout << "What letter grade: ";
    std::cin >> grade;

    switch(grade){
        case 'A':
            std::cout << "You did great";
            break;
        case 'B':
            std::cout << "You did good";
            break;
        case 'C':
            std::cout << "You did okay";
            break;
        case 'D':
            std::cout << "You did not do good";
            break;
        case 'F':
            std::cout << "YOU FAILED!";
            break;
        default:
            std::cout << "Please enter a letter grade (A-F)";
            break;
    }

    return 0;

}