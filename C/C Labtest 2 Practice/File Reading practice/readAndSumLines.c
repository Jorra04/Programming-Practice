#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

void main(){
    char *readFile = "readAndSum.txt";
    FILE *readStream = fopen(readFile,"r");

    int count = 0;
    char c;
    while((c = fgetc(readStream)) != EOF){
        
        if(c != '\n'){
            count += c;
        }
        else{
            printf("The count of that line is: %d\n",count);
            count = 0;
        }
        printf("%c->%d\n",c, c);
    } 
    printf("The count of that line is: %d\n",count);
}