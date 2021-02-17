#include<iostream>
#include<float.h>

using std::cout;

int main(){
    long double a = 10.0 / 3; //3333333333333.333481
    //double a = 10.0 / 3; //3333333333333.333496
    //float a = 10.0 / 3; //3333333188608.000000
    a = a * 1000000000000;
    //float has 6 significant digits, after that it'll spew out nonsensical digits
    double b;
    long double c;

    cout << std::fixed << a << std::endl;
    cout << FLT_DIG << std::endl;
    cout << DBL_DIG << std::endl;
    cout << LDBL_DIG << std::endl;
    

    //because float has not that many significant digits, it is not
    //as reliable as fouble
    //or we could use an int for floats with known decimal precision
    //like money.. int money = 100; for one dollar, in cents.
}