/*
problem statement: 
multiples of three, write fizz
multiples of five: write buzz
multiples of both three and five write fizbuzz

for(int i = 1; i <= 100; i++){
        
        if(!(i % 3 == 0 || i % 5 == 0)){ 
            std::cout << i << std::endl; 
            continue;    
        }

        if(i % 3 == 0) std::cout << "Fizz";
        
        if(i % 5 == 0) std::cout << "Buzz";
        
        std::cout << std::endl;
    }

*/
#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>

void game_menu();
void play_game();
void print_arr(int [], int);

int main()
{
    //default is 0 when all elements are not initialized in an arr
    int guess_arr[10] = {12,56,231,126,163};
    
    //we might wanna use another int to keep trackof how any elements we have inserted into the array that we allocated space for
    int num_elem = 5;

    //there is no arr.size in cpp
    //sizeof wont work inside a function call?! said my instructor
    int size = sizeof(guess_arr) / sizeof(guess_arr[0]);
    
    std::cout << size << std::endl;

    //printing arr inside main
    for(int i = 0; i < size; i++){
        std::cout << guess_arr[i] << std::endl;
    }
    //calling another func to do it.
    //since guess_arr actually is a pointer, we gotta give the size
    //as an arg to print_arr, so it can use that param to go through
    //the individual elements in mem

    print_arr(guess_arr, size);

    const int SIZE = 100;
    int arr[SIZE];
    int i = 0;
    std::cout << "Enter arr elements, type q to exit." << std::endl;
    while(std::cin >> arr[i]) i++; //break loop if entered an invalid char
    //the operation cin has a return val, and it only returns true if it saved the data properly
    std::cin.clear();//but the bad data is still in the input stream
    //so we gotta manually clear the input stream before calling another cin
    
    print_arr(arr, SIZE);

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
    
    int random = rand() % 251;
    int count = 0;

    std::cout << "Guess a number:\n";
    while(true){
        count++;
        int guess;
        std::cin >> guess;
        if(guess == random){
            std::cout << "You won in " << count << " tries!\n";
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