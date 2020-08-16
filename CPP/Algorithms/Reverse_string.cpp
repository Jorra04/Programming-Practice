#include <iostream>

using namespace std;

int get_length(char * string){
    int i;
    for(i = 0; string[i] != '\0'; i ++){}
    return i;
}


char * reverse_string(char * string){
    char * string2 = (char *) malloc(sizeof(char) * 50);
    int j =0;
    for(int i = get_length(string) -1; i >= 0; i -- ){
        string2[j]+= string[i];
        j++;
    }

    return string2;
}
int main(){
    cout << "Please enter the string you wish to reverse.\n";
    char * string = (char *) malloc(sizeof(char) * 50); //allocate 50 bytes
    cin >> string;
    cout << "The reversed string is:\n" <<reverse_string(string) << "\n";

    return 0;
}