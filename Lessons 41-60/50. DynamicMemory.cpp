#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>
#include <iomanip>


// 50. Dynamic memory
// dynamic memory = memory that is allocated after the program
//                  is already compiled & running.
//                  Use the 'new' operator to allocate
//                  memory in the heap rather than the stack

//                  Useful when we don't know how much memory
//                  we will need. Makes our programs more flexible,
//                  especially when accepting user input.
//                  no idea what users gonna type in

int main(){

    int *pNum = NULL;

    pNum = new int;

    *pNum = 21;

    std::cout << "address: " << pNum << "\n";
    std::cout << "value: " << *pNum << "\n";

    // freeing up the memory at this address
    delete pNum;

    return 0;
}


int main(){

    char *pGrades = NULL;
    int size;

    std::cout << "How many grades to enter in?: ";
    std::cin >> size;

    pGrades = new char[size];
    
    for(int i = 0; i < size; i++){
        std::cout << "Enter grade #" << i + 1 << ": ";
        // either pGrades[i] or pGrades + i
        std::cin >> pGrades[i];
    }

    for(int i = 0; i < size; i++){
        std::cout << pGrades[i] << " ";
    }

    // no longer need the array
    delete[] pGrades;

    return 0;
}