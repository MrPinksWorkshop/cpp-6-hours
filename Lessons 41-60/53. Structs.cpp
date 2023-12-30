#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>
#include <iomanip>

// 53. Structs
// struct = A structure that group related varaibles under one name
//          Struct can contain many different data types (string, int, double, bool, etc.)
//          variables in a struct are known as "members"
//          members can be accessed with . "Class Member Access Operator"
// similar to constructor in javascript

struct student{
    std::string name;
    double gpa;
    bool enrolled = true; // can set a default value to a member
}; // end a struct with a semi-colon


int main(){

    student student1;
    student1.name = "Spongebob";
    student1.gpa = 3.2;

    student student2;
    student2.name = "Patrick";
    student2.gpa = 2.1;

    student student3;
    student3.name = "Squidward";
    student3.gpa = 1.5;

    std::cout << student1.name << '\n';
    std::cout << student1.gpa << '\n';
    std::cout << student1.enrolled << '\n';

    std::cout << student2.name << '\n';
    std::cout << student2.gpa << '\n';
    std::cout << student2.enrolled << '\n';

    std::cout << student3.name << '\n';
    std::cout << student3.gpa << '\n';
    std::cout << student3.enrolled << '\n';

    return 0;
}
