#include <stdio.h>
#include <stdlib.h>
/*
This program is a simple program that shows how we can covert c to pass by reference.

*/
void integerChanger(int *p){
    *p = 500;
    return;
}


void integerChanger2(int a){
    a = 50000;
    return;
}

void main(){
    int a = 50;
    int *pa;
    pa = &a;
    printf("The value that pa holds: %d\n",*pa);
    printf("The value that a holds: %d\n",a);
    printf("The memory address of p: %p\n",pa);
    printf("The memory address of a: %p\n",&a);
    integerChanger(pa);

    printf("-------------After changes with pointer function-------\n");
    printf("The value that pa holds: %d\n",*pa);
    printf("The value that a holds: %d\n",a);

    integerChanger2(a);

    printf("-------------After changes without pointer function-------\n");
    printf("The value that pa holds: %d\n",*pa);
    printf("The value that a holds: %d\n",a);
}