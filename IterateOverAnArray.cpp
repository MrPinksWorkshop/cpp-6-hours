#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>
#include <iomanip>


// 34. Iterate over an array
// for loop

int main()
{

    std::string students[] = {"Spongebob", "Patrick", "Squidward"};

    for(int i = 0; i < sizeof(students)/sizeof(std::string); i++){
        std::cout << students[i] << '\n';
    }

    return 0;
}