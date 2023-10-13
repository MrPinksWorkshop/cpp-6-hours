#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>
#include <iomanip>

// 7. Type conversion
// type conversion = conversion a value of one data type to another
//                 Implicit = automatic
//                 Explicit = Precede value with new data type (int)



int main(){

    // double x = (int) 3.14;

    // std::cout << x;


    // char x = 100;
    // std::cout << x;

    // std::cout << (char) 100;
    // convert it to 'd' using ASCII table

    int correct = 8;
    int questions = 10;
    double score = correct/(double)questions * 100;

    std::cout << score << "%";

    return 0;
}