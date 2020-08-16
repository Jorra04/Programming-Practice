#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[]){
    int i = 0;
    if(argc == 1){
        printf("Please provide the command line arguments.\n");
        return;
    }
    for(i = 0; i < argc; i ++){
        printf("%s\n",argv[i]);
    }
}