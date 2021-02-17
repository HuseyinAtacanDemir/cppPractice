#include<iostream>
#include <string>
int main (){
    
    std::string greeting = "hello";
    std::string concatenate = " world";

    std::string concatTest = greeting + concatenate + " have a nice day";

    std::cout << greeting;
    std::cout << greeting[0] << std::endl;
    std::cout << greeting[1] << std::endl;

    std::cout << greeting + concatenate << std::endl;

    std::cout << concatTest << std::endl;

    concatTest += "!";


    std::cout << concatTest << std::endl;

    std::cout << concatTest.length() << std::endl;
    //when a function is a member, it is called a method

    //so length is a method of string class

    char name[] = "Caleb"; //C a l e b \0 we cannot change size

    //c strings are more complicated
    std::cout << greeting + " enter a string" << std::endl;
    std::cin >> greeting;
    std::cout << "The string you entered: "<< greeting << std::endl;

    //if you enter two words cin would fail because it looks for an empty space
    //and stops reading

    //for getting strings:
    std::cout << " enter another string" << std::endl;
    getline(std::cin, greeting);
    std::cout << greeting << std::endl;

    //if you enter multiple words to a reader with cin without the get line
    //the other parameters will wait in the console input buffer
    //so if you call cin again that input from before will be read
    


}