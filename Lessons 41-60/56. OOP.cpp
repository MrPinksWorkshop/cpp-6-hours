#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>
#include <iomanip>


// 56. Objected Oriented Programming
//  object = A collection of attributes and methods (functions that belong to a class)
//           They can have characteristics and could perform actions
//           Can be used to mimic real world items (ex. Phone, Book, Dog)
//           Created from a class which acts as a "blue-print"

// class Human{
//     public:
//         std::string name = "Rick"; // default attributes like cloning
//         std::string occupation = "scientist";
//         int age = 70;

//         void eat(){
//             std::cout << "This person is eating\n";
//         }
//         void drink(){
//             std::cout << "This person is drinking\n";
//         }
//         void sleep(){
//             std::cout << "This person is sleeping\n";
//         }
// };

// int main(){

//     Human human1; // human1 is an object
//     Human human2;

//     // kinda similar to struct but objects can perform actions
//     // human1.name = "Louis";
//     // human1.occupation = "Software Engineer";
//     // human1.age = 18;

//     // human2.name = "Morty";
//     // human2.occupation = "Student";
//     // human2.age = 15;

//     std::cout << human1.name << '\n';
//     std::cout << human1.occupation << '\n';
//     std::cout << human1.age << '\n';

//     human1.eat();
//     human1.drink();
//     human1.sleep();

//     return 0;
// }

// another example
// class Car{
//     public:
//         std::string make;
//         std::string model;
//         int year;
//         std::string color;

//         void accelerate(){
//             std::cout << "You step on the gas!\n";
//         }
//         void brake(){
//             std::cout << "You step on the brakes!\n";
//         }
// };

// int main(){

//     Car car1;
//     Car car2;

//     car1.make = "Ford";
//     car1.model = "Mustang";
//     car1.year = 2023;
//     car1.color = "pink";

//     std::cout << car1.make << '\n';
//     std::cout << car1.model << '\n';
//     std::cout << car1.year << '\n';
//     std::cout << car1.color << '\n';

//     car1.accelerate();
//     car1.brake();

//     return 0;
// }