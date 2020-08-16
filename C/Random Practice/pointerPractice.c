
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    char *var = "hello world"; /* actual variable declaration */
    char *ip;      /* pointer variable declaration */
    ip = &var[0];    /* store address of var in pointer variable*/
    
    // printf("Address of var variable: %p\n", &var);

    // /* address stored in pointer variable */
    // printf("Address stored in ip variable: %p\n", ip);
    // printf("Value of var variable: %d\n", var);
    // /* access the value using the pointer */
    // printf("Value of *ip variable: %d\n", *ip);
    // bool tf = &var == ip;
    // if (tf)
    // {
    //     printf("true\n");
    // }
    // else
    // {
    //     printf("false\n");
    // }
    int i;
    for(i = 0; i < strlen(var); i ++){
        printf("Value of *ip is: %c\n",*ip);
        ip++;
        
    }
    return 0;
}