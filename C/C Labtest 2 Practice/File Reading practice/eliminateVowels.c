#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isVowel(char c){
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}


void main(){
    char *fileName = "vowelReader.txt";
    char *writeFile = "FoundVowels.txt";
    char c;

    FILE *fileReader = fopen(fileName,"r");
    FILE *fileWriter = fopen(writeFile,"w");

    if(!fileReader){
        printf("The file does not exist or cannot be opened\n");
        return;
    }

    while((c = fgetc(fileReader)) != EOF){
        if(!isVowel(c)){
            fputc(c,fileWriter);
        }
    }
}