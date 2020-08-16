#include <stdlib.h>
#include <stdio.h>

void main(){ 

    /*
    update this later to include reading standard input.
    */
    int myArr[10] = {1,2,5,8,0,2,7,9, 9, 9};
    printf("%d\n",myArr[0]);
    int size = sizeof(myArr)/sizeof(myArr[0]); //best way to find the length of a integer array in c.
    int i, j = 0;
    //bubble sort.
    for(i = 0; i < size; i ++){
        for( j = 0 ;j < size -i -1; j ++){
            if(myArr[j] > myArr[j+1]){ //change to  myArr[j] > myArr[j+1] if you want descending.
                int temp = myArr[j];
                myArr[j] = myArr[j+1];
                myArr[j+1] = temp;
            }
        }
    }
    //array is now sorted.

    int currCounter = 1;
    int maxCounter = 0;
    int res = -1;
    for(i = 1; i < size; i ++){
        if(myArr[i] == myArr[i-1]){
            currCounter++;
        }
        else{
            if(currCounter > maxCounter){
                maxCounter = currCounter;
                res = myArr[i];
            }
            currCounter = 1; // reset
        }
    }


    if(currCounter > maxCounter){ // handles the last element being the value.
        maxCounter = currCounter;
        res = myArr[size -1];
    }
    printf("%d\n",currCounter);

    printf("The most recurring number is: %d\n", res);


    for(i = 0; i < size; i ++){
        printf("%d, ", myArr[i]);
    }


    // int n, i = 0;
    // scanf("%d",&n);
    // int myArr[n];
    // int copyArr[n];

    // for(i = 0; i < n; i ++){
    //     scanf("%d", myArr[i]);
    // }
    // int j = 0;
    // for(i = 0; i < n; i ++){
    //     for(j = 0; j < n; j ++){
    //         if()
    //     }
    // }

}
