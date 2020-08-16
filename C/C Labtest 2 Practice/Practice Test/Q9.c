#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char name[50];
    int num1;
    int num2;
}Record;


void main(){
    Record record[100];
    char *fileName = "test1.txt";
    FILE *readStream = fopen(fileName, "r");

    if(readStream == NULL){
        printf("Error\n");
        exit(1);
    }
    int i = 0;
    while( (fscanf(readStream, "%s %d %d", record[i].name, &record[i].num1, &record[i].num2)) != EOF ){
        printf("first num: %d\n",record[i].num1);
        i++;
    }
}