#include<iostream>
#include<cmath>

//void funcs

using std::cout;
using std::cin;

double power(double base, int exponent){
    double result = 1;
    for(int i = 0; i < exponent; i++){
        result *= base;
    }
    return result;
}

void print_pow(double base, int exponent){

    double result = power(base, exponent); 
    cout << base << " to the power of " << exponent << " is " << result << std::endl;

}

int main(){

    double base;
    int exponent;

    cout << "what is the base? ";
    cin >> base;
    cout << "what is the exponent? ";
    cin >> exponent;

    print_pow(base,exponent);


}