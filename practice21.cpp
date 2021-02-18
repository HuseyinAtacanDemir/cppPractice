#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

//random num guessing game using only arrays

void game_menu();
void play_game();
void print_arr(int [], int);

int main()
{
    srand(time(NULL));
    game_menu();
}

void game_menu(){
    int choice;
    do
    {
        std::cout << "Random Number Guessing Game" << std::endl;
        std::cout << "(0) Quit" << std::endl << "(1) Play" << std::endl;
        std::cin >> choice;

        switch(choice)
        {
            case 0:
                std::cout << "Bye\n";
                break;
            case 1:
                std::cout << "Let's play\n";
                play_game();
                break;
        }

    }while(choice != 0);
}

void play_game(){
    
    int guesses[251];
    int count = 0;

    int random = rand() % 251;

    std::cout << "Guess a number between 1 and 250:\n";
    while(true){
        
        int guess;
        std::cin >> guess;

        //http://www.cplusplus.com/reference/algorithm/find/
        int *guess_found = std::find(std::begin(guesses), std::end(guesses), guess);//https://stackoverflow.com/questions/19215027/check-if-element-found-in-array-c
        
        //if the element entered is not already in the array, add it
        if(guess_found == std::end(guesses)){
            guesses[count] = guess;
            count++;
        }else{
            //if user gives duplicate value, output to user that they already used the value, with the turn at which they used it
            //use the distance method to find at which index the value is, and subtract it from the current count in order to find how many 
            //turns passed since the value was given before by the user
            std::cout << "You already tried " << guess << " " 
            << count - std::distance(guesses, guess_found) 
            << " turns ago!" << std::endl;
        }

        if(guess == random){
            std::cout << "You won in " << count << " tries: \n";
            print_arr(guesses, count);
            break;

        }else if (guess < random){
            std::cout << "Too low\n";
        }else{
            std::cout << "Too high\n";
        }
    }
}

void print_arr(int array[], int size){
    for(int i = 0; i < size; i++) std::cout << array[i] << std::endl;
}