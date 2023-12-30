#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>
#include <iomanip>


// 57. Constructors
// constructor = special method that is automatically called when an object is instantiated
//               useful for assigning values to attributes as arguments

// class Student{
//     public: 
//         std::string name;
//         int age;
//         double gpa;
    
//     // constructor
//     Student(std::string name, int age, double gpa){
//         this->name = name;
//         this->age = age;
//         this->gpa = gpa;
//     }

//     // another way
//     // Student(std::string x, int y, double z){
//     //     name = x;
//     //     age = y;
//     //     gpa = z;
//     // }
// };


// int main(){

//     Student student1("Spongebob", 25, 3.2);
//     Student student2("Patrick", 40, 1.5);
//     Student student3("Sandy", 21, 4.0);


//     std::cout << student1.name << '\n';
//     std::cout << student1.age << '\n';
//     std::cout << student1.gpa << '\n';
//     std::cout << student2.name << '\n';
//     std::cout << student2.age << '\n';
//     std::cout << student2.gpa << '\n';
//     std::cout << student3.name << '\n';
//     std::cout << student3.age << '\n';
//     std::cout << student3.gpa << '\n';

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
    
//     Car(std::string make, std::string model, int year, std::string color){
//         this->make = make;
//         this->model = model;
//         this->year = year;
//         this->color = color;
//     }


// };

// int main(){

//     Car car1("Chevy", "Corvette", 2022, "blue");
//     Car car2("Ford", "Mustang", 2023, "red");

//     std::cout << car1.make << '\n';
//     std::cout << car1.model << '\n';
//     std::cout << car1.year << '\n';
//     std::cout << car1.color << '\n';

//     car1.accelerate();
//     car1.brake();

//     return 0;
// }