#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#define BUFFER_SIZE 1000
/*
A program designed to find a word and replace every occurence.
*/


void replaceAll(char *str, const char *oldWord, const char *newWord)
{
    char *pos, temp[BUFFER_SIZE];
    int index = 0;
    int owlen;

    owlen = strlen(oldWord);

    while ((pos = strstr(str, oldWord)) != NULL)
    {
        strcpy(temp, str);
        index = pos - str;
  
        str[index] = '\0';

        strcat(str, newWord);
    
        strcat(str, temp + index + owlen);
    }
}
void main(){
    char * readFile = "read6.txt";
    char * writeFile = "write6.txt";

    FILE *readStream = fopen(readFile, "r");
    FILE *writeStream = fopen(writeFile, "w");
    char * line = "";
    line = (char*)calloc(200,sizeof(char));

    char * findWord = "";
    char * replaceWord = "";
    findWord = (char*) calloc(50,sizeof(char));
    replaceWord = (char*) calloc(50,sizeof(char));
    printf("Enter the word you would like to replace: ");
    scanf("%s",findWord);
    printf("Enter the word you would like to replace '%s' with: ",findWord);
    scanf("%s",replaceWord);

    // printf("%s\n", findWord);
    // printf("%s\n",replaceWord);

    if(readStream){
        while( (fgets(line,sizeof(line), readStream)) != NULL ){
            replaceAll(line,findWord,replaceWord);

            fputs(line,writeStream);
        }
    }
    else{
        fprintf(writeStream, "THE FILE WAS CORRUPT OR COULD NOT BE OPEN\n");
    }
}