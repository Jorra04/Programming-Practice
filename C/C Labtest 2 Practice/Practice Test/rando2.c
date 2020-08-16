#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int indexOf(int arr[], int size,int val){
    int i =0;
    for(i = 0; i < size; i ++){
        if(arr[i] == val){
            return i;
        }
    }
    return -1;
}

int maxOf(int arr[], int size){
    int max = arr[0];
    int  i = 0;
    for(i = 0; i < size; i ++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    return max;
}


int numOccur(int arr[], int size, int val){
    int i = 0;
    int count = 0;
    for(i = 0 ; i < size; i ++){
        if(arr[i] == val){
            count ++;
        }
    }
    return count;
}
/*
if there are two elements with the same count, it prints the first.
*/

void main(){
    int n=0;
    scanf("%d",&n);
    int arr[n];
    int f = 0;
    for(f = 0; f < n; f++){
        scanf("%d",&arr[f]);
    }

    int occ1 = numOccur(arr, 8, 7 );
    // printf("%d\n", occ1);

    int resArr[8] = {0};
    int  i=0;
    for(i = 0; i < 8; i ++ ){
        int occurs = numOccur(arr, 8, arr[i]);
        resArr[i] = occurs;
    }
    int maxOfvals = maxOf(resArr,8);
    int index = indexOf(resArr, 8, maxOfvals);
    if(index < 0){
        printf("Doesnt exist\n");
    }
    else{
        printf("Element with the most occurences: %d\n",arr[index]);
    }
}