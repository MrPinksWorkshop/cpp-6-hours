#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>
#include <iomanip>

// 52. Function templates
// function template = describes what a function looks like.
//                     Can be used to generate as many overloaded functions
//                     as needed, each using different data types.
// one function that can accept any data types

// int max(int x, int y){
//     return (x > y) ? x : y;
// }

// double max(double x, double y){
//     return (x > y) ? x : y;
// }

// char max(char x, char y){
//     return (x > y) ? x : y;
// }

// function template
// T for Thing
// template parameter declaration
// template <typename T>
// T max(T x, T y){
//     return (x > y) ? x : y;
// }

// two or more data types being compared, V, W, X...
// template <typename T, typename U>
// // using the auto keyword, the complier deduces which return type should be

// // -std=c++17 in the executer map if auto causes errors
// auto max(T x, U y){
//     return (x > y) ? x : y;
// }

// int main()
// {
//     std::cout << max(1, 2) << '\n';
//     std::cout << max(1.1, 2.1) << '\n';
//     std::cout << max('1', '2') << '\n';
//     std::cout << max(1, 2.1) << '\n';

//     return 0;
// }