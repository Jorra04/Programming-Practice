#include <stdio.h>
#include <string.h>
void main(){
    printf("Enter the roman numeral: ");
    char input [30];
    fgets(input,sizeof(input),stdin);
    int val = 0;
    int i= 0; 
    for(i = 1; i < strlen(input); i ++ ){
        if(input[i-1] == 'I' && input[i] == 'V'){
            val +=4;
            i++;
            // printf("here\n");
        }
        else if(input[i-1] == 'I' && input[i] == 'X'){
            val+=9;
            i++;
            // printf("here2\n");
        }
        else if(input[i-1] == 'X' && input[i] == 'L'){
            val+=40;
            i++;
            // printf("here3\n");
        }
        else if(input[i-1] == 'X' && input[i] == 'C'){
            val+=90;
            i++;
            // printf("here4\n");
        }
        else if(input[i-1] == 'C' && input[i] == 'D'){
            val+=400;
            i++;
            // printf("here5\n");
        }
        else if(input[i-1] == 'C' && input[i] == 'M'){
            val+=900;
            i++;
            // printf("here6\n");
        }
        else if(input[i-1] == 'I'){
            val+=1;
            // printf("here7\n");
        }
        else if(input[i-1] == 'V'){
            val+=5;
            // printf("here8\n");
        }
        else if(input[i-1] == 'X'){
            val+=10;
            // printf("here9\n");
        }
        else if(input[i-1] == 'L'){
            val+=50;
            // printf("here10\n");
        }
        else if(input[i-1] == 'C'){
            val+=100;
            // printf("here11\n");
        }
        else if(input[i-1] == 'D'){
            val+=500;
            // printf("here12\n");
        }
        else if(input[i-1] == 'M'){
            val+=1000;
            // printf("here13\n");
        }
        // printf("val is --->%d\n", val);
    }

    printf("The Decimal Value of Your Roman Numeral is: %d\n", val);


}