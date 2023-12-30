#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>
#include <iomanip>

// 54. Pass structs as arguments
// a struct is kinda like a datatype
// pass by value but not reference (creating a copy)
// can be demonstrated by using &
struct Car{
    std::string model;
    int year;
    std::string color;
};

// void printCar(Car &car)
void printCar(Car car);
void paintCar(Car &car, std::string color);

int main(){

    Car car1;
    Car car2;

    car1.model = "Mustang";
    car1.year = 2023;
    car1.color = "red";

    car2.model = "Corvette";
    car2.year = 2024;
    car2.color = "blue";

    paintCar(car1, "silver");
    paintCar(car2, "gold");

    std::cout << &car1 << '\n';
    printCar(car1);
    printCar(car2);

    return 0;
}

// void printCar(Car &car)
void printCar(Car car){
    std::cout << &car << '\n';
    std::cout << car.model << '\n';
    std::cout << car.year << '\n';
    std::cout << car.color << '\n';
}

// making changes to the original instead of copies
// pass by reference
void paintCar(Car &car, std::string color){
    car.color = color;
}