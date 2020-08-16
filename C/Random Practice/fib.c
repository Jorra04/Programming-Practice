#include<stdio.h>
 
int Fibonacci(int);
 
int main()
{
   int input, i = 0, c;
 
   scanf("%d",&input);
 
   printf("Fibonacci sequence as follows: \n");
   int myArr [input];
    printf("[");
   for ( c = 1 ; c <= input ; c++ )
   {
        printf("%d", Fibonacci(i));
        if(i < input-1){
            printf(", ");
        }
        i++; 
   }
   printf("]\n");
 
   return 0;
}

 
int Fibonacci(int n)
{
   if ( n == 0 )
      return 0;
   else if ( n == 1 )
      return 1;
   else
      return ( Fibonacci(n-1) + Fibonacci(n-2) );
} 
