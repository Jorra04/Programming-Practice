#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main(){
    char * readFile = "read7.txt";
    char * writeFile = "write7.txt";

    FILE *readStream = fopen(readFile, "r");
    FILE *writeStream = fopen(writeFile,"w");
    char * line;
    line = (char* )calloc(150,sizeof(char));
    char c;
    char * word;
    word = (char* )calloc(30, sizeof(char));
    int wordCount = 0;
    int charCount = 0;
    int lineCount = 0;
    bool isEmpty = true;
    if(readStream){
        /*
        first copy the contents of the file youre reading i
        the file youre writing to.
        */
       while(fgets(line,150,readStream) != NULL){
           fputs(line,writeStream);
       }

       rewind(readStream);
       /*
       Now we're going to do the word count.
       */

      while( (fscanf(readStream, "%s",word)) == 1 ){
        wordCount++;
        isEmpty = false;
      }

      rewind(readStream);
      /*
      Now we will handle the character count and the lines.
      */
     while( (c = fgetc(readStream)) != EOF ){
         if(c != '\t' && c!= ' ' && c!= '\n'){
             charCount++;
         }
         else if(c == '\n'){
             lineCount++;
         }
     }
     if(!isEmpty){ 
         lineCount++;
     }
      fprintf(writeStream,"\n===========================================\n"
      "Word Count: %d\nCharacter Count: %d\nLines: %d\n",wordCount,charCount,lineCount);
    }
    else{
        printf("Bad File\n");
        exit(1);
    }
}