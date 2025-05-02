#include <iostream>

// 4/11 lecture

// this is the global scope

// int x; // this is a global variable. this is bad idea

/*
void change_me(int* p){
    *p = 10; 
}
*/

void change_me(int& r){
    r = 10;
}
 
int main(){
    int x = 20;

    // pointers: pointer is a variable that stores the momory address of another variable

    // memory address: a number that represents the location of a byte of memory

    // & before and existing variable is the "address-of" operator 
    std::cout << &x << std::endl; // prints the mrmory address of x

    // y "point to x"
    int* y = &x;

    // y "points to" x

    // * before the name fo an EXISTING variable, this is called
    // "indirection operator". "dereference operator"

    std::cout << *y << std::endl; // print 20 

    change_me(x);
    std::cout << x << std::endl; // print 10

    // A reference is basically just a pointer with slightly different syntax
    // & in the type of a declaration of a new variable, it just means "this variable is a reference"
    // 1. reference must be initialized as they're declared
    // 2. the address-of operator on the right side of the = isimplied when initializing the reference
    int& r = x;
    // 3. after a reference has been declared ( and initialized), any usage of the reference automatically dereference the reference
    std::cout << r << std::endl; // this print x, which is 10 
    std::cout << &r << std::endl; // this print the memory address of x

    // another viewpoint: reference are "nickname" for other variables

    r = 15; // set x = 15
    std::cout << x << std::endl; // print x = 15
    std::cout << r << std::endl; // print r = 15

    int z = -1;
    *y = -10; // this changes x to -10
    y = &z; // now, y points to z
    *y = -10; // this changes z to -10

    // references can never be changed
    r = z; // this sets x = z 

    // pointers can point to "nothing"
    y = nullptr;

    // pointer can point to "nothing"
    if (y != nullptr) {
        std::cout << *y << std::endl;
    }

    // dereference a null pointer. segementation 
}