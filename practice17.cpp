#include <iostream>
#include <string>
/* 
control flow
    branching
        if
        switch
    looping
        while
        do-while
        for
*/

int main()
{

    std::string name_answer = "John";
    int age_answer = 22;

    std::string name_guess;
    std::cout << "Guess my name\n";
    std::cin >> name_guess;

    int age_guess;
    std::cout << "Guess my age\n";
    std::cin >> age_guess;

    if(name_guess == name_answer || age_guess == age_answer){
        std::cout << "you got it\n";
    }
    
    int age;
    std::cout << "What is your age?\n";
    std::cin >> age;
    //only integral types
    switch(age){
        case 13:
            std::cout << "You are 13\n";
            break;
        case 14:
            std::cout << "You are 14\n";
            break;
        default:
            std::cout << "You can be any age, I have no idea\n";
            break;
    }

    enum class Season{summer, spring, fall, winter};

    Season now = Season::winter;

    switch(now){
        case Season::summer:
            break;
        case Season::spring:
            break;
        case Season::winter:
            std::cout <<"wear a jacket!\n";
            break;
        case Season::fall:
            break;
    }


    return 0;
}