#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>
#include <iomanip>


// 22. Nested loops
// a practice program to output a rectangle
int main()
{
    int rows;
    int columns;
    char symbol;

    std::cout << "How many rows?: ";
    std::cin >> rows;

    std::cout << "How many columns?: ";
    std::cin >> columns;

    std::cout << "Enter a symbol to use: ";
    std::cin >> symbol;

    for(int i = 1; i <= rows; i++){
        for(int j = 1; j <= columns; j++){
            std::cout << symbol;
        }
        std::cout << '\n';
    }

    return 0;
}