#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>
#include <iomanip>


// 29. Variable scope
// Local variables = declared inside a function or block {}
// Global variables = declared outside of all functions
// it pollutes the global namespace
// these variables are less secure

void printNum(int myNum);

int main(){

    int myNum = 1;

    printNum(myNum);

    return 0;
}

void printNum(int myNum){
    std::cout << myNum;
}

int myNum = 3;

void printNum();

int main()
{

    int myNum = 1;
    printNum();
    std::cout << myNum << '\n';
    // a function will prioritize using local variables
    // scope resolution operator :: before the variable

    return 0;
}

void printNum(){
    int myNum = 2;
    std::cout << myNum << '\n';
}
