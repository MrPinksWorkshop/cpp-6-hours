#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>
#include <iomanip>

// 17. Useful string methods in c++
//www.cplusplus.com/reference/string/string
//string.length
//string.empty, used to check if someone enters the name
//string.clear
//string.append
//string.at()
//string.insert(, )
//string.find
//string.erase

int main(){

    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    // string.length
    // if(name.length() > 12){
    //     std::cout << "Your name can't be over 12 characters"; 
    // }
    // else{
    //     std::cout << "Welcome " << name;
    // }


    // string.clear
    // name.clear();
    // std::cout << "Hello" << name;


    // string.append
    // name.append("@gmail.com");
    // std::cout << "Your username is now " << name;

    // string.at
    // std::cout << name.at(0);

    // string.insert
    // name.insert(0, "@");
    // std::cout << name;
    
    // string.find
    // std::cout << name.find(' ');

    // string.erase
    // name.erase(0, 3); // erase a portion of the string
    // std::cout << name;

    // return 0;

}