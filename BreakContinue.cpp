#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>
#include <iomanip>


// 21. Break & continue
// break = break out of a loop
// continue = skip current iteration

int main(){

    for(int i = 1; i <= 20; i++){
        if(i == 13){
            continue;
        }
        std::cout << i << '\n';
    }

    return 0;
}
