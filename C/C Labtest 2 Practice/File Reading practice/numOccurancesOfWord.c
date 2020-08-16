#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
bool stringsEqual(char* str1, char * str2){
    if(strlen(str1)!= strlen(str2)){
        return false;
    }
    int i = 0;
    for(i = 0; i < strlen(str1); i ++){
        if(str1[i] != str2[i]){
            return false;
        }
    }
    return true;
}

void main(){
    char * readFileName = "read5.txt";
    FILE *reader = fopen(readFileName,"r");
    char * word;
    word = (char*) calloc(50,sizeof(char)); //word can be max 50 letters.
    printf("Please enter the word you are looking for: ");
    scanf("%s",word);
    char *line = "";
    line = (char*) calloc(150,sizeof(char));
    int count = 0;
    char c ;
    if(word){
        if(reader){
            while(fscanf(reader, "%s", line) == 1){
                // fscanf(reader,"%s",line);
                // printf("%s ----> %s\n",line,word);
                if(stringsEqual(line,word)){
                    count++;
                }  
                // strcpy(line,""); //Reset the value assigned to line
            }
            printf("Number of matches: %d\n",count);
        }
        
        else{
            printf("File cannot be located or does not exist\n");
        }
    }
    else{
        printf("Your word cannot be processed\n");
    }
}