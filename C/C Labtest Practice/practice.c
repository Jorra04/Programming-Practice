#include <stdio.h>
#include <stdlib.h>
//printing repeated.

int length(char * str){
    int i = 0;
    int count = 0;
    while(str[i] != '\0'){
        count ++;
        i++;
    }

    return count -1;
}

void main(){
    char myArr[20];
    fgets(myArr,sizeof(myArr),stdin);
    printf("The array is: %s\n", myArr);

    int i,j = 0;
    // printf("%d\n",length(myArr));
    for(i = 0; i < length(myArr); i ++){
        for(j =0; j < length(myArr); j ++){
            if(myArr[i] == myArr[j] && i != j){
                printf("%d ", i);
            }
            // printf("%d  --- > %d\n",i,j);

        }
    }
}