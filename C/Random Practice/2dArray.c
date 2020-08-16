#include <stdlib.h>
#include <stdio.h>
#define COLUMN_LEN 10
#define ROW_LEN 10
int ** zeroMaker(int rows ,int cols, int a [rows][cols]){
    int i,j =0;
    for(i = 0; i < rows;i++){
        for(j =0; j < cols;j++){
            a[i][j] = 0;
        }
    }
}

int ** changeDiag(int rows, int cols, int a[rows][cols],int val){
    int i, j=0;
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j ++){
            if(i == j ){
                a[i][j] = val;
            }
        }
    }
}
void printer(int rows, int cols, int a[rows][cols]){
    int i,j;
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j ++){
            printf("%d  ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
int checkerFunc(int checkerVal, int ans){
    if(checkerVal == 1){
        return 1;
    }
    else if(ans == 1){
        return 1;
    }
    else{
        return 0;
    }
}


void main(){
    int inputVal;
    int indentityVal;
    int isFalse;
    int checker = 1; //bool representation of true.
    int a [ROW_LEN][COLUMN_LEN];
    zeroMaker(ROW_LEN,COLUMN_LEN,a);
    printf("Welcome to the matrix. Please select from the below options:\n");
    while(checker == 1){
        printf("1. Print zero matrix.\n2.Print Identity matrix with the number of your choice.\n3. Make and print your own matrix.\n");
        scanf("%d",&inputVal);
        if(inputVal == 1){  
            zeroMaker(ROW_LEN,COLUMN_LEN,a);
            printer(ROW_LEN,COLUMN_LEN,a);
            printf("do you want to do another (1/0).\n");
            scanf("%d",&isFalse);
            checker = checkerFunc(0,isFalse);
        }
        else if(inputVal == 2){
            printf("Enter the identity value.\n");
            scanf("%d",&indentityVal);
            changeDiag(ROW_LEN,COLUMN_LEN,a,indentityVal);
            printer(ROW_LEN,COLUMN_LEN,a);
            printf("do you want to do another (1/0).\n");
            scanf("%d",&isFalse);
            checker = checkerFunc(0,isFalse);
        }
        else{
            printf("Incorrect input select from the following option\n\n");
            printf("Try again?\n");
            scanf("%d",&isFalse);
            checker = checkerFunc(0,isFalse);
        }
    }
}
