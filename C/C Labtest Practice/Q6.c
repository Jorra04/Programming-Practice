#include <stdio.h>
void main(){
    int num = 0;

    scanf("%d",&num);

    int i ,j,k= 0;
    for(i = 0; i <= num; i +=2 ){
        for(k = 0; k <= ((num -i) /2); k++ ){
            printf(" ");
        }

        for(j = 0; j <= i; j ++ ){
            printf("*");
        }
        printf("\n");
    }

}
