#include <iostream>
#include <cmath>



void solve_quadratic(){
    int b,a,c;
    float x1,x2;
    std::cout << "Enter the values as follows\nb=\na=\nc=\n";
    std::cin >> b >> a >>c;
    x1 = (-1* b  + sqrt( pow(b,2) - 4*a*c ))/ (2*a);
    x2 =  (-1* b  - sqrt( pow(b,2) - 4*a*c ))/ (2*a); 
    std::cout << "The solver has completed...\nX1: " <<x1<<"\nX2: " << x2;
    
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
    
    std::cout << "Which Polynomial Would you like to solve?\n1. Quadratic\n2. Cubic\n3. Quartic\n4. Quintic\n";

    std::cin >> answer;
    if(compare(answer, "Quadratic") == true){
        solve_quadratic();
    }
    else if(compare(answer, "Cubic") == true){

    }
    else if(compare(answer, "Quartic") == true){
        
    }
    else if(compare(answer, "Quintic") == true){
        
    }
    // std::cout << answer "\n";
    // std::cout << "Size of your string: " <<get_length(answer) <<"\n";

    


}