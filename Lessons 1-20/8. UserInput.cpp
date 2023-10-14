#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>
#include <iomanip>


// 8. User input
// cout << (insertion operator)
// cin >> (extraction operator)

int main()
{

    std::string name;
    int age;

    std::cout << "What's your age?: ";
    std::cin >> age;

    std::cout << "What's your full name?: ";
    //std::cin >> name;
    std::getline(std::cin >> std::ws, name); //accept a string with spaces

    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old";
    return 0;
}