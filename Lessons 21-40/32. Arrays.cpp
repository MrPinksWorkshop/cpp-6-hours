#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>
#include <iomanip>

// 32. Arrays
// array = a data structure that can hold multiple values
//         values are accessed by an index number
//         "kind of like a variable that holds multiple values"
//         they can only contain the values of the same data type
//         static data structure -- first assign the size


int main(){

//    std::string cars[]= {"Corvette", "Mustang", "Camry"};
    std::string cars[3];
    cars[0] = "Camaro";
    cars[1] = "Mustang";
    cars[2] = "Camry";

    std::cout << cars[0] << '\n';
    std::cout << cars[1] << '\n';
    std::cout << cars[2] << '\n';

    return 0;
}


int main()
{

    double prices[] = {5.00, 7.50, 9.99, 15.00};

    std::cout << prices[0] << '\n';
    std::cout << prices[1] << '\n';
    std::cout << prices[2] << '\n';
    std::cout << prices[3] << '\n';

    return 0;
}
