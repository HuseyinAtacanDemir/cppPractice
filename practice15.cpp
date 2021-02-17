#include <iostream>
#include <string>

//literal constants

int main(){
    //quoted constants
    //char
    //auto x = 5ULL;
    //c++11 feature, deducing type
    //gotta use g++ filename -std=c++11 to compile properly

    int number = 30;
    std::cout << number << std::endl;

    //hex, prefix with 0x
    number = 0x30;
    std::cout << number << std::endl;

    //octal, prefix with 0
    number = 030;
    std::cout << number << std::endl;

    //binary, prefix with 0b
    number = 0b100;
    std::cout << number << std::endl;

    //decimal
    number = 123;

    std::cout << std::hex << number << std::endl;

    std::cout << std::oct << number << std::endl;

    //std::cout << std::bin << number << std::endl; sadly there is no std::bin
    number = 200;
    std::cout << std::bitset<10>(number) << "\n";//you can kinda do it here, but you gotta know how many bits you'll need

}