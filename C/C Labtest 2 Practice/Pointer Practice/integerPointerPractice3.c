#include <stdio.h>
#include <stdlib.h>

void arrayMan(int * arr, int n){
    int i = 0;

    for(i = 0; i < n; i ++){
        arr[i] = 5;
    }

    return;
}




void main(){
    int arr[5] = {0,1,2,3,4};

    int *p;

    p = arr;
    int i =0;
    for(i = 0; i < 5; i ++){
        printf("Value at index: %d is %d\n",i,*(p+i));
    }

    arrayMan(p,5);
    printf("-----After manipulation-----\n");

    for(i = 0; i < 5; i ++){
        printf("Value at index: %d is %d\n",i,*(p+i));
    }

}