#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*
A C program to count the number of words in a textfile.
*/

void main(){
    char *readFile = "read4.txt";
    char *writeFile = "write4.txt";
    char c;
    FILE *reader = fopen(readFile,"r");
    FILE *writer = fopen(writeFile,"w");
    int words = 0;
    int spaces = 0;
    int characterCount = 0;
    char *line = "";
    line = (char*) calloc(50,sizeof(char));
    while((c = fgetc(reader))!=EOF){
        // printf("character: %c\n",c);
        if(c == ' '){
            spaces ++;
        }
        else if(c != '\t' && c != '\n' && c != '\0'){
            characterCount++;
        }
    }
    rewind(reader); //reloads the filestream
    while( (fscanf(reader,"%s",line)) == 1 ){
        words++;
    }

    
    printf("Words: %d\nSpaces: %d\nCharacters: %d\n",words,spaces,characterCount);
    // fputs("Words \t Spaces \t Characters \n",writer);
    // fprintf(writer,"===================================\n");
    // fprintf(writer, "%d \t %d \t\t %d \n",words,spaces,characterCount);
    

    fclose(reader);
    fclose(writer);
}