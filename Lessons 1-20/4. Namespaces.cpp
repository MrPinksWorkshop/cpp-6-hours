#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>
#include <iomanip>


// Namespace = provides a solution for preventing name conflicts
//             in large projects. Each enitty needs a unique name.
//             A namespace allows for identically named entities 
//             as long as teh namespaces are different.

namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}

// case 1:
int main(){
    using namespace first;
    int x = 0;

 //   std::cout << x; //outputs 0 as the local scope
    std::cout << x; //outputs 1, :: as the scope resolution operator

    return 0;
}

// case 2: 
int main(){
    using namespace first;
    int x = 0;

 //   std::cout << x; //outputs 0 as the local scope
    std::cout << second::x; //outputs 1, :: as the scope resolution operator

    return 0;
}

//cut down repetition
//using namespace std;;
//using std::cout;
//using std::string;