#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>
#include <iomanip>

// 35. Foreach loop
// foreach loop = loop that eases the traversal over an 
//                iterable data set
//                less syntax, less flexible (change increments) compared to a for loop


int main(){

    // std::string students[] = {"Spongebob", "Patrick", "Squidward"}; 

    int grades[] = {65, 72, 81, 93};

    for(int grade : grades){
        std::cout << grade << '\n';
    }

    return 0;
}