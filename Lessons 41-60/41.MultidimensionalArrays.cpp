#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>
#include <iomanip>

// 41. Multidimensional arrays
// 2d array = {array1, array2, array3}
// useful for representing grid and matrix of data
// two indices: first for the rows, second for the columns

int main(){

    std::string cars[][3] = {{"Mustang", "Escape", "F-150"}, 
                            {"Corvette", "Equinox", "Silverado"},
                            {"Challenger", "Durango", "Ram 1500"}};
    
    // std::cout << cars[0][0] << " ";
    // std::cout << cars[0][1] << " ";
    // std::cout << cars[0][2] << "\n";

    // std::cout << cars[1][0] << " ";
    // std::cout << cars[1][1] << " ";
    // std::cout << cars[1][2] << "\n";

    // std::cout << cars[2][0] << " ";
    // std::cout << cars[2][1] << " ";
    // std::cout << cars[2][2] << "\n";

    int rows = sizeof(cars)/sizeof(cars[0]);
    int columns = sizeof(cars[0])/sizeof(cars[0][0]);

    for(int i = 0; i < rows; i++){
        // std::cout << cars[i] << '\n';
        for(int j = 0; j < columns; j++){
            std::cout << cars[i][j] << " ";
        }
        // create a line to separate each nested loop
        std::cout << '\n';
    }

    return 0;
}
