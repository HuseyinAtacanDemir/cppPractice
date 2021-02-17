#include<iostream>
#include<cmath>
#include<climits>

//data types

using std::cout;
using std::cin;

int main(){

    int x = 5;//in cpp vars need to have a type
    //in js for example they don't need to
    //in ts they do

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
   
   short a;
   int b;
   long c;
   long long d;
   unsigned short aa;
   unsigned int bb;
   unsigned long cc;
   unsigned long long dd;

   cout << SHRT_MAX << std::endl;
   cout << INT_MAX << std::endl;
   cout << LONG_MAX << std::endl;
   cout << LLONG_MAX << std::endl;

   cout << USHRT_MAX << std::endl;
   cout << UINT_MAX << std::endl;
   cout << ULONG_MAX << std::endl;
   cout << ULLONG_MAX << std::endl;

    cout << SHRT_MIN << std::endl;
   cout << INT_MIN << std::endl;
   cout << LONG_MIN << std::endl;
   cout << LLONG_MIN << std::endl;


    return 0;

}