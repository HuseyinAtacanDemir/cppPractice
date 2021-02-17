#include<iostream>
#include <string>
//string methods modifiers
int main(){
    std::string greeting = "WHAT THE FUCK!";

    greeting.replace(greeting.find("FUCK"), 4, "****");

    std::cout << greeting << std::endl;

    std::cout << greeting.substr(5,3) << std::endl;

    std::cout << greeting.find_first_of("AEIOU") << std::endl;
    //std::string.find_first_of() returns an unsigned long -1 if not found
    //that's why we get a huge number, because of overflow... npos
    
    if(greeting.find_first_of("é") == -1) std::cout << "NOT FOUND!" << std::endl;

    if(greeting == "Hello"){ 
        std::cout << "equals" << std::endl;
    }else{
        std::cout << "not equals" << std::endl;
    }
    if(greeting == "WHAT THE ****!") std::cout << "equals" << std::endl;

    //greeting.compare("string here") .compare is not that important for cpp
    
}