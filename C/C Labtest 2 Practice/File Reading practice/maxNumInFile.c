#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct{
    int val;
}Values;

int maxOf( Values * val, int size ){
    int i = 0; 
    int max = val[0].val;
    for( i = 0; i < size; i ++){

        if(val[i].val > max){
            max = val[i].val;
        }
    }
    return max;
}

void main(){
    Values vals[150];
    char *readFile = "maxOfFile.txt";

    FILE *readStream = fopen(readFile,"r");
    if(readStream == NULL){
        printf("Error\n");
        exit(1);
    }
    int i = 0;
    while( (fscanf(readStream,"%d", &vals[i].val)) != EOF){
        i++;
    }

    int maxVal = maxOf( vals, i );

    printf("Max of file is: %d\n",maxVal);
}