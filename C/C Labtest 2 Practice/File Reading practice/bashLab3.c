#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
typedef struct{
    char firstName[50];
    char lastName[50];
    char courseCode[10];
    char grade[5];
}Record;

bool stringsEqual(char *str1, char *str2){
    if(strlen(str1)!= strlen(str2)){
        return false;
    }
    int i = 0;
    for(i = 0; i < strlen(str1); i ++){
        if(str1[i] != str2[i]){
            return false;
        }
    }
    return true;
}

void main(int argc, char *argv[]){
    char *fileName = "studentRecords.txt";
    FILE *readFile = fopen(fileName, "r");
    char *line;
    line = (char*)calloc(200,sizeof(char));
    int count = 0;
    Record studentRec[150];
    if(!readFile){
        printf("Error\n");
        exit(1);
    }
    if(argc == 1){
        printf("Need a Command line argument\n");
        exit(1);
    }
    else if(argc > 4){
        printf("Too many command line arguments.\n");
        exit(1);
    }
    // printf("%s\n",argv[1]);
    if(stringsEqual(argv[1], "-count") ){
        while( (fgets(line, 200, readFile)) != NULL ){
            count++;
        }
        printf("Count: %d\n",count);
    }
    if(stringsEqual(argv[1],"-f")){
        int i = 0;
        while( fscanf(readFile, "%s %s %s %s", studentRec[i].firstName,studentRec[i].lastName,
        studentRec[i].courseCode,studentRec[i].grade ) != EOF){
            if(stringsEqual(argv[2],studentRec[i].firstName) &&
            stringsEqual(argv[3],studentRec[i].lastName)){
                if( studentRec[i].grade == 0 ){
                    printf("%s\tin progress\n",studentRec[i].courseCode);    
                }
                else{
                    printf("%s\t%s\n",studentRec[i].courseCode,studentRec[i].grade);
                }
                
            }
            i++;
        }
    }
    if(stringsEqual(argv[1], "-g")){
        int i = 0;
        while( fscanf(readFile, "%s %s %s %s", studentRec[i].firstName,studentRec[i].lastName,
        studentRec[i].courseCode,studentRec[i].grade ) != EOF){
            if(stringsEqual(argv[2],studentRec[i].firstName) &&
            stringsEqual(argv[3],studentRec[i].lastName)){
                if(!studentRec[i].grade == 0 ){
                    printf("%s\t%s\n",studentRec[i].courseCode,studentRec[i].grade);    
                }
                
            }
            i++;
        }
    }
    if(stringsEqual(argv[1], "-c")){
        int count2 = 0;
        int i = 0;
        while( fscanf(readFile, "%s",studentRec[i].courseCode) != EOF){
            if(stringsEqual(studentRec[i].courseCode, argv[2])){
                count2 ++;
            }
            i++;
        }

        printf("Students enrolled in '%s': %d\n",argv[2],count2);
    }
    if(stringsEqual(argv[1], "-list")){
        int count2 = 0;
        int i = 0;
        while( fscanf(readFile, "%s %s",studentRec[i].courseCode, studentRec[i].grade) != EOF){
            if(stringsEqual(studentRec[i].courseCode, argv[2]) &&
            stringsEqual(studentRec[i].grade, argv[3])){
                count2 ++;
            }
            i++;
        }

        printf("Students enrolled in '%s' with grade '%s' is: %d\n",argv[2],argv[3],count2);
    }
}