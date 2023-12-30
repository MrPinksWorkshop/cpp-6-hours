#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>
#include <iomanip>


// 27. Return keywords
// return  = return a value back to the spot
//           where you called the encompassing function

double square(double length);
double cube(double length);

int main()
{

    double length = 5.0;
    double area = square(length);
    double volume = cube(length);

    std::cout << "Area: " << area << "cm^2\n";
    std::cout << "Volume: " << volume << "cm^3\n";

    return 0;
}

double square(double length){
    // double result = length * length;
    // return result; // if returning a value, change void to datatype (double)
    return length * length;
}

double cube(double length){
    return length * length * length;
}

std::string concatStrings(std::string string1, std::string string2);

int main(){

    std::string firstName = "Louis";
    std::string lastName = "Liu";
    std::string fullName = concatStrings(firstName, lastName);

    std::cout << "Hello " << fullName;

    return 0;
}

std::string concatStrings(std::string string1, std::string string2){
    return string1 + " " + string2;
}