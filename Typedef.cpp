#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>
#include <iomanip>

// 5. Typedef and type aliases
// typedef = reserved keyword used to create an additional name
//           (alias) for another data type.
//           New identifier for an existing type
//           Helps with readability and reduces typos
//           Use when there is a clear benefit
//           Replaced with 'using' (work better w/ templates)

// typedef std::vector<std::pair<std::string, int>> pairlist_t; //naming convention ends with t for type
// pairlist_t pairlist; in the main function
// typedef std::string text_t;
// typedef int number_t;

using text_t = std::string;
using number_t = int;

int main(){

    text_t firstName = "Louis";
    number_t age = 21;

    std::cout << firstName <<'\n';
    std::cout << age << '\n';

    return 0;
}