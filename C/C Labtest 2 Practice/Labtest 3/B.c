#include <stdio.h>
#include <stdlib.h>


void main(){
    float num = 0.0;
    scanf("%f",&num);
    int decVal = num;
    int count = 0;
    while(decVal !=0){
        decVal/=10;
        count++;
    }
    printf("%d\n", count);
}