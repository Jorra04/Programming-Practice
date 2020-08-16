#include <iostream>
#include <cmath>



void solve_quadratic(){
    int b,a,c;
    float x1,x2;
    std::cout << "Enter the values as follows\nb=\na=\nc=\n";
    std::cin >> b >> a >>c;
    x1 = (-1* b  + sqrt( pow(b,2) - 4*a*c ))/ (2*a);
    x2 =  (-1* b  - sqrt( pow(b,2) - 4*a*c ))/ (2*a); 
    std::cout << "The solver has completed...\nX1: " <<x1<<"\nX2: " << x2 <<"\n";
    
}

void factorial(){
    std::cout << "Enter the coefficient:\n";
    int num;
    std::cin >> num;
    int copy = num;
    for(int i = 1; i < num; i ++){
        copy *= i;
    }

    std::cout << "The solver has completed...\n" <<num<<"! = " << copy<<"\n";
}


void fib_seq(){
    int element;
    std::cout << "Enter the nth digit: \n";
    std::cin >> element;

    if(element == 1) std::cout << "The " <<element <<"th number in the fibonacci sequence is: 0\n";

    if(element == 2) std::cout << "The " <<element <<"th number in the fibonacci sequence is: 0 ,1\n";

    int first_last = 0;
    int second_last = 1;
    int next;
    std::cout << "The sequence is:\n0, ";
    for(int i = 2; i < element; i ++){
        next = first_last + second_last;
        second_last = first_last;
        first_last = next;
        std::cout << next << ", ";
    }

    std::cout << first_last+second_last<<"\n";




}


int get_length(char* string){
    int i;
    for(i = 0; string[i] != '\0'; i++){}
    return i;
}


bool compare(char * string, char* string2){
    int length = get_length(string);
    if( length != get_length(string2)){
        return false;
    }
    for(int i = 0; i < length; i ++ ){
        if(string[i] != string2[i]) return false;
    }
    return true;
}


int main(){
    char * answer = (char*)malloc(sizeof(char) *60);
    
    std::cout << "Which Polynomial Would you like to solve?\n1. Quadratic\n2. Factorial\n3. Fibonacci\n";

    std::cin >> answer;
    if(compare(answer, "Quadratic") == true || compare(answer, "1") == true){
        solve_quadratic();
    }
    else if(compare(answer, "Factorial") == true || compare(answer, "2") == true){
        factorial();
    }
    else if(compare(answer, "Fibonacci") == true || compare(answer, "3") == true){
        fib_seq();
    }

    


}