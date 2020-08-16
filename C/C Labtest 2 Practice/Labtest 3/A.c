#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

void main(){
    int k = 0;
    int m = 0;
    int n = 0;
    scanf("%d", &k);
    int arr1[k];
    int i = 0;
    for(i = 0; i < k; i ++){
        scanf("%d", &arr1[i]);
    }
    scanf("%d", &m);
    int arr2[m];
    for(i = 0; i < m; i ++){
        scanf("%d",&arr2[i]);
    }
    scanf("%d",&n);

    if(n >k || n > m){
        printf("INVALID\n");
        return;
    }
    bool allEq = true;
    bool allGreater = true;
    bool allLess = true;
    for(i = 0; i < n; i ++){
        if(arr1[i] == arr2[i]){
            allEq = allEq && true;
            allGreater = false;
            allLess = false;
        }
        else if(arr1[i] > arr2[i]){
            allGreater = allGreater && true;
            allEq = false;
            allLess = false;
        }
        else if(arr1[i] < arr2[i]){
            allLess = allLess && true;
            allEq = false;
            allGreater = false;
        }
        
    }

    if(allEq){
        printf("EQUAL\n");
    }
    else if(allGreater){
        printf("LARGER\n");
    }
    else if(allLess){
        printf("SMALLER\n");
    }
    else{
        printf("NONE\n");
    }
}