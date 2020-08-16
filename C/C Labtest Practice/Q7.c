#include <stdio.h>

void main(){
int num1,num2 = 0;
char character;

scanf("%d %d %c", &num1,&num2,&character);
// printf("%d %d %c", num1,num2,character);
int i,j,k = 0;
for(i = 0; i < num1; i ++){
    printf("%c",character);
}
printf("\n");
for(j = 0; j < num2 - 2; j ++ ){
    for(i = 0; i < num1; i ++ ){
        if(i == 0 || i == num1-1){
            printf("%c",character);
        }
        else{
            printf(" ");
        }
    }
    printf("\n");
}
for(i = 0; i < num1; i ++){
    printf("%c",character);
}
printf("\n");
}