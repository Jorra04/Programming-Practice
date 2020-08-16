#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
/*
Keep reading from the file while until you enter a name that isnt present.
*/

bool stringsEqual(char *str1, char *str2){
    if(strlen(str1) != strlen(str2)){
        return false;
    }
    int i = 0;
    for( i = 0 ; i < strlen(str1); i ++){
        if(str1[i] != str2[i]){
            return false;
        }
    }
    return true;
}

bool containsName(FILE *reader, char * name){
    char *word;
    int num1 = 0;
    int num2 = 0;
    word = (char*)calloc(50,sizeof(char));
    while( fscanf(reader, "%s %d %d", word, &num1, &num2) != EOF  ){
        // printf("%s\n",word);
        if(stringsEqual(word, name)){
            if(num1 >= num2){
                printf("%d\n", num1);
            }
            else{
                printf("%d\n",num2);
            }
            return true;
        }
    }
    return false;
}

void main(){
    char *readFile = "names.txt";
    FILE *readStream = fopen(readFile,"r");
    char *word;
    word = (char*)calloc(50,sizeof(char));
    
    if(!readStream){
        printf("Error opening the file.\n");
        exit(1);
    }
    bool tf = true;
    while(tf){
        scanf("%s",word);
        if(!containsName(readStream,word)){
            break;
        }
        rewind(readStream);
    }
}