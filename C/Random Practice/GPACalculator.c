#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
    /* data */
    int gradePoint;
    int creditWeight;
    char name[10];
}GPACalc;




int main(){
    FILE *readFile = fopen("courses.txt", "r");
    if(!readFile) {
        exit(1);
    }
    GPACalc gp[100];
    int i = 0;
    float GPA = 0;
    float runSum = 0;
    float totalCreds = 0;
    while( (fscanf(readFile, "%s %d %d", gp[i].name, &gp[i].creditWeight, &gp[i].gradePoint )) != EOF ){
        runSum = runSum + (gp[i].creditWeight * gp[i].gradePoint );
        totalCreds += gp[i].creditWeight;
        i++;
    }

    GPA = runSum / totalCreds;

    printf("%.2f\n", GPA);

    return 0;
}