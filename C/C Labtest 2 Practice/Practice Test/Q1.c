#include <stdio.h>
#include <stdlib.h>

void main(){
    //easy way to take an array as input
    int i, n = 0;
    scanf("%d\n",&n);
    int myArr[n];
    for(i = 0; i < n; i ++ ){
        scanf("%d", &myArr[i]);
    }
    //works based on the assumption that only one value is repeated twice.
    int j,res = 0;  
    for(i = 0; i < n; i ++){
        for(j = 1; j < n; j ++){
            if(myArr[i] == myArr[j] && i != j){
                res = myArr[i];
                goto returnStatement;
            }
        }
    }
    returnStatement:
    printf("Element that repeats twice is: %d\n",res);


}