#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct {
    char firstName[50];
    char lastName[50];
    int grade;
}StudentRecord;

int minOf(StudentRecord * record, int n){
    int  i = 0;
    int min = record[0].grade;
    for(i = 0; i < n; i ++){
        if(record[i].grade < min){
            min = record[i].grade;
            break;
        }
    }
    return i;
}

void main(){
    StudentRecord records [100];
    char *readFile = "records.txt";

    FILE *readStream = fopen(readFile,"r");

    if(!readStream){
        printf("Error opening the file.\n");
        exit(1);
    }
    int i = 0;
    while(fscanf(readStream,"%s %s %d",records[i].firstName, records[i].lastName, &records[i].grade) !=EOF){
        // printf("%s %s %d\n",records[i].firstName, records[i].lastName, records[i].grade);
        i++;
    }
    // printf("there are %d records in the file\n",i);
    int min = minOf(records, i);
    char * fName = (char*)calloc(50,sizeof(char));
    char * lName =(char*)calloc(50,sizeof(char));;
    fName = records[min].firstName;
    lName = records[min].lastName;
    int lowestGrade = records[min].grade;
    printf("Lowest grade of the file belongs to: %s %s\nGrade: %d\n", fName,lName,lowestGrade);

}