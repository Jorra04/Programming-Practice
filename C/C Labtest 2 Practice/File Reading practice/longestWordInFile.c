#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct{
    char word[100] ;
}Words;

int longestWord(Words *word, int size){
    int max = 0;
    int i =0;
    int count = 0;
    for(i = 0 ; i < size; i ++){
        if( strlen(word[i].word) > max ){
            max = strlen(word[i].word);
        }
    }
    return max;
}


void main(){
    char *fileName = "longestWordsFile.txt";
    FILE *readStream = fopen(fileName, "r");
    Words words[100];
    int i = 0;
    while( fscanf(readStream, "%s", words[i].word) != EOF){
        // printf("%s ", words[i].word);
        i++;
    }
    printf("%d\n",longestWord(words,i));
}