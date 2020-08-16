#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isUpperCase(char c ){
    if(c >= 65 && c <= 90){
        return true;
    }
    return false;
}

void main(){
    char *readFileName = "readingFile2.txt";
    char *writeFileName = "writingFile2.txt";
    char c;
    FILE *reader = fopen(readFileName, "r");
    FILE *writer = fopen(writeFileName, "w");

    if(!reader){
        printf("The file does not exist or cannot be opened\n");
        return;
    }

    while((c = fgetc(reader)) != EOF){
        if(isUpperCase(c)){
            c+=32;
        }
        fputc(c,writer);
    }
}