#include <stdlib.h>
#include <stdio.h>
int contains(int arr[], int size, int val){
    int i = 0;
    for(i = 0 ; i < size; i ++){
        if(arr[i] == val){
            return 1;
        }
    }
    return 0;
}
void main(){
    //Scanning two arrays.
    int n1,n2 = 0;
    scanf("%d",&n1);
    int arr1[n1];
    int i = 0;
    for(i = 0 ; i < n1; i ++){
        scanf("%d",&arr1[i]);
    }
    scanf("%d",&n2);
    int arr2[n2];
    for(i = 0; i < n2; i ++){
        scanf("%d", &arr2[i]);
    }
    if(n1 > n2){
        printf("No: n1 > n2,\n");
        return;
    }
    int containsAll = 0;
    for(i = 0; i < n1; i ++){
        if(contains(arr2, n2, arr1[i]) == 0){
            containsAll = 0;
        }
        else{
            containsAll =1;
        }
    }

    if(containsAll ==1){
        printf("Contains All\n");

    }
    else{
        printf("Does not contain all\n");
    }
}