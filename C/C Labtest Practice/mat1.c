#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
 
 char * boolType(bool val){
     if(val){
         return "true";
     }
     return "false";
 }



 void main(){
     int rows = 0;
     int cols = 0;
     int val = 0;
     bool ass = true;
     bool dec = true;
     scanf("%d", &rows);
     scanf("%d",&cols);
     int mat[rows][cols];
     printf("rows: %d\ncols: %d\n",rows,cols);
    int i,j = 0;
     for(i = 0 ; i < rows; i ++){
         for(j = 0; j < cols; j++){
            scanf("%d",&val);
            mat[i][j] = val;
         }
     }

     for(i = 0 ; i < rows; i ++){
         for(j = 0; j < cols; j++){
            printf("%d ", mat[i][j]);
         }
         printf("\n");
     }

     for(i = 1 ; i < rows; i ++){
         for(j = 1; j < cols; j++){
            ass = ass && (mat[i-1][j-1] < mat[i][j] );
            dec = dec && (mat[i-1][j-1] > mat[i][j] );
            printf("%s\n",boolType(true));
            printf("%s\n",boolType(dec));
         }
         if(ass){
             printf("A ");
         }
         else if(dec){
            printf("D");
         }
         else{
             printf("N");
         }
     }

 }