#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>
#include <iomanip>


// 48. Null pointer
// 不指向任何数据对象的指针
// Null value = a special value that means something has no value.
//              When a pointer is holding a null value,
//              that pointer is not pointing at anything (null pointer)

// nullptr = keyword represents a null pointer literal
// nullptrs are helpful when determining if an address
// was successfully assigned to a pointer


int main()
{

    int *pointer = nullptr;
    int x = 123;

    // When using pointers, be careful that your code isn't 
    // dereferencing nullptr or pointing to free memory
    // this will cause undefined behaviour
    pointer = &x;
    // *pointer;
    // check to see if a pointer is a nullptr
    //              contains a valid address before dereferencing it

    if(pointer == nullptr){
        std::cout << "address was not assigned!\n";
    }
    else{
        std::cout << "address was assigned\n";
        std::cout << *pointer;
    }
    return 0;
}