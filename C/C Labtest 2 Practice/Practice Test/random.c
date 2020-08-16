#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

void main(){
    char *readFile = "test.txt";
    FILE *readStream = fopen(readFile, "r");

    char *line;
    line = (char*) calloc(150,sizeof(char));
    while( (fgets(line,150,readStream)) != NULL ){
        int size = 0;
        if(line[strlen(line) -1 ] == '\n' ){
            size = strlen(line) - 1;
            printf("%d\n",size);
        }
        else{
            size = strlen(line);
            printf("%d\n",size);
        }
    }
}