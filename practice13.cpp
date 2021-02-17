#include<iostream>
#include <string>
//string methods modifiers
int main(){
    std::string greeting = "Hello";
    greeting += " there";
    std::cout << greeting << std::endl;
    greeting.append("!");
    std::cout << greeting << std::endl;
    greeting.insert(3,"   ");
    std::cout << greeting << std::endl;
    greeting.erase(3,3);
    std::cout << greeting << std::endl;
    greeting.pop_back();
    std::cout << greeting << std::endl;
    greeting.replace(0,4,"Heaven");
    std::cout << greeting << std::endl;

    std::cout << greeting.size() << std::endl;
    std::cout << greeting.size() << std::endl;
    std::cout << greeting.length() << std::endl;

}