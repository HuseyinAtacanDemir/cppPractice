#include <iostream>
//#include<cmath>
//conventions, style...
//functions, declaring, defining, calling, using...
using std::cout;
using std::cin;

//func can be declared (prototype), and defined here
/*int multiply(int x, int y){
    return x*y;
}
*/

//you can have the declarations in a header file
int multiply(int , int);

double power(double, double);

int main()
{
    //CONVENTIONS
    //indent when in curly braces
    //cpp is case sensitive
    //in general, don't have vars with same name with different case

    //only put comments that will explain well what you have written
    //if you update a func and forget to update the comment
    //it's gonna be even harder to understand code later
    //https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines
    //use underscore for var names with multiple words

    //FUNCTIONS (function name = function identifier)

    //func(arg,arg)

    int product = multiply(10,2);//

    cout << "product: " << product << std::endl;
    cout << power(5,2) << std::endl;

    int base, exponent;

    
    cout << "what is the base? ";
    cin >> base;
    cout << "what is the exponent? ";
    cin >> exponent;

    double result = power(base, exponent); //<----- these are arguments

    cout << base << " to the power of " << exponent << " is " << result << std::endl;
    return 0;
}

//func cannot be declared here, if it was declared before main however,
//it can be defined here
//so, all funcs need to be at least declared before main

int multiply(int x, int y){
    return x * y;
}

//my custom power func, declared above, defined here
//if I didn't have the declaration above, this wouldn't work
double power(double base, double exponent){
    //             ^^^^^^^^^^^^^ these are parameters
    //args and params don't need to be called the same
    double result = 1;
    for(int i = 0; i < exponent; i++){
        result *= base;
    }

    return result;
}