#include <stdio.h>
#include <stdlib.h>

void main(){
    int tuna = 19;
    printf("Address \t Name \t Value: \n"); 
    printf("%p \t %s \t %d \n", &tuna, "tuna", tuna);

    int * pTuna = &tuna; //a pointer that points to the memory address of tuna.

    printf("%p \t %s \t %d \n", pTuna, "tuna", tuna);
    printf("%p \t %s \t %d \n", pTuna, "tuna", *pTuna);

    //Access the value of a pointer: *POINTER_NAME
    //Access the memory address of a pointer: &POINTER_NAME
    //Dereference the pointer using the asterisk symbol *. Goes to the variable the pointer points to and gets the value.


    // int* val;    //doesn't work because its trying to set the value of the memory address to 5.
    // *val = 5;
    // int* val2;
    // *val2= 6;
    // printf("Address \t Name \t Value \n");
    // printf("%p \t %s \t %d \n",val, "val", *val);
    // printf("%p \t %s \t %d \n",val2, "val2", *val2);
    // // val2 = val;

    /*
    ==================POINTS TO REMEMBER WHEN USING POINTERS============================
    - when declaring/ initializing a pointer variable, *VALRIABLE_NAME indicates that it is a pointer to the type on the lefthand side.
    - The address of any variable can be given by using the ampersand symbol &.
    - The pointer variable stores the address of a variable. int *a does not mean that a is going to contain an integer value. It means that a is
        going to contain the address of a variable storing an integer.
    - To access the value of a certain address stored by a pointer variable, we use "*" to dereference the pointer.
        This can be thought of in the following way, *p can be read as "value at p"
    */


    int a, *p; //initialize an integer, a, and a POINTER to an INT, p.
    a = 10; //set the value of a to be 10.

    p = &a; // pointer p points to the memory address of a.

    printf("----------------------------------------\n");
    printf("Value that pointer p points to: %d\n",*p); //will print the value that p points to AKA the value of A (because p points to the memory address a holds.)
    printf("Value that is assigned to a: %d\n",*&a); // Think of this as "get the value at the memory address of a". So this gets the value of a as well.
    printf("Memory address that holds a: %p\n", &a); //get the memory address of a.
    printf("Memory address that p holds: %p\n",p); // will print the memory address of a. Because p is a pointer to an int (Points to the memory address of a).
    printf("Memory address that holds p: %p\n",&p); //This will print the memory address that holds p.
    printf("------------Display of the power of references--------------------\n");
    printf("----------Before switch------------\n");
    printf("Address \t Name \t Value\n");
    printf("%p \t %s \t %d\n",&a, "a", a);
    printf("%p \t %s \t %d\n",p, "*p", *p);

    *p = 50; //the value of the address that p points to will now hold 50.
    printf("----------After switch------------\n"); //both values will change.
    printf("Address \t Name \t Value\n");
    printf("%p \t %s \t %d\n",&a, "a", a);
    printf("%p \t %s \t %d\n",p, "*p", *p);

    int b = 55;

    // p = b; //doesnt work because you're trying to assign an integer to a pointer.

    *p = b;
    printf("----------After switch------------\n"); //both values will change.
    printf("Address \t Name \t Value\n");
    printf("%p \t %s \t %d\n",&a, "a", a);
    printf("%p \t %s \t %d\n",p, "*p", *p);

    int *p1;
    int *p2;
    int n = 50;
    int g = 10;

    p1 = &n;

    p2 =&g;

    printf("%d\n", *p1);
    printf("%d\n",*p2);
    
    

}   