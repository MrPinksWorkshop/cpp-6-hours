#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>
#include <iomanip>

// 3. Constants
int main(){
    // The const keyword specifies that a variable's value is constant
    // tells the complier to prevent anything from modifying it
    // (read-only)

    const double PI = 3.14159; //upper case: common naming convention for constants
    // const int LIGHT_SPEED = 299792458;
    // const int WIDTH = 1920;
    // const int HEIGHT = 1080;

    double radius = 10;
    double circumference = 2 * PI * radius;

    std::cout << circumference << "cm";

    return 0;
}
