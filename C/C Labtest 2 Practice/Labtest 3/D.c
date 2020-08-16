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

int  getFactors(int val){
    int i = 0;
    int counter = 0;
    for(i = 2; i < val; i ++){
        if(val % i == 0){
            if(isPrime(i)){
                return i;
            }
        }
    }
}

void formatter(int *arr, int size){
    int i;
    for (i = 0; i < size; i++){
        if(i == size-1){
            printf("%d",arr[i]);
        }
        else{
            printf("%d,",arr[i]);
        }
    }
    printf("\n");
}

void main(){
    int val; 
    scanf("%d",&val);
    int tmp = val; //make a local copy of val
    int * primeArr; //ptr arr so we can add the values back
    int counter = 0;
    primeArr = (int*)calloc(1000, sizeof(int));
    if(primeArr == NULL){
        /*
        kick out of theres an error allocating arr.
        */
        printf("Error allocating memory.\n");
        exit(0);
    }
    if(isPrime(val)){ //if first is prime, cant go further
        printf("%d\n",val);
        exit(0);
    }

   

    while(1){ //Always true.
        if(!isPrime(tmp)){
            primeArr[counter] = getFactors(tmp);
            counter++;
            tmp /= getFactors(tmp);
            if(isPrime(tmp)){
                primeArr[counter] = tmp;
                counter++;
            }
        }
        else{
            break; //Break the loop if its a prime.
        }
    }
    formatter(primeArr, counter);

}