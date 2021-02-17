#include <iostream>

//operator precedence and associativity
int main(){
    int x = 5 + 5; // division operator with two ints would not include decimals

    //% modulus divide and get the remainder
    //two operators of the same precedence type goes from left to right
    
    int y;
    int z;
    y = 10;
    z = y = 100; //first x = 100 then y = x, since assign has right to left precedence, unlike other operators
    std::cout << y << "\t" << z << std::endl;
    y = 50;
    //z = y, then y = 110
    (z = y) = 110;
     std::cout << y << "\t" << z << std::endl;

}