#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>
#include <iomanip>


// 23. Random number generator
// pseudo-random = NOT truly random (but close)
// it works for a simple game

int main()
{

    srand(time(NULL));

    int num1 = (rand() % 6) +1; // add 1 to start from 1 instead of 0
    int num2 = (rand() % 6) +1;
    int num3 = (rand() % 6) +1;

    std::cout << num1 << '\n';
    std::cout << num2 << '\n';
    std::cout << num3 << '\n';

    return 0;
}