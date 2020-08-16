#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){
    printf("Enter a name: ");
    char name [20];
    fgets(name,sizeof(name), stdin);
    int i,j,k=0;
    int count,index = 0;
    int index1 = 0;
    for(i = 0; i < strlen(name) -1; i ++ ){
        if(name[i] == ' '){
            index = i;
            count++;
        }
    }
    for(i = 0; i < strlen(name) -1; i ++ ){
        if(name[i] == ' '){
            index1 = i;
            break;
        }
    }
    // printf("%d",count);

    if(count == 2){
        for(j = index; j < strlen(name) -1; j ++){
            printf("%c", name[j]);
            
        }
        printf(", %c. \n",name[0]);
        
    }
    
    else{
        for(j = index; j < strlen(name) -1; j ++){
            printf("%c", name[j]);
            
        }
        printf(", %c. ",name[0]);
        printf("%c.\n",name[index1+1]);
    }
    
    

}