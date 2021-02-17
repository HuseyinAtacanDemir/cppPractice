#include<iostream>
#include<cmath>
#include<climits>

//data types

using std::cout;
using std::cin;

int main(){


    /*
        integral:
            int, short long
        char:
            characters
        floating point:
            fractional
        bool:
            T F
        array:
            multiple pieces of data of a particular type
        struct: (custom, complex types)
            sky is the limit
        classes: (custom, complex types)
            sky is the limt
            blueprint of a structure

        5/2 would give 2 cause they ar both ints
        5/2.0 would give 2.5



        integral data types:
        unsigned signed:
        two's complement for negative numbers

    
    
    */
   
   unsigned char x = 'A';
   cout << (int) x << std::endl;
   //unsigned char would not work to print an actual char
   //it would not be interpreted as a character

    x = 128;
    cout << (int) x << std::endl;
    //overflow with signed

    return 0;

}