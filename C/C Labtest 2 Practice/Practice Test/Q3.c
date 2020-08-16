#include <stdio.h>
#include <stdlib.h>

int contains(int arr[], int size, int val){
    int i = 0;
    for(i = 0 ; i < size; i ++){
        if(arr[i] == val){
            printf("arr1 contains: %d\n", val);
            return 1;
        }
    }
    printf("arr1 does not contain: %d\n", val);
    return 0;
}

int subsetChecker(int arr1[],int n1, int n2, int arr2[]){ //essentially a .contains method
    int i, j = 0;
    if(n1 >= n2){
        for(i = 0; i < n2; i ++){
            if(contains(arr1, n1, arr2[i]) == 0){
                return 0;
            }
        }
        return 1;
    }
    else{
        for(i = 0; i < n1; i ++){
            if(contains(arr2,n2,arr1[i]) == 0){
                return 0;
            }
        }
        return 1;
    } 
}

void main(){
//reading the first array.
int n1, n2 = 0;
int i = 0;
scanf("%d",&n1);
int myArr[n1];
for(i = 0 ; i < n1; i ++ ){
    scanf("%d",&myArr[i]);
}
//Printing the first array.
printf("1st Array: ");
for(i = 0; i < n1; i ++ ){
    printf("%d, ", myArr[i]);
}
printf("\n");
//reading the second array
scanf("%d", &n2);
int myArr2[n2];
for(i = 0 ; i < n2; i ++ ){
    scanf("%d",&myArr2[i]);
}

printf("2nd Array: ");
//printing the second array
for(i = 0; i < n2; i ++ ){
    printf("%d, ", myArr2[i]);
}
printf("\n");

if(n1 >= n2){
    if(subsetChecker(myArr,n1, n2, myArr2) == 1){
        printf("arr2 is a subset of arr1\n");
    }
    else{
        printf("No relation\n");
    }
    
}
else{
    if(subsetChecker(myArr2,n2, n1, myArr) == 1){
        printf("Arr1 is a subset of Arr2\n");
    }
    else{
        printf("No relation\n");
    }
}

}
