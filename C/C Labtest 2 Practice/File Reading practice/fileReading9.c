#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>


bool stringsEqual(char * str1, char *str2){
    if(strlen(str1) != strlen(str2)){
        return false;
    }
    int i =0;
    for(i = 0; i < strlen(str1); i++){
        if(str1[i] != str2[i]){
            return false;
        }
    }
    return true;
}



void contains(char *str1, char *str2){
    char * pinch;
    char * cpy;
    cpy = (char*)malloc(1000*sizeof(char));
    strcpy(cpy,str1);
    pinch = (char*) calloc(20,sizeof(char));

    pinch = strtok(cpy," ,.-");
    while(pinch != NULL){
        
        if(stringsEqual(pinch,str2)){
            pinch = "adadasd";
        }
        printf("%s\n",pinch);
        pinch = strtok(NULL," ,-");
    }
}



void main(int argc, char *argv[]){
    if(argc != 2){
        printf("Incorrect number of arguments.\n");
        exit(1);
    }

    char *readFile = "read9.txt";
    char *writeFile = "write9.txt"; 
    FILE *readStream = fopen(readFile,"r");
    FILE *writeStream = fopen(writeFile,"w");
    char *line;
    line = (char*)calloc(150,sizeof(char));
    if(readStream){
        while( (fgets(line, 150,readStream)) != NULL ){
            contains(line,argv[1]);
            printf("%s\n",line);
        }
    }
    else{
        printf("Corrupt or non-existent file.\n");
        exit(1);
    }
    
}