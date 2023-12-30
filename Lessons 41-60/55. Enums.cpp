#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>
#include <iomanip>

// 55. Enums
// enumeration
// enums = a user-defined datatype that consists
//         of paired named-integer constants.
//         GREAT if you have a set of potential options

enum Day {sunday = 0, monday = 1, tuesday = 2, wednesday = 3, thursday = 4, friday = 5, saturday = 6};
// also inplicitly assign those integer values to each element
enum Flavor {vanilla, chocolate, strawberry, mint};
enum Color {red, orange, yellow, green, blue, purple};
enum Planet {mercury = 4880, venus = 12104, earth = 12756,
             mars = 6794, jupiter = 142984, saturn  = 108728,
             uranus = 51118, neptune = 49532, pluto = 2320};

int main(){

// normally we can't use strings within switches
// std::string today = "sunday";

    Day today = sunday; // there's associated values
    

    // we can also use associated values, but not as readable
    switch(today){
        case sunday : std::cout << "It is Sunday!\n";
                        break;
        case monday : std::cout << "It is Monday!\n";
                        break;
        case tuesday : std::cout << "It is Tuesday!\n";
                        break;
        case wednesday : std::cout << "It is Wednesday!\n";
                        break;
        case thursday : std::cout << "It is Thursday!\n";
                        break;
        case friday : std::cout << "It is Friday!\n";
                        break;
        case saturday : std::cout << "It is Saturday!\n";
                        break;
    }

    return 0;
}