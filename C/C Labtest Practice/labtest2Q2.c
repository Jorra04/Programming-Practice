#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
void main(){
    char *str;
    char *str2;
    str = (char*)calloc(20,sizeof(char));
    str2 = (char*)calloc(20,sizeof(char));
    scanf("%s", str);
    int i = 0;
    for(i = 0 ; i < strlen(str); i ++ ){
        str2[i] = str[strlen(str) -1 -i];
    }
    int count = 0;
    for(i = 0; i < strlen(str2); i ++ ){
        if(str2[i] == '0'){
            count++;
        }
        else{
            break;
        }
    }
    for(i = count; i < strlen(str2); i++){
        printf("%c",str2[i]);
    }

    printf("\n");
}