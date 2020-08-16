#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isPrime(int val){
    int i = 0;
    int count = 0;
    for(i = 1; i <= val; i ++){
        if(val % i == 0){
            count ++;
        }
        if(count > 2){
            return false;
        }
    }
    return true;
}


int largestPrime(int val, int val2){
    int i = 0;
    for(i = val2; i > val; i --){
        if(isPrime(i)){
            return i;
        }
    }
}

void main(){
    int val1 = 0;
    int val2 = 0;
    scanf("%d %d", &val1, &val2);
    int i = 0;
    int counter = 0;
    // printf("%d\n",largestPrime(val1,val2));
    for(i = val1; i <= val2; i ++ ){
        
        // printf("%d\n", i);
        if(isPrime(i) && i != 1){
            if(i != (largestPrime(val1,val2))){
                printf("%d,",i);
            }
            else{
                printf("%d",i);
            }
            
        }
    }
    printf("\n");
}