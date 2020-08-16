#include <stdio.h>
#include <stdlib.h>

/*
This program is designed to take a textfile and strip the spaces.
It replaces the space with a newline.
*/

void main(){
    char * readFile = "read3.txt";
    char * writeFile = "write3.txt";

    FILE *reader = fopen(readFile,"r");
    FILE *writer = fopen(writeFile,"w");

    char * word;
    word = (char*) calloc(15,sizeof(char)); //max words 15 letters

    char c;
    while((c = fgetc(reader))!= EOF){
        if(c != ' '){
            fputc(c,writer);
        }
        else{
            fputc('\n',writer);
        }
        
    }
}