#include<iostream>
//variables outputting vars, string concat
using std::cout;

int main(){

    int slices; //declaration
    slices = 5; //initialization
    //int slices = 5; both of them together
    //slices = 5+1; value as expression, not as literal
    cout << "Hello World!\n";

    cout << "You have " << slices << " slices of pizza." << std::endl;

    printf("%i\n", slices);
    //printf comes from c, it works in cpp also

    
}