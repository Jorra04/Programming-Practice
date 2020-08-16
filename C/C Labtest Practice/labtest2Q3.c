#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main(){
    int rows = 0;
    int cols = 0;
    scanf("%d %d", &rows, &cols);
    int mat[rows][cols];
    int i = 0;
    int j = 0;
    for(i = 0; i < rows; i ++){
        for(j = 0; j < cols; j ++){
            scanf("%d", &mat[i][j]);
        }
    }

    
    for(i = 0; i < rows; i++){
        bool dec = true;
        bool ass = true;
        for(j = 1; j < cols; j ++){
            if(mat[j][i] > mat[j-1][i]){
                ass = ass && true;
                dec = dec && false;
            }
            else if(mat[j][i] < mat[j-1][i]){
                ass = ass && false;
                dec = dec && true;
            }
            else{
                ass = false;
                dec = false;
            }
        }
        if(ass){
            printf("A ");
        }
        else if(dec){
            printf("D ");
        }
        else{
            printf("N ");
        }
    }
    printf("\n");
}