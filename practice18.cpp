#include <string>
#include <iostream>

int main(){
    /*
    int factorial = 5;
    int result = factorial;
    
    for(int i = factorial -1; i > 0; i--){
        result *= i;
    }
    

    int i = factorial - 1;
    while(i > 0){
        result *= i;
        i--;
    }

    std::cout << "factorial of " << factorial << " is " << result << std::endl;
    */
    std::string password = "hello";
    std::string guess;

    //do while
    do{
        
        std::cout << "Guess: ";
        std::cin >> guess;
        if(password == guess) break;
        
    }while(true);

    std::cout << "Pass: " << guess << " \n";

    return 0;
}