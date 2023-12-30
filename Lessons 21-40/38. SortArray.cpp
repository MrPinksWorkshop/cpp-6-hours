#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>
#include <iomanip>

// 38. Sort an array
// bubble sort
// there are more efficient methods


void sort(int array[], int size);

int main(){

    int array[] = {10, 1, 9, 2, 8, 3, 7, 4, 6, 5};
    int size = sizeof(array)/sizeof(array[0]);


    sort(array, size);

    for(int element : array){
        std::cout << element << " ";
    }


    return 0;
}

void sort(int array[], int size)
{
    int temp;
    // size - 1 because last element doesn't need to be compared
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - 1; j++){
            // descending order array[j] < array[j + 1]
            if(array[j] > array[j + 1]){
                temp = array [j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}