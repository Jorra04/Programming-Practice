#include <stdio.h>
#include <string.h>
void main(){
    char input[20];
    fgets(input, sizeof(input), stdin);

    int  i,j=0;
    while(j < strlen(input)){
        for(i = 0; i < strlen(input); i ++){
            if(input[j] == input[i] && i != j){
                input[i] = 'a';
            }
        }
        j++;
    }
    for(i =0; i < strlen(input); i ++ ){
        if(input[i] != 'a'){
            printf("%c", input[i]);
        }
    }
}