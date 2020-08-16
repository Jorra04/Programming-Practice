#include <stdio.h>
#include <stdlib.h>
/*
This program is designed to read the contents of a file, and print out 
*/
int len(char * str){
    int i = 0;
    while(str[i] != '\0'){
        i++;
    }
    return i;
}

void main(){
    char c;
    char line[150];
    char *readFile = "test.txt";
    char*writeFile = "results.txt";
    FILE *reader = fopen(readFile,"r");
    FILE *writer = fopen(writeFile,"w");
    // int count = 0;
    while(!feof(reader)){
        // count++;
        fgets(line,150,reader);
        printf("length of line is: %d\n", len(line));
        if(len(line) <= 25){
            fputs(line,writer);
        }
        
    }

    // printf("#of Lines: %d\n",count);
    fclose(reader);
    fclose(writer);
}