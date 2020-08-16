#include <iostream>

using namespace std;

char * to_lowercase(char * string){
    char * upper_Case = (char *) malloc(sizeof(char) *50);
    int i = 0;
    for(int c = 0; string[c] != '\0'; c ++){
        if( string[c] >= 97 && string[c] <=122 ){
            upper_Case[i] = string[c] - 32;
            i++;
        }
        else if(string[c] >= 65 && string[c] <=90){
            upper_Case[i] = string[c];
            i++;
        }
    }
    return upper_Case;
}


int main(){
    cout << "Please enter the string:\n";
    char * lower_case = (char *) malloc(sizeof(char) *50);

    cin >> lower_case;

    cout << "The capitalized string is: " << to_lowercase(lower_case) << "\n";
}