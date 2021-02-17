#include<iostream>
#include<cmath>

int main (){
    
    std::cout << sqrt(25) << std::endl;
    std::cout << sqrt(-25) << std::endl;
    std::cout << pow(25,100000) << std::endl;
    std::cout << pow(-25,100001) << std::endl;
    std::cout << remainder(10, 3.25) << std::endl;
    std::cout << 10 % 3 << std::endl;
    std::cout << fmax(10,100) << std::endl;
    std::cout << fmin(25, 13) << std::endl;
    std::cout << ceil(25.12) << std::endl;
    std::cout << trunc(-1.5) << std::endl;//just crop off decimals
    std::cout << floor(-1.25) << std::endl;//round to closest smaller val
    std::cout << ceil(-1.25) << std::endl;//round to closest bigger val
    std::cout << round(-1.49) << std::endl;//whatever is closes, ceils after .5
    std::cout << round(-1.5) << std::endl;//whatever is closes, rounds away from 0 after including .5

    

    return 0;

}