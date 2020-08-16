#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


typedef struct{
    char firstName[20];
    char lastName[20];
    char email[20];
    int test1;
    int test2;
    int test3;
}Database;

bool stringsEqual(char *str1, char *str2){
    if(strlen(str1) != strlen(str2)){
        return false;
    }
    int i = 0;
    for( i = 0; i < strlen(str1); i++){
        if(str1[i] != str2[i]){
            return false;
        }
    }
    return true;
}

void fileReader(FILE *fp, Database *db, int command){
    if(command == 1){
        int i = 0;
        float tAv = 0.0;
        int runSum = 0;
        
        while( (fscanf(fp, "%s %s %s %d %d %d", db[i].firstName,db[i].lastName, db[i].email, &db[i].test1, &db[i].test2, &db[i].test3 )) != EOF ){
            runSum += db[i].test1;
            i++;
        }
        tAv = runSum/i;
        printf("Test 1 average is: %.2f\n", tAv);
        
    }
    if(command == 2){
        int i = 0;
        float tAv = 0.0;
        int runSum = 0;
        
        while( (fscanf(fp, "%s %s %s %d %d %d", db[i].firstName,db[i].lastName, db[i].email, &db[i].test1, &db[i].test2, &db[i].test3 )) != EOF ){
            runSum += db[i].test2;
            i++;
        }
        tAv = runSum/i;
        printf("Test 2 average is: %.2f\n", tAv);
        
    }
    if(command == 3){
        int i = 0;
        float tAv = 0.0;
        int runSum = 0;
        
        while( (fscanf(fp, "%s %s %s %d %d %d", db[i].firstName,db[i].lastName, db[i].email, &db[i].test1, &db[i].test2, &db[i].test3 )) != EOF ){
            runSum += db[i].test3;
            i++;
        }
        tAv = runSum/i;
        printf("Test 3 average is: %.2f\n", tAv);
        
    }
    if(command == 4){
        int i = 0;
        float tAv = 0.0;
        float t1Av = 0.0;
        float t2Av = 0.0;
        float t3Av = 0.0;
        float runSum = 0.0;
        float runSum2 = 0.0;
        float runSum3 = 0.0;
        float totSum = 0.0;
        
        while( (fscanf(fp, "%s %s %s %d %d %d", db[i].firstName,db[i].lastName, db[i].email, &db[i].test1, &db[i].test2, &db[i].test3 )) != EOF ){
            runSum += db[i].test1;
            runSum2 += + db[i].test2;
            runSum3+= db[i].test3;
            i++;
        }
        totSum = runSum + runSum2 + runSum3;
        t1Av = runSum/i;
        t2Av = runSum2/i;
        t3Av = runSum3/i;
        // printf("%f %f %f\n",t1Av,t2Av,t3Av);
        tAv = (t1Av + t2Av + t3Av)/3.0;
        printf("Overall average is: %.2f\n", tAv);
        
    }
    rewind(fp);
    
}

void fileReader2(FILE *fp, Database *db, int command ,char *lName){
    int i = 0;
    float runSum = 0.0;
    float finalAv = 0.0;
    bool studentFound = false;
    if(command == 1){
        while( (fscanf(fp, "%s %s %s %d %d %d", db[i].firstName,db[i].lastName, db[i].email, &db[i].test1, &db[i].test2, &db[i].test3 )) != EOF ){
            if(stringsEqual(db[i].lastName, lName)){
                runSum+= db[i].test1 + db[i].test2 + db[i].test3;
                studentFound = true;
            }
            i++;
        }
        finalAv = runSum/3;
        printf("Average for student: %.2f\n", finalAv);
    }
    if(command == 2){
        while( (fscanf(fp, "%s %s %s %d %d %d", db[i].firstName,db[i].lastName, db[i].email, &db[i].test1, &db[i].test2, &db[i].test3 )) != EOF ){
            if(stringsEqual(db[i].lastName, lName)){
                printf("Test 1 Score: %d\n", db[i].test1);
                studentFound = true;
                break;
            }
            i++;
        }
    }
    if(command == 3){
        while( (fscanf(fp, "%s %s %s %d %d %d", db[i].firstName,db[i].lastName, db[i].email, &db[i].test1, &db[i].test2, &db[i].test3 )) != EOF ){
            if(stringsEqual(db[i].lastName, lName)){
                printf("Test 2 Score: %d\n", db[i].test2);
                studentFound = true;
                break;
                }
            i++;
        }
    }
    if(command == 4){
        while( (fscanf(fp, "%s %s %s %d %d %d", db[i].firstName,db[i].lastName, db[i].email, &db[i].test1, &db[i].test2, &db[i].test3 )) != EOF ){
            if(stringsEqual(db[i].lastName, lName)){
                printf("Test 3 Score: %d\n", db[i].test3);
                studentFound = true;
                break;
                }
            i++;
        }
    }
    if(!studentFound){
        printf("No student found.\n");
    }
    rewind(fp);
}

void main(int argc, char *argv[]){
    Database db[100];
    char *fileName = "studentDatabase.txt";

    FILE *readStream = fopen(fileName, "r");
    if(readStream == NULL){
        printf("ERROR OPENING FILE\n");
        exit(1);
    }
    if(argc == 2){
        fileReader(readStream,db,4);
    }
    if(argc == 3){
        if(stringsEqual(argv[1], "Av")){
            fileReader2(readStream, db, 1,argv[2]);
        }
        else if(stringsEqual(argv[1], "T1")){
            fileReader2(readStream, db, 2,argv[2]);
        }
        else if(stringsEqual(argv[1], "T2")){
            fileReader2(readStream, db, 3,argv[2]);
        }
        else if(stringsEqual(argv[1], "T3")){
            fileReader2(readStream, db, 4,argv[2]);
        }
        
        else if(stringsEqual(argv[1], "CAV")){
            if(stringsEqual(argv[2], "T1")){
                fileReader(readStream,db,1);
            }
            else if(stringsEqual(argv[2], "T2")){
                fileReader(readStream,db,2);
            }
            else if(stringsEqual(argv[2], "T3")){
                fileReader(readStream,db,3);
            }
            else{
                printf("No record for this command\n");
            }
        }
        
        else{
            printf("No record for this command\n");
        }
    }
}