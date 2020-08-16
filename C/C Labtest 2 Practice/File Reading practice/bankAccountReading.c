#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
typedef struct{
    float balance;
    char firstName[50];
    char lastName[50];
    char accountType[30];
}BankAccount;

bool stringsEqual(char *str1, char *str2){
    if(strlen(str1) != strlen(str2)){
        return false;
    }
    int i = 0;
    for(i = 0 ; i < strlen(str1); i ++){
        if(str1[i] != str2[i]){
            return false;
        }
    }
    return true;
}
/*
Assuming that the account owner is only present in the records once.
*/
void main(){
    char *fileName = "bankStatement.txt";
    FILE *readStream = fopen(fileName,"r");
    BankAccount bankAccount[100];
    if(readStream == NULL){
        printf("Error, cannot find file.\n");
    }
    char *fName;
    char *lName;
    fName = (char*)calloc(50,sizeof(char));
    lName = (char*)calloc(50,sizeof(char));
    char *line;
    line = (char*)calloc(200,sizeof(char));
    bool found = true;
    // printf("%s %s\n",fName,lName);
    while(found){
        int i = 0;
        scanf("%s %s", fName,lName);
        while( (fgets(line,200,readStream)) != NULL ){
            if(sscanf(line, "%s %s %s %f", bankAccount[i].firstName,bankAccount[i].lastName,bankAccount[i].accountType, &bankAccount[i].balance) == 4){
                // printf("%s %s\n",bankAccount[i].firstName,bankAccount[i].lastName);
                if(stringsEqual(bankAccount[i].firstName, fName) && stringsEqual(bankAccount[i].lastName, lName)){
                    printf("%s %s's %s account: $%.2f\n", bankAccount[i].firstName,bankAccount[i].lastName,bankAccount[i].accountType, bankAccount[i].balance);
                    found = true;
                    break;
                }
                else{
                    found = false;
                }   
            }
            else if(sscanf(line, "%s %s %s %f", bankAccount[i].firstName,bankAccount[i].lastName,bankAccount[i].accountType, &bankAccount[i].balance) == 3){
                // printf("%s %s\n",bankAccount[i].firstName,bankAccount[i].lastName);
                if(stringsEqual(bankAccount[i].firstName, fName) && stringsEqual(bankAccount[i].lastName, lName)){
                    printf("%s %s's %s account:  No Balance\n", bankAccount[i].firstName,bankAccount[i].lastName,bankAccount[i].accountType);
                    found = true;
                    break;
                }
                else{
                    found = false;
                }
            }
            i++;
        }
        rewind(readStream);
    }
    if(!found){
        printf("The client you searched for does not have an account with us!\n");
    }
}