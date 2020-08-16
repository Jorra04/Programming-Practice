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

void main(){
    char *readFile1 = "read8a.txt";
    char *readFile2 = "read8b.txt";

    FILE *readStream1 = fopen(readFile1, "r");
    FILE *readStream2 = fopen(readFile2, "r");
    char *word;
    char *word2;
    word = (char*) calloc(15,sizeof(char));
    word2 = (char*) calloc(15,sizeof(char));
    bool diffFound = false;
    int words1 = 0;
    int words2 = 0;
    if(readStream1 && readStream2){
        while( fscanf(readStream1, "%s", word) == 1  && fscanf(readStream2,"%s",word2) == 1 ){
            if(!stringsEqual(word,word2)){
                diffFound = true;
            }
        }

        rewind(readStream1);
        rewind(readStream2);
        while( fscanf(readStream1, "%s", word) == 1 ){
            words1 ++;
        }
        while( fscanf(readStream2, "%s", word2) == 1 ){
            words2 ++;
        }
        if(diffFound){
            printf("there is a word mismatch between '%s' and '%s'\n",word,word2);
        }
        else if(words1 > words2){
            printf("the two files are itentical. File 2 is a subset of File 1\n");
        }
        else if(words2 > words1){
            printf("the two files are itentical. File 1 is a subset of File 2\n");
        }
        else{
            printf("The two files are identical.\n");
        }
        
    }
    else{
        printf("issue\n");
    }
    

}