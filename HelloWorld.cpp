#include <iostream>
#include <vector>

// int main(){

//     //This is a comment
//     /*
//         This
//         is
//         a
//         multi-line
//         comment
//     */

//     std::cout << "I like pizza!" << std::endl; // add a semicolon to let the compiler know that the snippet is done
//     std::cout << "It's really good!" << std::endl; // '\n' also works performance-wise
//     return 0; 
// }






// 2. Variables and basic data types

// int main(){

//     // int x; //declaration
//     // x = 5; //assignment

//     int x = 5;
//     int y = 6;
//     int sum = x + y;

//     std::cout << x << '\n';
//     std::cout << y << '\n';
//     std::cout << sum << '\n';

//     return 0;
// }

// int main(){

//     //integer (whole number)
//     int age = 21;
//     int year = 2023; 
//     int days = 7;

//     //double (number including decimal)
//     double price = 10.99;
//     double gpa = 2.5;
//     double temperature = 25.1;

//     std::cout << price;

//     //single character
//     char grade = 'A';
//     char initial = 'B';
//     char currency = '$';

//     //boolean (two states: true or false)
//     bool student = false;
//     bool power = true;
//     bool forSale = true;

//     //string (a char datatype but more than one)
//     std::string name = "Bro";
//     std::string day = "Friday";
//     std::string food = "pizza";
//     std::string address = "123 Fake St.";

//     std::cout << "Hello " << name << '\n';
//     std::cout << "You are " << age << " years old";

    
//     return 0;
// }





// 3. Constants
// int main(){
//     // The const keyword specifies that a variable's value is constant
//     // tells the complier to prevent anything from modifying it
//     // (read-only)

//     const double PI = 3.14159; //upper case: common naming convention for constants
//     // const int LIGHT_SPEED = 299792458;
//     // const int WIDTH = 1920;
//     // const int HEIGHT = 1080;

//     double radius = 10;
//     double circumference = 2 * PI * radius;

//     std::cout << circumference << "cm";

//     return 0;
// }




// 4. Namespaces
// Namespace = provides a solution for preventing name conflicts
//             in large projects. Each enitty needs a unique name.
//             A namespace allows for identically named entities 
//             as long as teh namespaces are different.
// namespace first{
//     int x = 1;
// }

// namespace second{
//     int x = 2;
// }

// // case 1:
// int main(){
//     using namespace first;
//     int x = 0;

//  //   std::cout << x; //outputs 0 as the local scope
//     std::cout << x; //outputs 1, :: as the scope resolution operator

//     return 0;
// }

// // case 2: 
// int main(){
//     using namespace first;
//     int x = 0;

//  //   std::cout << x; //outputs 0 as the local scope
//     std::cout << second::x; //outputs 1, :: as the scope resolution operator

//     return 0;
// }

//cut down repetition
//using namespace std;;
//using std::cout;
//using std::string;




// 5. Typedef and type aliases
// typedef = reserved keyword used to create an additional name
//           (alias) for another data type.
//           New identifier for an existing type
//           Helps with readability and reduces typos
//           Use when there is a clear benefit
//           Replaced with 'using' (work better w/ templates)

//typedef std::vector<std::pair<std::string, int>> pairlist_t; //naming convention ends with t for type
//pairlist_t pairlist; in the main function
//typedef std::string text_t;
//typedef int number_t;

// using text_t = std::string;
// using number_t = int;

// int main(){

//     text_t firstName = "Louis";
//     number_t age = 21;

//     std::cout << firstName <<'\n';
//     std::cout << age << '\n';

//     return 0;
// }




// 6. Arithmetic operators
// Arithmetic operators = return the result of a specific
//                         arithmetic operation (+ - * /)

//parenthesis
//multiplication & division
//addition & subtraction

// int main(){

//     int students = 20;

//     //students = students + 1;
//     //students+=1;
//     //students++;


//     //students= students - 1;
//     //students-=1;
//     //students--;

//     //students = students * 2;
//     //students*2=;

//     //students = students / 2;
//     //students/=3;

//     int remainder = students % 3;

//     std::cout << remainder;
    
//     return 0;
// }



// 7. Type conversion
// type conversion = conversion a value of one data type to another
//                 Implicit = automatic
//                 Explicit = Precede value with new data type (int)



// int main(){

//     // double x = (int) 3.14;

//     // std::cout << x;


//     // char x = 100;
//     // std::cout << x;

//     // std::cout << (char) 100;
//     // convert it to 'd' using ASCII table

//     int correct = 8;
//     int questions = 10;
//     double score = correct/(double)questions * 100;

//     std::cout << score << "%";

//     return 0;
// }




// 8. User input
// cout << (insertion operator)
// cin >> (extraction operator)

// int main()
// {

//     std::string name;
//     int age;

//     std::cout << "What's your age?: ";
//     std::cin >> age;

//     std::cout << "What's your full name?: ";
//     //std::cin >> name;
//     std::getline(std::cin >> std::ws, name); //accept a string with spaces

//     std::cout << "Hello " << name << '\n';
//     std::cout << "You are " << age << " years old";
//     return 0;
// }


// 9. Useful math related functions
#include <cmath>
//www.cplusplus.com/reference/cmath/
// int main()
// {

//     double x = 3.14;
//     double y = 4;
//     double z;

//     //z = std::max(x, y);
//     //z = std::min(x, y);
//     //z = pow(2,4)
//     //z = sqrt(9);
//     //z = abs(-3);
//     //z = round (x);
//     //z = ceil (x);
//     //z = floor(x);

//     std::cout << z;

//     return 0;
// }




// 10. Hypotenuse of a right triangle program

// int main(){

//     double a = 3;
//     double b = 4;
//     double c; 

//     std::cout << "Enter side A: ";
//     std::cin >> a;

//     std::cout << "Enter side B ";
//     std::cin >> b;

//     c = sqrt (pow(a, 2) + pow(b, 2));

//     std::cout << "side C: " << c << '\n';

//     return 0;
// }




// 11. If statements
//if statements = do something if a condition is true.
//                if not, then don't do it.


// int main(){

//     int age;

//     std::cout << "Enter your age: ";
//     std::cin >> age;

// // the order of if statementes matter
//     if(age >= 100){
//         std::cout << "You are too old to enter this site!";
//     }
//     else if(age >= 18){
//         std::cout << "Welcome to the site!";
//     }
//     else if(age < 0){
//         std::cout << "You haven't been born yet!";
//     }
//     else{
//         std::cout << "You are not old enough to enter!";
//     }

//     return 0;
// }




// 12. Switches
//switch = alternative to using many "else if" statements
//         compare one value against matching cases
//         more efficient and easier to raed


// int main(){
//     int month;
//     std::cout << "Enter the month (1-12): ";
//     std::cin >> month;

//     switch(month){
//         case 1:
//             std::cout << "It is January";
//             break;
//         case 2: 
//             std::cout << "It is February";
//             break;
//         case 3:
//             std::cout << "It is March";
//             break;
//         case 4:
//             std::cout << "It is April";
//             break;
//         case 5:
//             std::cout << "It is May";
//             break;

//         default:
//             std::cout << "Please enter in only numbers (1-12)";
//             break;
//     }

//     return 0;
// }


// another example
// int main(){

//     char grade;
//     std::cout << "What letter grade: ";
//     std::cin >> grade;

//     switch(grade){
//         case 'A':
//             std::cout << "You did great";
//             break;
//         case 'B':
//             std::cout << "You did good";
//             break;
//         case 'C':
//             std::cout << "You did okay";
//             break;
//         case 'D':
//             std::cout << "You did not do good";
//             break;
//         case 'F':
//             std::cout << "YOU FAILED!";
//             break;
//         default:
//             std::cout << "Please enter a letter grade (A-F)";
//             break;
//     }

//     return 0;

// }



// 13. Console calculator program

// int main(){

//     char op; // operator
//     double num1;
//     double num2;
//     double result;

//     std::cout << "********* CALCULATOR *********\n";

//     std::cout << "Enter either (+ - * /): ";
//     std::cin >> op;

//     std::cout << "Enter #1: ";
//     std::cin >> num1;

//     std::cout << "Enter #2: ";
//     std::cin >> num2; 
    
//     switch(op){
//         case '+':
//             result = num1 + num2;
//             std::cout << "result: " << result << '\n';
//             break;
//         case '-':
//             result = num1 - num2;
//             std::cout << "result: " << result << '\n';
//             break;
//         case '*':
//             result = num1 * num2;
//             std::cout << "result: " << result << '\n';
//             break;
//         case '/':
//             result = num1 / num2;
//             std::cout << "result: " << result << '\n';
//             break;
//         default:
//             std::cout << "That wasn't a valid operator\n";
//             break;
//     }

//     std::cout << "*******************************";

//     return 0;
// }



// 14. Ternary operators

// ternary operator ?: = replacement to an if/else statement
// condition ? expression1 : expression2;
// int main(){

//     // if(grade >= 60){
//     //      std::cout << "You pass!";
//     // }
//     // else{
//     //     std::cout << "You fail!";
//     // }


//     // int grade = 75;
//     // grade >= 60? std::cout << "You pass!" : std::cout << "You fail";

//     // int number = 9;
//     // number % 2 == 1 ? std::cout << "ODD" : std::cout << "EVEN";

//     // bool hungry = true;

//     // hungry ? std::cout << "You are hungry" : std::cout << "You are full";
//     // the code below does the same thing
//     // std::cout << (hungry ? "You are hungry" : "You are full");
    
//     return 0;
// }






// 15. And, or, not logical operators
// && = check if two conditions are true
// || = check if at least one of two conditions is true
// ! = reverses the logical state of its operand


// int main(){

//     int temp;
//     bool sunny = true;

//     std::cout << "Enter the temperature: "; 
//     std::cin >> temp;

//     if(temp <= 0 || temp >= 30){
//         std::cout << "The temperature is bad!\n";
//     }
//     else{
//         std::cout << "The temperature is good!\n";
//     }

//     if(!sunny){
//         std::cout << "It is cloudy outside!";
//     }
//     else{
//         std::cout << "It is sunny outside!";
//     }

//     return 0;
// }





// 16. Temperature conversion program

// int main(){

//     double temp;
//     char unit;


//     std::cout << "***** Temperature conversion *****\n";
//     std::cout << "F = Fahrenheit\n";
//     std::cout << "C = Celsius\n";

//     std::cout << "What unit would you like to conver to: ";
//     std::cin >> unit;

//     if(unit == 'F' || unit == 'f'){
//         std::cout << "Enter the temperature in Celsius: ";
//         std::cin >> temp;

//         temp = (1.8 * temp) + 32.0;
//         std::cout << "Temperature is: " << temp << "F\n";
//     }
//     else if(unit == 'C' || unit == 'c'){
//         std::cout << "Enter the temperature in Fahrenheit: ";
//         std::cin >> temp;

//         temp = (temp - 32) / 1.8;
//         std::cout << "Temperature is: " << temp << "C\n";
//     }
//     else{
//         std::cout << "Please enter in only C or F\n";
//     }

//     std::cout << "*********************************";

//     return 0;
// }





// // 17. Useful string methods in c++
// //www.cplusplus.com/reference/string/string
// //string.length
// //string.empty, used to check if someone enters the name
// //string.clear
// //string.append
// //string.at()
// //string.insert(, )
// //string.find
// //string.erase

// int main(){

//     std::string name;

//     std::cout << "Enter your name: ";
//     std::getline(std::cin, name);

//     // string.length
//     // if(name.length() > 12){
//     //     std::cout << "Your name can't be over 12 characters"; 
//     // }
//     // else{
//     //     std::cout << "Welcome " << name;
//     // }


//     // string.clear
//     // name.clear();
//     // std::cout << "Hello" << name;


//     // string.append
//     // name.append("@gmail.com");
//     // std::cout << "Your username is now " << name;

//     // string.at
//     // std::cout << name.at(0);

//     // string.insert
//     // name.insert(0, "@");
//     // std::cout << name;
    
//     // string.find
//     // std::cout << name.find(' ');

//     // string.erase
//     // name.erase(0, 3); // erase a portion of the string
//     // std::cout << name;

//     // return 0;

// }


// 18. While loops
// kinda like a if statement
// except it can potentially repeat something infinitely
// force a user to do something in order to continue with the rest of the code

// int main(){

//     std::string name;

//     while(name.empty()){
//         std::cout << "Enter your name: ";
//         std::getline(std::cin, name);
//     }

//     std::cout << "Hello " << name;

//     return 0;
// }


// 19. Do while loops
// do while loop = do some block of code first,
//                 THEN repeat again if condition is true


// int main(){

//     // int number;

//     //     std::cout << "Enter a positive #: ";
//     //     std::cin >> number;

//     // while(number < 0){
//     //     std::cout << "Enter a positive #: ";
//     //     std::cin >> number;
//     // }

//     // std::cout << "The # is: " << number;


//     // a better way of writing the above code --> do while loop
//     // int number;

//     // do{
//     //     std::cout << "Enter a positive #: ";
//     //     std::cin >> number;
//     // } while(number < 0);

//     // std::cout << "The # is: " << number;        

//     // return 0;
// }




// 20. For loops
// execute a block of code a specified amount of times
// for loops tend to be beter in situations where you only need to repeat a certain amount times

// int main(){

//     // up to 3 statements within a for loop
//     for(int i = 10; i >= 0; i--){
//         std::cout << i << '\n';
//     }
//     std::cout << "HAPPY THANKSGIVING!\n";

//     return 0;
// }





// 21. Break & continue
// break = break out of a loop
// continue = skip current iteration

// int main(){

//     for(int i = 1; i <= 20; i++){
//         if(i == 13){
//             continue;
//         }
//         std::cout << i << '\n';
//     }

//     return 0;
// }





// 22. Nested loops
// a practice program to output a rectangle
// int main()
// {
//     int rows;
//     int columns;
//     char symbol;

//     std::cout << "How many rows?: ";
//     std::cin >> rows;

//     std::cout << "How many columns?: ";
//     std::cin >> columns;

//     std::cout << "Enter a symbol to use: ";
//     std::cin >> symbol;

//     for(int i = 1; i <= rows; i++){
//         for(int j = 1; j <= columns; j++){
//             std::cout << symbol;
//         }
//         std::cout << '\n';
//     }

//     return 0;
// }

#include <ctime>
// 23. Random number generator
// pseudo-random = NOT truly random (but close)
// it works for a simple game

// int main()
// {

//     srand(time(NULL));

//     int num1 = (rand() % 6) +1; // add 1 to start from 1 instead of 0
//     int num2 = (rand() % 6) +1;
//     int num3 = (rand() % 6) +1;

//     std::cout << num1 << '\n';
//     std::cout << num2 << '\n';
//     std::cout << num3 << '\n';

//     return 0;
// }





// 24. Random event generator
// int main()
// {

//     srand(time(0));
//     int randNum = (rand() % 5) +1;

//     switch(randNum){
//         case 1: std::cout << "You win a bumper sticker!\n";
//             break; // somebody only wins 1 prize
//         case 2: std::cout << "You win a t-shirt!\n";
//             break;
//         case 3: std::cout << "You win a free lunch!\n";
//             break;
//         case 4: std::cout << "You win a gift card!\n";
//             break;
//         case 5: std::cout << "You win concert tickets!\n";
//             break;
//     }

//     return 0;
// }





// 25. Number guessing game

// int main(){

//     int num;
//     int guess;
//     int tries = 0; // initialize the # of tries to 0

//     srand(time(NULL));
//     num = (rand() % 100) + 1;

//     std::cout << "****** NUMBER GUESSING GAME ******\n";

//     do{
//         std::cout << "Enter a guess between (1-100): ";
//         std::cin >> guess;
//         tries++;

//         if(guess > num){
//             std::cout << "Too high!\n";
//         }
//         else if(guess < num){
//             std::cout << "Too low!\n";
//         }
//         else{
//             std::cout << "CORRECT! # of tries: " << tries << '\n';
//         }

//     } while(guess != num);

//     std::cout << "***********************";

//     return 0;
// }




// 26. User defined functions
// function = a block of reusable code

// void happyBirthday(std::string name, int age); // declare a function before the main function

// int main() // function is like a house, another function is like a neighbour house
// // local scope
// {

//     std::string name = "Louis";
//     int age = 19;

//     happyBirthday(name, age);

//     return 0;
// }

// void happyBirthday(std::string name, int age){ // a parenthesis a like a pair of telephones
// // a matching set of parameters to pass the arguments
//     std::cout << "Happy Birthday " << name << '\n';
//     std::cout << "Happy Birthday " << name << '\n';
//     std::cout << "Happy Birthday to dear " << name << '\n';
//     std::cout << "Happy Birthday " << name << '\n';
//     std::cout << "You are " << age << " years old!\n";
// }





// 27. Return keywords
// return  = return a value back to the spot
//           where you called the encompassing function

// double square(double length);
// double cube(double length);

// int main()
// {

//     double length = 5.0;
//     double area = square(length);
//     double volume = cube(length);

//     std::cout << "Area: " << area << "cm^2\n";
//     std::cout << "Volume: " << volume << "cm^3\n";

//     return 0;
// }

// double square(double length){
//     // double result = length * length;
//     // return result; // if returning a value, change void to datatype (double)
//     return length * length;
// }

// double cube(double length){
//     return length * length * length;
// }

// std::string concatStrings(std::string string1, std::string string2);

// int main(){

//     std::string firstName = "Louis";
//     std::string lastName = "Liu";
//     std::string fullName = concatStrings(firstName, lastName);

//     std::cout << "Hello " << fullName;

//     return 0;
// }

// std::string concatStrings(std::string string1, std::string string2){
//     return string1 + " " + string2;
// }




// 28. Overloaded functions
// functions can have the same names
// but with a different set of parameters

// void bakePizza();
// void bakePizza(std::string topping1);
// void bakePizza(std::string topping1, std::string topping2);

// int main(){

//     bakePizza("pepperoni", "mushroom");

//     return 0;
// }

// void bakePizza(){
//     std::cout << "Here is your pizza!\n";
// }

// // a function name + parameter = function signature
// void bakePizza(std::string topping1){
//     std::cout << "Here is your " << topping1 << " pizza!\n";
// }

// void bakePizza(std::string topping1, std::string topping2){
//     std::cout << "Here is your " << topping1 << " and " << topping2 << "pizza!\n";
// }





// 29. Variable scope
// Local variables = declared inside a function or block {}
// Global variables = declared outside of all functions
// it pollutes the global namespace
// these variables are less secure

// void printNum(int myNum);

// int main(){

//     int myNum = 1;

//     printNum(myNum);

//     return 0;
// }

// void printNum(int myNum){
//     std::cout << myNum;
// }

// int myNum = 3;

// void printNum();

// int main()
// {

//     int myNum = 1;
//     printNum();
//     std::cout << myNum << '\n';
//     // a function will prioritize using local variables
//     // scope resolution operator :: before the variable

//     return 0;
// }

// void printNum(){
//     int myNum = 2;
//     std::cout << myNum << '\n';
// }






// 30. Banking practice program
#include <iomanip>
// setprecision for some floating point numbers
// setprecision(n) for n decimal places

// void showBalance(double balance);
// double deposit();
// double withdraw(double balance);


// int main()
// {
    
//     double balance = 0;
//     int choice = 0;

//     do{
//         std::cout << "******************\n";
//         std::cout << "Enter your choice: ";
//         std::cout << "******************\n";

//         std::cout << "1. Show Balance\n";
//         std::cout << "2. Deposit Money\n";
//         std::cout << "3. Withdraw Money\n";
//         std::cout << "4. Exit\n";
//         std::cin >> choice;

//         std::cin.clear();
//         fflush(stdin);

//         switch(choice){
//             case 1: showBalance(balance);
//                 break;
//             case 2: balance += deposit();
//                 showBalance(balance);
//                 break;
//             case 3: balance -= withdraw(balance);
//                 showBalance(balance);
//                 break;
//             case 4: std::cout << "Thanks for visiting\n";
//                 break;
//             default: std::cout << "Invalid choice\n";
//         }
//     } while(choice !=4);

//     return 0;

// }


// void showBalance(double balance){
//     std::cout<< "Your balance is: $" << std:: setprecision(2) << std:: fixed << balance << '\n';
// }

// double deposit(){

//     double amount = 0;

//     std::cout << "Enter amount to be deposited: ";
//     std::cin >> amount;

//     if(amount > 0){
//         return amount;
//     }
//     else{
//         std::cout << "That's not a valid amount: ";
//         return 0;
//     }
// }

// double withdraw(double balance){

//     double amount = 0;

//     std::cout << "Enter amount to be withdrawn: ";
//     std::cin >> amount;

//     if(amount > balance){
//         std::cout << "insufficient funds\n";
//         return 0;
//     }
//     else if(amount < 0){
//         std::cout << "That's not a valid amount\n";
//         return 0;
//     }
//     else{
//         return amount;
//     }
// }






// 31. Rock paper scissors game

// char getUserChoice();
// char getComputerChoice();
// void showChoice(char choice);
// void chooseWinner(char player, char computer);

// int main(){
//     char player;
//     char computer;

//     player = getUserChoice();
//     std::cout << "Your choice: ";
//     showChoice(player);

//     computer = getComputerChoice();
//     std::cout << "Computer's choice: ";
//     showChoice(computer);

//     chooseWinner(player, computer);

//     return 0;
// }


// char getUserChoice(){

//     char player;
//     std::cout << "Rock-Paper-Scissors Game!\n";

//     do{
//         std::cout << "Choose one of the following\n";
//         std::cout << "*************************\n";
//         std::cout << "'r' for rock\n";
//         std::cout << "'p' for paper\n";
//         std::cout << "'s' for scissors\n";
//         std::cin >> player;
//     }while(player != 'r' && player != 'p' && player != 's');

//     return player;
// }
// char getComputerChoice(){

//     srand(time(0));
//     int num = rand() % 3 +1;

//     switch(num){
//         case 1: return 'r'; // safely omit break when returning values
//         case 2: return 'p';
//         case 3: return 's';
//     }

//     return 0;

// }
// void showChoice(char choice){

//     switch(choice){
//         case 'r': std::cout << "Rock\n";
//             break;
//         case 'p': std::cout << "Paper\n";
//             break;
//         case 's': std::cout << "Scissors\n";
//             break;
//     }

// }
// void chooseWinner(char player, char computer){

//     switch(player){
//         case 'r':   if(computer == 'r'){
//                         std::cout << "It's a tie!\n";
//                     }
//                     else if(computer == 'p'){
//                         std::cout << "You lose!\n";
//                     }
//                     else{
//                         std::cout << "You win!\n";
//                     }
//                     break;
//         case 'p':   if(computer == 'r'){
//                         std::cout << "You win!\n";
//                     }
//                     else if(computer == 'p'){
//                         std::cout << "It's a tie!\n";
//                     }
//                     else{
//                         std::cout << "You lose!\n";
//                     }
//                     break;
//         case 's':   if(computer == 'r'){
//                         std::cout << "You lose!\n";
//                     }
//                     else if(computer == 'p'){
//                         std::cout << "You win!\n";
//                     }
//                     else{
//                         std::cout << "It's a tie!\n";
//                     }
//                     break;
//     }

// }





// 32. Arrays
// array = a data structure that can hold multiple values
//         values are accessed by an index number
//         "kind of like a variable that holds multiple values"
//         they can only contain the values of the same data type
//         static data structure -- first assign the size


// int main(){

// //    std::string cars[]= {"Corvette", "Mustang", "Camry"};
//     std::string cars[3];
//     cars[0] = "Camaro";
//     cars[1] = "Mustang";
//     cars[2] = "Camry";

//     std::cout << cars[0] << '\n';
//     std::cout << cars[1] << '\n';
//     std::cout << cars[2] << '\n';

//     return 0;
// }


// int main()
// {

//     double prices[] = {5.00, 7.50, 9.99, 15.00};

//     std::cout << prices[0] << '\n';
//     std::cout << prices[1] << '\n';
//     std::cout << prices[2] << '\n';
//     std::cout << prices[3] << '\n';

//     return 0;
// }





// 33. Sizeof() operator
// sizeof() = determines the size in bytes of a:
//            variable, data type, class, objects, etc.
//            to calculate the size of an array, dividing array by data type

// int main(){


//     std::string name = "Louis Liu is awesome"; // 32 bytes

//     double gpa = 2.5; // 8 bytes
//     char grade = 'F'; // 1 byte
//     bool student = true; // 1 byte
//     char grades[] = {'A', 'B', 'C', 'D', 'E', 'F'}; // 5 bytes

//     std::string students[] = {"Spongebob", "Patrick", "Squidward"};

//     std::cout << sizeof(students)/sizeof(str::string) << " elements\n"; // to calculate the size of an array

//     return 0;
// }





// 34. Iterate over an array
// for loop

// int main()
// {

//     std::string students[] = {"Spongebob", "Patrick", "Squidward"};

//     for(int i = 0; i < sizeof(students)/sizeof(std::string); i++){
//         std::cout << students[i] << '\n';
//     }

//     return 0;
// }





// 35. Foreach loop
// foreach loop = loop that eases the traversal over an 
//                iterable data set
//                less syntax, less flexible (change increments) compared to a for loop


// int main(){

//     // std::string students[] = {"Spongebob", "Patrick", "Squidward"}; 

//     int grades[] = {65, 72, 81, 93};

//     for(int grade : grades){
//         std::cout << grade << '\n';
//     }

//     return 0;
// }





// 36. Pass array to a function
// only the name but not the square brackets when passing the array into a function 


// double getTotal(double prices[], int size);

// int main(){

//     double prices[] = {49.99, 15.05, 75, 9.99};
//     int size = sizeof(prices)/sizeof(prices[0]);

// // only the name but not the square brackets when passing the array into a function
//     double total = getTotal(prices, size);

//     std::cout << "$" << total;

//     return 0;
// }

// double getTotal(double prices[], int size){
//     double total = 0;

// // the following for loop isn't working because the array decays to a pointer 
// // the function has no idea how big the array is anymore
// // solution: when we invoke the function, we can also pass the size

//     // for(int i = 0; i < sizeof(prices)/sizeof(prices[0]); i++){
//     //     total += prices[i];
//     // }

//     for (int i = 0; i < size; i++){
//         total += prices[i];
//     }
//     return total;
// }





// 37. Search an array for an element


// int searchArray(int array[], int size, int element);

// int main(){

//     int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     int size = sizeof(numbers)/sizeof(numbers[0]);
//     int index;
//     int myNum;

//     std::cout << "Enter element to search for: " << '\n';
//     // change to std::getline(std::cin, myFood); because string may contain spaces
//     std::cin >> myNum;

//     index = searchArray(numbers, size, myNum);

//     if(index != -1){
//         std::cout << myNum << " is at index " << index;
//     }
//     else{
//         std::cout << myNum << " is not in the array";
//     }

//     return 0;
// }

// // linear search
// int searchArray(int array[], int size, int element){

//     for(int i = 0; i < size; i++){
//         if(array[i] == element){
//             return i;
//         }
//     }
//     return -1; // something wasn't found
// }





// 38. Sort an array
// bubble sort
// there are more efficient methods


// void sort(int array[], int size);

// int main(){

//     int array[] = {10, 1, 9, 2, 8, 3, 7, 4, 6, 5};
//     int size = sizeof(array)/sizeof(array[0]);


//     sort(array, size);

//     for(int element : array){
//         std::cout << element << " ";
//     }


//     return 0;
// }

// void sort(int array[], int size)
// {
//     int temp;
//     // size - 1 because last element doesn't need to be compared
//     for(int i = 0; i < size - 1; i++){
//         for(int j = 0; j < size - 1; j++){
//             // descending order array[j] < array[j + 1]
//             if(array[j] > array[j + 1]){
//                 temp = array [j];
//                 array[j] = array[j + 1];
//                 array[j + 1] = temp;
//             }
//         }
//     }
// }





// 39. Fill function
// fill() = Fills a range of elements with a specified value
//          fill(being, end, value)


// int main(){


//     const int SIZE = 99;
//     // {"pizza", ... 10 times}
//     std::string foods[SIZE];

//     fill(foods, foods + (SIZE/3), "pizza");
//     fill(foods + (SIZE/3), foods + (SIZE/3)*2, "hamburger");
//     fill(foods + (SIZE/3)*2, foods + SIZE, "hotdog");

//     // for every food element in the array foods[]
//     for(std::string food : foods){
//         std::cout << food << '\n';
//     }

//     return 0;
// }





// 40. Fill an array with user input

// int main(){

//     // disadvantage: static array
//     // future: dynamic memory and vector
//     std::string foods[5];
//     int size = sizeof(foods)/sizeof(foods[0]);
//     std::string temp;


//     for(int i = 0; i < size; i++){
//         std::cout << "Enter a food you like or 'q' to quit #" << i + 1 << ": ";
//         std::getline(std::cin, temp);
//         if(temp == "q"){
//             break;
//         }
//         else{
//             foods[i] = temp;
//         }
//     }

//     std::cout << "You like the following food:\n";

//     // for(std::string food : foods){
//     //     std::cout << food << '\n';
//     // }
//     for(int i = 0; !foods[i].empty(); i++){
//         std::cout << foods[i] << '\n';
//     }

//     return 0;
// }







// 41. Multidimensional arrays
// 2d array = {array1, array2, array3}
// useful for representing grid and matrix of data
// two indices: first for the rows, second for the columns

// int main(){

//     std::string cars[][3] = {{"Mustang", "Escape", "F-150"}, 
//                             {"Corvette", "Equinox", "Silverado"},
//                             {"Challenger", "Durango", "Ram 1500"}};
    
//     // std::cout << cars[0][0] << " ";
//     // std::cout << cars[0][1] << " ";
//     // std::cout << cars[0][2] << "\n";

//     // std::cout << cars[1][0] << " ";
//     // std::cout << cars[1][1] << " ";
//     // std::cout << cars[1][2] << "\n";

//     // std::cout << cars[2][0] << " ";
//     // std::cout << cars[2][1] << " ";
//     // std::cout << cars[2][2] << "\n";

//     int rows = sizeof(cars)/sizeof(cars[0]);
//     int columns = sizeof(cars[0])/sizeof(cars[0][0]);

//     for(int i = 0; i < rows; i++){
//         // std::cout << cars[i] << '\n';
//         for(int j = 0; j < columns; j++){
//             std::cout << cars[i][j] << " ";
//         }
//         // create a line to separate each nested loop
//         std::cout << '\n';
//     }

//     return 0;
// }






// 42. QUIZ GAME


// int main()
// {

//     std::string questions[] = {"1. What year was C++ created?: ",
//                                "2. Who invented C++?: ",
//                                "3. What is the predecessor of C++?: ",
//                                "4. Is the Earth flat?"};

//     std::string options[][4] = {{"A. 1969", "B. 1975", "C.1985", "D.1989"},
//                                {"A. Guido van Rossum", "B. Bjarne Stroustrup", "C. John Carmack", "D. Mark Zuckerburg"},
//                                {"A. C", "B. C+", "C. C--", "D. B++"},
//                                {"A. yes", "B. no", "C. sometimes", "D. what's Earth?"}};

//     char answerKey[] = {'C', 'B', 'A', 'B'};

//     int size = sizeof(questions)/sizeof(questions[0]);
//     char guess;
//     int score;

//     for(int i = 0; i < size; i++){
//         std::cout << "****************************\n";
//         std::cout << questions[i] << '\n';
//         std::cout << "****************************\n";

//         for(int j = 0; j < sizeof(options[i])/sizeof(options[i][0]); j++){
//             std::cout << options[i][j] << '\n';
//         }
        
//         std::cin >> guess;
//         guess = toupper(guess);

//         if(guess == answerKey[i]){
//             std::cout << "CORRECT\n";
//             score++;
//         }
//         else{
//             std::cout << "WRONG!\n";
//             std::cout << "Answer: " << answerKey[i] << '\n';
//         }
//     }

//     std::cout << "****************************\n";
//     std::cout << "*           RESULTS           *\n";
//     std::cout << "****************************\n";
//     std::cout << "CORRECT GUESSES: " << score << '\n'; 
//     std::cout << "# of QUESTIONS: " << size << '\n';
//     // cast size as a double to hold the decimal portion
//     std::cout << "SCORE: " << (score/(double)size) * 100 << "%";

//     return 0;
// }






// 43. Memory addresses
// memory address = a location in memory where data is stored
// a memory address can be accessed with & (address-of operator)
// one of the reasons using datatypes: to know how much memory we need to allocate to fin certain values

// int main(){


//     std::string name = "Louis";
//     int age = 21;
//     bool student = true;

//     // hexidecimal address
//     std::cout << &name << '\n';
//     std::cout << &age << '\n';
//     std::cout << &student << '\n';

    
//     return 0;
// }






// 44. Pass by VALUE vs. pass by REFERENCE

// int main(){

//     std::string x = "Kool-Aid";
//     std::string y = "Water";
//     std::string temp;

//     temp = x;
//     x = y;
//     y = temp;

//     std::cout << "X: " << x << '\n';
//     std::cout << "Y: " << y << '\n';

//     return 0;
// }

// void swap(std::string &x, std::string &y);

// int main(){

//     std::string x = "Kool-Aid";
//     std::string y = "Water";

//     swap(x, y);

//     std::cout << "X: " << x << '\n';
//     std::cout << "Y: " << y << '\n';

//     return 0;
// }

// this won't work cuz normally when we pass a variable to a function,  we're passing by value
// when we invoke the function, we're creating copies of the original values
// we're switching two copies but not the original values
// void swap(std::string &x, std::string &y){
//     std::string temp;
//     temp = x;
//     x = y;
//     y = temp;
// }

// pass by REFERENCE
// pass by value creates copies of x and y 
// with the parameters when we use the address of operator
// we're passing the memory addresses to where the original x and y variables are located
// and then swapping the values

// use pass by reference as often as possible

// void swap(std::string &x, std::string &y){
//     std::string temp;
//     temp = x;
//     x = y;
//     y = temp;
// }






// 45. Const parameters
// const parameter = parameter that is modified with a const keyword
//                   parameter that is effectively read-only
//                   code is more secure (tell other programmers not to mess with my code lol)
//                   conveys intent useful for references and pointers

// pass by reference is a bigger deal with const parameter

// void printInfo(const std::string &name, const int &age);

// int main()
// {
//     std::string name = "Louis";
//     int age = 19;

//     //invoke the function in the main function

//     printInfo(name,age);

//     return 0;
// }

// void printInfo(const std::string &name, const int &age){
//     name = " ";
//     age = 0;
//     std::cout << name << '\n';
//     std::cout << age << '\n';
// }





// 46. Credit card validator program
// Google some test credit card numbers

// Luhn Algorithm
// --------------
// 1. Double every second digit from right to left
//    If doubled number is 2 digits, split them
// 2. Add all single digits from step 1
// 3. Add all odd numbered digits from right to left
// 4. Sum results from steps 2 & 3
// 5. If step 4 is divisible by 10, credit # is valid


// ex. 6011   0009   9013   9424
// 1  2  2    0 0    1  8  2   1  8  4
// 29
//      0 1    0 9    0 3    4 4
// 21
// 50 % 10 = 0 (which is valid)

// we can treat a string as an array of characters


// int getDigit(const int number);
// int sumOddDigits(const std::string cardNumber);
// int sumEvenDigits(const std::string cardNumber);

// int main(){

//     std::string cardNumber;
//     int result = 0;

//     std::cout << "Enter a credit card #: ";
//     std::cin >> cardNumber;

//     result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);

//     if(result % 10 == 0){
//         std::cout << cardNumber << " is valid";
//     }
//     else{
//         std::cout << cardNumber << " is not valid";
//     }

//     return 0;
// }


// int getDigit(const int number){
//     // 18    8
//     return number % 10 + (number / 10 % 10);
// }

// int sumOddDigits(const std::string cardNumber){

//     int sum = 0;

//     // - 2 cuz of the second-last digit
//     for(int i = cardNumber.size() - 1; i >= 0; i-=2){
//         sum += cardNumber[i] - '0';
//     }

//     return sum;
// }

// int sumEvenDigits(const std::string cardNumber){

//     int sum = 0;

//     // - 2 cuz of the second-last digit
//     for(int i = cardNumber.size() - 2; i >= 0; i-=2){
//         sum += getDigit((cardNumber[i] - '0') * 2);
//     }

//     return sum;
// }





// 47. Pointers
// pointer = a variable that stores a memory address of another variable
//           sometimes it's easier to work with an address
// imagine there are 5 pizzas, I don't have to walk to each one of my neighbors
// but just tell them to come to my house
//  & address-of operator
//  * dereference operator


// int main(){

//     std::string name = "Louis";
//     int age = 19;
//     std::string freePizzas[5] = {"pizza1", "pizza2", "pizza3", "pizza4", "pizza5"};


//     // create a pointer, use the same data type as the variable pointing to
//     std::string *pName = &name;
//     int *pAge = &age;
//     std::string *pFreePizzas = freePizzas;


//     std::cout << pName << '\n';
//     std::cout << *pName << '\n';
//     std::cout << *pAge << '\n';
//     // the array is already a memory address
//     std::cout << freePizzas << '\n';
//     // the pointer should produce the same result
//     std::cout << pFreePizzas << '\n';
//     // producing the first element in the array (dereference operator)
//     std::cout << *pFreePizzas << '\n';

//     return 0;
// }





// 48. Null pointer
// 不指向任何数据对象的指针
// Null value = a special value that means something has no value.
//              When a pointer is holding a null value,
//              that pointer is not pointing at anything (null pointer)

// nullptr = keyword represents a null pointer literal
// nullptrs are helpful when determining if an address
// was successfully assigned to a pointer


// int main()
// {

//     int *pointer = nullptr;
//     int x = 123;

//     // When using pointers, be careful that your code isn't 
//     // dereferencing nullptr or pointing to free memory
//     // this will cause undefined behaviour
//     pointer = &x;
//     // *pointer;
//     // check to see if a pointer is a nullptr
//     //              contains a valid address before dereferencing it

//     if(pointer == nullptr){
//         std::cout << "address was not assigned!\n";
//     }
//     else{
//         std::cout << "address was assigned\n";
//         std::cout << *pointer;
//     }
//     return 0;
// }





// 49. TIC TAC TOE Game

// a pointer to an array named spaces
// 1d array to keep track of all the markers
// like what spots are occupied


// void drawBoard(char *spaces);
// void playerMove(char *spaces, char player);
// void computerMove(char *spaces, char computer);
// bool checkWinner(char *spaces, char player, char computer);
// bool checkTie(char *spaces);

// int main(){

//     char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
//     char player = 'X';
//     char computer = 'O';
//     bool running = true;

//     // when passing an array into a function, it decays into a pointer
//     // no need *
//     drawBoard(spaces);

//     while(running){
//         playerMove(spaces, player);
//         drawBoard(spaces);
//         // checkWinner returns a boolean value, so we use if
//         if(checkWinner(spaces, player, computer)){
//             running = false;
//             break;
//         }
//         else if(checkTie(spaces)){
//             running = false;
//             break;
//         }

//         computerMove(spaces, computer);
//         drawBoard(spaces);
//         if(checkWinner(spaces, player, computer)){
//             running = false;
//             break;
//         }
//         else if(checkTie(spaces)){
//             running = false;
//             break;
//         }
//     }

//     std::cout << "Thanks for playing!\n";
//     return 0;
// }

// void drawBoard(char *spaces){
//     std::cout << '\n';
//     std::cout << "     |     |     " << '\n';
//     // having a player or computer right in the center
//     std::cout << "  " << spaces[0] << "  |  " << spaces[1] << "  |  " << spaces[2] << "  " << '\n';
//     std::cout << "_____|_____|_____" << '\n';
//     std::cout << "     |     |     " << '\n';
//     std::cout << "  " << spaces[3] << "  |  " << spaces[4] << "  |  " << spaces[5] << "  " << '\n';
//     std::cout << "_____|_____|_____" << '\n';
//     std::cout << "     |     |     " << '\n';
//     std::cout << "  " << spaces[6] << "  |  " << spaces[7] << "  |  " << spaces[8] << "  " << '\n';
//     std::cout << "     |     |     " << '\n';
//     std::cout << '\n';
// }

// // the following code produces three errors: two logical, one always true comparison
// // void playerMove(char *spaces, char player){
// //     int number;
// //     do{
// //         std::cout << "Enter a spot to place a marker (1-9): ";
// //         std::cin >> number;
// //         number--;
// //         if(spaces[number] == ' '){
// //             spaces[number] = player;
// //             break;
// //         }
// //     }while(!number > 0 || !number < 8);
// // }

// void playerMove(char *spaces, char player) {
//     int number;
//     do {
//         std::cout << "Enter a spot to place a marker (1-9): ";
//         std::cin >> number;
//         if (number >= 1 && number <= 9 && spaces[number - 1] == ' ') {
//              spaces[number - 1] = player;
//              break;
//         }
//     } while (number < 1 || number > 9);
// }

// void computerMove(char *spaces, char computer){
//     int number;
//     srand(time(0));

//     while(true){
//         number = rand() % 9;
//         if(spaces[number] == ' '){
//             spaces[number] = computer;
//             break;
//         }
//     }

// }

// bool checkWinner(char *spaces, char player, char computer){
//     // rows
//     if((spaces[0] != ' ') && (spaces[0] == spaces[1]) && (spaces[1] == spaces[2])){
//         spaces[0] == player ? std::cout << "YOU WIN!" : std:: cout << "YOU LOSE!\n";
//     }
//     else if((spaces[3] != ' ') && (spaces[3] == spaces[4]) && (spaces[4] == spaces[5])){
//         spaces[3] == player ? std::cout << "YOU WIN!" : std:: cout << "YOU LOSE!\n";
//     }
//     else if((spaces[6] != ' ') && (spaces[6] == spaces[7]) && (spaces[7] == spaces[8])){
//         spaces[6] == player ? std::cout << "YOU WIN!" : std:: cout << "YOU LOSE!\n";
//     }
//     // columns
//     else if((spaces[0] != ' ') && (spaces[0] == spaces[3]) && (spaces[3] == spaces[6])){
//         spaces[0] == player ? std::cout << "YOU WIN!" : std:: cout << "YOU LOSE!\n";
//     }
//     else if((spaces[1] != ' ') && (spaces[1] == spaces[4]) && (spaces[4] == spaces[7])){
//         spaces[1] == player ? std::cout << "YOU WIN!" : std:: cout << "YOU LOSE!\n";
//     }
//     else if((spaces[2] != ' ') && (spaces[2] == spaces[5]) && (spaces[5] == spaces[8])){
//         spaces[2] == player ? std::cout << "YOU WIN!" : std:: cout << "YOU LOSE!\n";
//     }
//     // diagonals
//     else if((spaces[0] != ' ') && (spaces[0] == spaces[4]) && (spaces[4] == spaces[8])){
//         spaces[0] == player ? std::cout << "YOU WIN!" : std:: cout << "YOU LOSE!\n";
//     }
//     else if((spaces[2] != ' ') && (spaces[2] == spaces[4]) && (spaces[4] == spaces[6])){
//         spaces[2] == player ? std::cout << "YOU WIN!\n" : std:: cout << "YOU LOSE!\n";
//     }

//     else{
//         return false;
//     }
//     // somebody won
//     return true;
// }

// bool checkTie(char *spaces){

//     for(int i = 0; i < 9; i++){
//         if(spaces[i] == ' '){
//             return false;
//         }
//     }

//     std::cout << "IT'S A TIE!\n";
//     return true;
// }





// 50. Dynamic memory
// dynamic memory = memory that is allocated after the program
//                  is already compiled & running.
//                  Use the 'new' operator to allocate
//                  memory in the heap rather than the stack

//                  Useful when we don't know how much memory
//                  we will need. Makes our programs more flexible,
//                  especially when accepting user input.
//                  no idea what users gonna type in

// int main(){

//     int *pNum = NULL;

//     pNum = new int;

//     *pNum = 21;

//     std::cout << "address: " << pNum << "\n";
//     std::cout << "value: " << *pNum << "\n";

//     // freeing up the memory at this address
//     delete pNum;

//     return 0;
// }


// int main(){

//     char *pGrades = NULL;
//     int size;

//     std::cout << "How many grades to enter in?: ";
//     std::cin >> size;

//     pGrades = new char[size];
    
//     for(int i = 0; i < size; i++){
//         std::cout << "Enter grade #" << i + 1 << ": ";
//         // either pGrades[i] or pGrades + i
//         std::cin >> pGrades[i];
//     }

//     for(int i = 0; i < size; i++){
//         std::cout << pGrades[i] << " ";
//     }

//     // no longer need the array
//     delete[] pGrades;

//     return 0;
// }






// 51. Recursion
    // recursion = a programming technique where a function
    //             invokes itself from within
    //             break a complex concept into a repeatable single step

    // (iterative vs. recursive)
    
    // advantages = less code and is cleaner
    //              useful for sorting and searching algorithms

    // disadvantages = uses more memory
    //                 slower

// // iterative
// void walk(int steps);

// int main(){

//     walk(100);

//     return 0;
// }

// void walk(int steps){
//     for(int i = 0; i < steps; i++){
//         std::cout << "You take a step!\n";
//     }
// }

// // recursive 
// // if statement is easier than a for loop
// void walk(int steps);

// int main(){

//     walk(100);

//     return 0;
// }

// void walk(int steps){
//     if(steps > 0){
//         std::cout << "You take a step!\n";
//         walk(steps - 1);
//     }
// }


// // iteratively factorial
// int factorial(int num);
// int main(){


//     std::cout << factorial(10);

//     return 0;
// }

// int factorial(int num){
//     int result = 1;
//     for (int i = 1; i <= num; i++){
//         result = result * i;
//     }

//     return result;
// }


// // recursively factorial
// int factorial(int num);
// int main(){


//     std::cout << factorial(10);

//     return 0;
// }

// int factorial(int num){
//     if(num > 1){
//         return num * factorial(num - 1);
//     }
//     else{
//         return 1;
//     }
// }






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






// 53. Structs
// struct = A structure that group related varaibles under one name
//          Struct can contain many different data types (string, int, double, bool, etc.)
//          variables in a struct are known as "members"
//          members can be accessed with . "Class Member Access Operator"
// similar to constructor in javascript

// struct student{
//     std::string name;
//     double gpa;
//     bool enrolled = true; // can set a default value to a member
// }; // end a struct with a semi-colon


// int main(){

//     student student1;
//     student1.name = "Spongebob";
//     student1.gpa = 3.2;

//     student student2;
//     student2.name = "Patrick";
//     student2.gpa = 2.1;

//     student student3;
//     student3.name = "Squidward";
//     student3.gpa = 1.5;

//     std::cout << student1.name << '\n';
//     std::cout << student1.gpa << '\n';
//     std::cout << student1.enrolled << '\n';

//     std::cout << student2.name << '\n';
//     std::cout << student2.gpa << '\n';
//     std::cout << student2.enrolled << '\n';

//     std::cout << student3.name << '\n';
//     std::cout << student3.gpa << '\n';
//     std::cout << student3.enrolled << '\n';

//     return 0;
// }




// 54. Pass structs as arguments
// a struct is kinda like a datatype
// pass by value but not reference (creating a copy)
// can be demonstrated by using &
// struct Car{
//     std::string model;
//     int year;
//     std::string color;
// };

// // void printCar(Car &car)
// void printCar(Car car);
// void paintCar(Car &car, std::string color);

// int main(){

//     Car car1;
//     Car car2;

//     car1.model = "Mustang";
//     car1.year = 2023;
//     car1.color = "red";

//     car2.model = "Corvette";
//     car2.year = 2024;
//     car2.color = "blue";

//     paintCar(car1, "silver");
//     paintCar(car2, "gold");

//     std::cout << &car1 << '\n';
//     printCar(car1);
//     printCar(car2);

//     return 0;
// }

// // void printCar(Car &car)
// void printCar(Car car){
//     std::cout << &car << '\n';
//     std::cout << car.model << '\n';
//     std::cout << car.year << '\n';
//     std::cout << car.color << '\n';
// }

// // making changes to the original instead of copies
// // pass by reference
// void paintCar(Car &car, std::string color){
//     car.color = color;
// }






// 55. Enums
// enumeration
// enums = a user-defined datatype that consists
//         of paired named-integer constants.
//         GREAT if you have a set of potential options

// enum Day {sunday = 0, monday = 1, tuesday = 2, wednesday = 3, thursday = 4, friday = 5, saturday = 6};
// // also inplicitly assign those integer values to each element
// enum Flavor {vanilla, chocolate, strawberry, mint};
// enum Color {red, orange, yellow, green, blue, purple}
// enum Planet {mercury = 4880, venus = 12104, earth = 12756,
//              mars = 6794, jupiter = 142984, saturn  = 108728,
//              uranus = 51118, neptune = 49532, pluto = 2320};

// int main(){

// // normally we can't use strings within switches
// // std::string today = "sunday";

//     Day today = sunday; // there's associated values
    

//     // we can also use associated values, but not as readable
//     switch(today){
//         case sunday : std::cout << "It is Sunday!\n";
//                         break;
//         case monday : std::cout << "It is Monday!\n";
//                         break;
//         case tuesday : std::cout << "It is Tuesday!\n";
//                         break;
//         case wednesday : std::cout << "It is Wednesday!\n";
//                         break;
//         case thursday : std::cout << "It is Thursday!\n";
//                         break;
//         case friday : std::cout << "It is Friday!\n";
//                         break;
//         case saturday : std::cout << "It is Saturday!\n";
//                         break;
//     }

//     return 0;
// }







// 56. Objected Oriented Programming
//  object = A collection of attributes and methods (functions that belong to a class)
//           They can have characteristics and could perform actions
//           Can be used to mimic real world items (ex. Phone, Book, Dog)
//           Created from a class which acts as a "blue-print"

// class Human{
//     public:
//         std::string name = "Rick"; // default attributes like cloning
//         std::string occupation = "scientist";
//         int age = 70;

//         void eat(){
//             std::cout << "This person is eating\n";
//         }
//         void drink(){
//             std::cout << "This person is drinking\n";
//         }
//         void sleep(){
//             std::cout << "This person is sleeping\n";
//         }
// };

// int main(){

//     Human human1; // human1 is an object
//     Human human2;

//     // kinda similar to struct but objects can perform actions
//     // human1.name = "Louis";
//     // human1.occupation = "Software Engineer";
//     // human1.age = 18;

//     // human2.name = "Morty";
//     // human2.occupation = "Student";
//     // human2.age = 15;

//     std::cout << human1.name << '\n';
//     std::cout << human1.occupation << '\n';
//     std::cout << human1.age << '\n';

//     human1.eat();
//     human1.drink();
//     human1.sleep();

//     return 0;
// }

// another example
// class Car{
//     public:
//         std::string make;
//         std::string model;
//         int year;
//         std::string color;

//         void accelerate(){
//             std::cout << "You step on the gas!\n";
//         }
//         void brake(){
//             std::cout << "You step on the brakes!\n";
//         }
// };

// int main(){

//     Car car1;
//     Car car2;

//     car1.make = "Ford";
//     car1.model = "Mustang";
//     car1.year = 2023;
//     car1.color = "pink";

//     std::cout << car1.make << '\n';
//     std::cout << car1.model << '\n';
//     std::cout << car1.year << '\n';
//     std::cout << car1.color << '\n';

//     car1.accelerate();
//     car1.brake();

//     return 0;
// }





// 57. Constructors
// constructor = special method that is automatically called when an object is instantiated
//               useful for assigning values to attributes as arguments

// class Student{
//     public: 
//         std::string name;
//         int age;
//         double gpa;
    
//     // constructor
//     Student(std::string name, int age, double gpa){
//         this->name = name;
//         this->age = age;
//         this->gpa = gpa;
//     }

//     // another way
//     // Student(std::string x, int y, double z){
//     //     name = x;
//     //     age = y;
//     //     gpa = z;
//     // }
// };


// int main(){

//     Student student1("Spongebob", 25, 3.2);
//     Student student2("Patrick", 40, 1.5);
//     Student student3("Sandy", 21, 4.0);


//     std::cout << student1.name << '\n';
//     std::cout << student1.age << '\n';
//     std::cout << student1.gpa << '\n';
//     std::cout << student2.name << '\n';
//     std::cout << student2.age << '\n';
//     std::cout << student2.gpa << '\n';
//     std::cout << student3.name << '\n';
//     std::cout << student3.age << '\n';
//     std::cout << student3.gpa << '\n';

//     return 0;
// }


// another example

// class Car{
//     public:
//         std::string make;
//         std::string model;
//         int year;
//         std::string color;

//         void accelerate(){
//             std::cout << "You step on the gas!\n";
//         }
//         void brake(){
//             std::cout << "You step on the brakes!\n";
//         }
    
//     Car(std::string make, std::string model, int year, std::string color){
//         this->make = make;
//         this->model = model;
//         this->year = year;
//         this->color = color;
//     }


// };

// int main(){

//     Car car1("Chevy", "Corvette", 2022, "blue");
//     Car car2("Ford", "Mustang", 2023, "red");

//     std::cout << car1.make << '\n';
//     std::cout << car1.model << '\n';
//     std::cout << car1.year << '\n';
//     std::cout << car1.color << '\n';

//     car1.accelerate();
//     car1.brake();

//     return 0;
// }






// 58. Constructors overloading
// overloaded constructors = multiple constructors w/ same name but different parameters
//                           allows for varying arguments when instantiating an object

// class Pizza{
//     public: 
//         std::string topping1;
//         std::string topping2;

//     // a pizza constructor with no toppings
//     Pizza(){

//     }
//     Pizza(std::string topping1){
//         this->topping1 = topping1;
//     }

//     Pizza(std::string topping1, std::string topping2){
//         this->topping1 = topping1;
//         this->topping2 = topping2;
//     }

// };

// int main(){

//     Pizza pizza1("pepperoni");
//     Pizza pizza2("mushrooms", "peppers");
//     Pizza pizza3;

//     std::cout << pizza2.topping1 << '\n';
//     std::cout << pizza2.topping2 << '\n';

//     return 0;
// }





// 59. Getters & setters
// Abstraction = hiding unnecessary data from outside a class
// getter = function that makes a private attribute READABLE
// setter = function that makes a private attribute WRITEABLE


// class Stove{
//     private:
//         int temperature = 0;

//     public:
//     Stove(int temperature){
//         setTemperature(temperature);
//     }

//     int getTemperature(){
//         return temperature;
//     }

//     void setTemperature(int temperature){
//         if(temperature < 0){
//             this->temperature = 0;
//         }
//         else if(temperature >= 10){
//             this->temperature = 10;
//         }
//         else{
//             this->temperature = temperature;
//         }
//     }
// };

// int main(){

//     // with the constructor
//     Stove stove(1000000);
    
//     // stove.temperature = 1000000;

//     // stove.setTemperature(1000000);

//     std::cout << "The temperature setting is: " << stove.getTemperature();

//     return 0;
// }





// 60. Inheritance
// inhertance = A class can receieve attributes and methods from another class
//              Children classes inherit from a Parent class
//              Helps to reuse similar code found within multiple classes
//              more convenient if we make changes in one place

// class Animal{
//     public:
//         bool alive = true;

//     void eat(){
//         std::cout << "This animal is eating\n";
//     }
// };


// class Dog : public Animal{
//     public:
    
//     void bark(){
//         std::cout << "The dog goes woof!\n";
//     }
// };

// class Cat : public Animal{
//     public:


//     void meow(){
//         std::cout << "The cat goes meow!\n";
//     }
// };

// int main(){

//     Dog dog;
//     Cat cat;

//     std::cout << dog.alive << '\n';
//     std::cout << cat.alive << '\n';

//     dog.eat();
//     dog.bark();
//     cat.meow();

//     return 0;
// }


// another example

// class Shape{
//     public: 
//         double area;
//         double volume;
// };

// class Cube : public Shape{
//     public:
//         double side;

//     Cube(double side){
//         this->side = side;
//         this->area = side * side * 6;
//         this->volume = side * side * side;
//     }
// };


// class Sphere : public Shape{
//     public:
//         double radius;
    
//     Sphere(double radius){
//         this->radius = radius;
//         this->area = 4 * 3.14159 * (radius * radius);
//         this->volume = (4/3.0) * 3.14159 * radius * radius * radius;
//     }

// };

// int main(){

//     Cube cube(10);
//     Sphere sphere(5);

//     std::cout << "Area: " << cube.area << "cm^2\n";
//     std::cout << "Volume: " << cube.volume << "cm^3\n";

//     std::cout << "Area: " << sphere.area << "cm^2\n";
//     std::cout << "Volume: " << sphere.volume << "cm^3\n";

//     return 0;
// }