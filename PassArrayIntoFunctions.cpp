#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>
#include <iomanip>

// 36. Pass array to a function
// only the name but not the square brackets when passing the array into a function 


double getTotal(double prices[], int size);

int main(){

    double prices[] = {49.99, 15.05, 75, 9.99};
    int size = sizeof(prices)/sizeof(prices[0]);

// only the name but not the square brackets when passing the array into a function
    double total = getTotal(prices, size);

    std::cout << "$" << total;

    return 0;
}

double getTotal(double prices[], int size){
    double total = 0;

// the following for loop isn't working because the array decays to a pointer 
// the function has no idea how big the array is anymore
// solution: when we invoke the function, we can also pass the size

    // for(int i = 0; i < sizeof(prices)/sizeof(prices[0]); i++){
    //     total += prices[i];
    // }

    for (int i = 0; i < size; i++){
        total += prices[i];
    }
    return total;
}