#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

void main(){
    int *vec;

    vec = (int*)calloc(100,sizeof(int));
    int i = 0;
    int tmp = 0;
    while(1){
        scanf("%d",&tmp);
        if(tmp <0){
            break;
        }
        else{
            vec[i] = tmp;
        }
        i++;
        
    }
    int j = 0;
    int runSum = 0;
    for(j = 0; j < i; j ++){
        runSum+=vec[j];
    }

    printf("%d\n",runSum);
}