#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>
#include <iomanip>


// 33. Sizeof() operator
// sizeof() = determines the size in bytes of a:
//            variable, data type, class, objects, etc.
//            to calculate the size of an array, dividing array by data type

int main(){

    std::string name = "Louis Liu is awesome"; // 32 bytes

    double gpa = 2.5; // 8 bytes
    char grade = 'F'; // 1 byte
    bool student = true; // 1 byte
    char grades[] = {'A', 'B', 'C', 'D', 'E', 'F'}; // 5 bytes

    std::string students[] = {"Spongebob", "Patrick", "Squidward"};

    std::cout << sizeof(students)/sizeof(std::string) << " elements\n"; // to calculate the size of an array

    return 0;
}