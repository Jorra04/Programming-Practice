#include <stdio.h>

void main(){
    char input [30];
    fgets(input,sizeof(input), stdin);
    int i,count = 0;
    for(i = 0; input[i] != '\0'; i++){
        if(input[i] != ' '){
            count++;
        }
    }
    printf("%d",count -1);
}