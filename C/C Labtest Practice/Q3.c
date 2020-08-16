#include <stdio.h>
#include <string.h>
/*
question 3 from the practice c test.
*/
void main(){
    char input[20];
    fgets(input,sizeof(input),stdin);

    printf("%s\n", input);
    int count, i,j = 0;
    while(j < strlen(input)){
        int curr = input[j];
        count = 0;
        for(i = 0; i < strlen(input) ; i ++ ){
            if(curr == input[i] && i != j){
                printf("%d ", j);
            }
        }
        j++;
    }
    printf("\n");
}
