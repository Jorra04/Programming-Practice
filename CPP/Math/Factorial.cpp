#include <iostream>


int factorial(int num){
    int copy = num;
    for(int i = 1; i < num; i ++){
        copy *= i;
    }

    return copy;
}


int main(){
    int factorial_number;
    std::cout << "Enter a Number:\n";
    std::cin >> factorial_number;  
    std::cout << "The value of " << factorial_number << "! is: " <<factorial(factorial_number) << "\n"; 
    return 0;
}