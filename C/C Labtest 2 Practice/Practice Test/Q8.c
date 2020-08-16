#include <stdio.h>
#include <stdlib.h>

void main(){
    // char line[200];
    // char c;
    
    // char* readModeFile = "test.txt";
    // char* writeModeFile = "results2.txt";
    // FILE *reader = fopen(readModeFile, "r");
    // FILE *writer = fopen(writeModeFile,"w");

    // c = fgetc(reader);
    // while(c != EOF){
    //     if(c != '\n'){
    //         fputc(c,writer);
    //     }
    //     c = fgetc(reader);
    // }


    // fclose(reader);
    // fclose(writer);

    char* readMode = "test.txt";
    char* writeMode = "results1.txt";
    char c;
    FILE *reader = fopen(readMode,"r");
    FILE *writer = fopen(writeMode,"w");

    while(!feof(reader)){
        c = fgetc(reader);
        if(c != '\n' && c != EOF){
            fputc(c,writer);
        }
    }
    
}