// 2. Variables and basic data types

#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>
#include <iomanip>

int main(){

    // int x; //declaration
    // x = 5; //assignment

    int x = 5;
    int y = 6;
    int sum = x + y;

    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << sum << '\n';

    return 0;
}

int main(){

    //integer (whole number)
    int age = 21;
    int year = 2023; 
    int days = 7;

    //double (number including decimal)
    double price = 10.99;
    double gpa = 2.5;
    double temperature = 25.1;

    std::cout << price;

    //single character
    char grade = 'A';
    char initial = 'B';
    char currency = '$';

    //boolean (two states: true or false)
    bool student = false;
    bool power = true;
    bool forSale = true;

    //string (a char datatype but more than one)
    std::string name = "Bro";
    std::string day = "Friday";
    std::string food = "pizza";
    std::string address = "123 Fake St.";

    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old";

    
    return 0;
}