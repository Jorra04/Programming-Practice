#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

void main(){
    char *fileName = "randoText.txt";
    FILE *readStream = fopen(fileName,"r");

    char* line;
    line = (char*) calloc(200,sizeof(char));
    char *firstName;
    char *lastName;
    firstName = (char*) calloc(50,sizeof(char));
    lastName = (char*) calloc(50,sizeof(char));
    int age;
    if(readStream == NULL){
        printf("Error loading file\n");
        exit(1);
    }
    // while( fgets(line,200,readStream) != NULL ){
    //     if(sscanf(line, "%s %d %s", firstName, &age, lastName) == 3){
    //         printf("this has 3 elements\n");
    //     }
    //     else{
    //         printf("this has two elements or less\n");
    //     }
    //     // printf("%s %d %s\n",firstName, age, lastName);
    // }
    int count = 0;
    while( (fscanf(readStream, "%s %d %s", firstName, &age, lastName)) != EOF ){
        count++;
        printf("%s %d %s\n", firstName, age, lastName);
        // printf("return val: %d\n", (fscanf(readStream, "%s %d %s", firstName, &age, lastName)));
    }

    printf("iterations: %d\n",count);
}