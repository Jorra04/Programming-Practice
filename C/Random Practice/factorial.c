#include <stdio.h>
int main(){
    printf("Enter the Value.\n");
    int val = 0;
    scanf("%d",&val);
    if( val < 0){
        printf("No factorial for negative numbers.");
        return -1;
    }
    else if(val == 1 || val == 0){
        return 1;
    }
    else{
        int x = val;
        for(int i =1; i < val; i++){
            x*=i;
        }
        printf("%d! = %d\n",val,x);
        return x;
    }

    
}