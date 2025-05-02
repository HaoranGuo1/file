#include <iostream>

// using std::cout

void populate_array(bool my_array[], int size){
    for (int i = 0; i < size; i ++){
        my_array[i] = true;
    }
}

int sum(int a, int b){
    return a + b;
}

double prompt_for_number() {
    double number;
    do {
        std::cout << "Enter a number between 1 and 10: ";
        std::cin >> number;
    } while(number < 1 || number > 10);

    return number;

    std::cout << "Hi" << std::endl; // Dead code
}

// A "scope" is looely a pair of curly braces
// this x is "scoped" to the change_me function
void change_me(int x){
    x = 5;
}

// main is the "entrypoint" of a  c++ program
int main(){
    // this x is "scope" to the main function
    int x = 12;
    change_me(x);
    std::cout << x << std::endl;  // print 12 

    // this is where the program starts 
    // cout stands for "console output"

    // << is an operator. the "stream insertion operator"
    std::cout << "Hello word!" << std::endl;
    
    // Expression and operators
    // +
    // -
    // * (multiplication)
    // / (division)
    //  % (modulo, remainder after division)

    std::cout << (1 + 1) << std::endl; // 2

    std::cout << (5 / 2) << std::endl; // 2 

    // Truncation means "rounding down"
    std::cout << (99 / 100) << std::endl; // print 0
    std::cout << (99.0 / 100) << std::endl; // print 0.99

    // create a variable
    // variable declaration: 
    // <type> <name>;
    int my_variable; // can't start with a digit. can contain #s, letters, and _'s.

    // In c++, a variable's type is fixed;

    // some primitive types: 
    // int: integer, whole number
    // double: double-precision floating point number
    // float: floating point number
    // bool: boolean(ture/false )
    // char: character

    // Assignment operator
    my_variable = 3; // this is legal

    std::cout << my_variable << std::endl; // what does this print? 3

    double pi = 3.1415926;

    float gravity;

    // undefined behavior
    std::cout << gravity << std::endl; // Prints some undefined value

    gravity = 9.81;

    std::cout << gravity << std::endl; // Prints 9.81

    // std::cin
    int favorite_number;
    std::cout << "Enter your favorite number: ";
    // >> is the stream extraction operator
    std::cin >> favorite_number;

    std::cout << "You said that your facorite numebr is " << favorite_number << std::endl; 

    // relational operator are: 
    // == (equal to)
    // < (less than)
    // > 
    // <=
    // != (not equal to)

    // logical operators:
    // && (logical AND)
    // || (logical OR)
    // ! (logical NOT)

    if (favorite_number >= 5 && favorite_number <= 10){

    }
    // if statements
    if (favorite_number < 5){
        std::cout << "Your favoribe number is less than 5!" << std::endl;
    } else if (favorite_number > 10) {
        std::cout << "Your favoribe number is greater than 10!" << std::endl;
    } else {
        std::cout << "Your favoribe number is within [5,10]" << std::endl;
    }


    // white loops
    // do-white loops
    // for loops

    int i = 0;
    while (i < 10){
        std::cout << i << std::endl;
        i = i + 1;
        // ++i;
        // i++;
    }
    // in the end, i is 10

/*
    do {   
        int integer;
        std::cout << "Please enter a number between 0 to 10" << std::endl; 

            // some body of code
    } while (some condition);
*/
    // ++i
    // equivalent to: i = i + 1;
    for (int i = 0; i < 5; i++){
        std::cout << "Hello, word!" << std::endl;
    }

    // fu1nction
    double number = prompt_for_number();
    std::cout << number << std::endl;\

    std::cout << sum(5,17) << std::endl;

    // int a = 5;
    // int b = 17;
    // std::cout << sum(a,b) << std::endl;


    // TODO Arrays
    // an array is a homogeneous fixed-size sequence of values 
    // the size of an automatic array must be a compile-time constant
    int n = 10;
    bool array_of_booleans[n];
    
    array_of_booleans[11] = true; 

    // TOD Arrays in functions
    populate_array(array_of_booleans, 12);

}