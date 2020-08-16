#include <stdio.h>
#include <stdlib.h>

void main(){

    /*
    USING MALLOC
    */
//     int n;
//     printf("Enter the size of the array:\n");
//     scanf("%d",&n);

//     int *A = (int*)malloc(n*sizeof(int));
//     if(A){
//        int i = 0;
//        for ( i = 0; i < n; i++){
//            A[i] = i+1;
//         }
//         printf("\n");
//         for ( i = 0; i < n; i++){
//             printf("%d,",A[i]);
//         }
//         printf("\n");
//         free(A);
//         // for ( i = 0; i < n; i++){
//         //     printf("%d,",A[i]);
//         // }
//         // printf("\n");
//    }
//    else{
//        printf("Allocation Error.\n");
//    }

    /*
    USING CALLOC
    */
   int n;
   printf("Enter the size of the array:\n");
   scanf("%d",&n);
   int *A = (int*) calloc(n,sizeof(int));
   if(A){
       int i = 0;
       for ( i = 0; i < n; i++){
           A[i] = i+1;
        }
        printf("\n");
        for ( i = 0; i < n; i++){
            printf("%d,",A[i]);
        }
        printf("\n");
        free(A);
        // for ( i = 0; i < n; i++){
        //     printf("%d,",A[i]);
        // }
        // printf("\n");
   }
   else{
       printf("Allocation Error.\n");
   }


//    printf("Random access val: %d\n", *(A+20));
   
//------------------------------------------------------

    // int *p;

    // p = (int*) calloc(5,sizeof(int));
    // printf("%d\n",sizeof(p));

}