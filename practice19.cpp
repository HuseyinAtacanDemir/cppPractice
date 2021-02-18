#include <string>
#include <iostream>
//conditional (ternary) operator, the only operator that takes in three operands
int main(){

    int answer = 11;
    std::cout << "Guess the number: ";
    int guess;
    std::cin >> guess;
    int points = (guess == answer ? 10 : 0);
    /*
    if(guess == answer){
        points = 10;
    }
    */
    std::cout << points << std::endl;

}