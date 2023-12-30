#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>
#include <iomanip>

// 39. Fill function
// fill() = Fills a range of elements with a specified value
//          fill(being, end, value)


int main(){


    const int SIZE = 99;
    // {"pizza", ... 10 times}
    std::string foods[SIZE];

    fill(foods, foods + (SIZE/3), "pizza");
    fill(foods + (SIZE/3), foods + (SIZE/3)*2, "hamburger");
    fill(foods + (SIZE/3)*2, foods + SIZE, "hotdog");

    // for every food element in the array foods[]
    for(std::string food : foods){
        std::cout << food << '\n';
    }

    return 0;
}