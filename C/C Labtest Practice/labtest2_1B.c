#include <stdio.h>
#include <stdlib.h>


int findMax(int * myArr, int size){
    int i = 0;
    int max = 0;
    for(i = 0; i <= size; i ++){
        if(myArr[i] > max){
            max = myArr[i];
        }
    }
    return max;
}

int indexFinder(int * myArr, int size, int maxVal){
    int i = 0; 
    for(i = 0; i <= size; i ++){
        if(myArr[i] == maxVal){
            return i;
        }
    }
}

void main(){
    int size = 0;
    int myArr[25] = {0};
    int temp = 0;
    int max = 0;
    int secondMax = 0;
    int index = 0;
    int secondIndex = 0;
    scanf("%d", &size);
    // Size is said to be minimum 2.
    int i = 0;
    while(i < size){
        scanf("%d", &temp );
        myArr[i] = temp;
        i++;
    }
    max = findMax(myArr, size);
    index = indexFinder(myArr,size,max);
    myArr[index] = -1;
    secondMax = findMax(myArr,size);
    secondIndex = indexFinder(myArr,size,secondMax);
    if(max == secondMax){
        printf("%d  %d\n%d  %d\n",max,index,secondMax,index);
    }
    else{
        printf("%d  %d\n%d  %d\n",max,index,secondMax,secondIndex);
    }
}