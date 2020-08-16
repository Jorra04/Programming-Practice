#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
Structs 2.0! here we will learn nested structs, and linked lists.
Run the program with the flag -lm at the end to load the math functions into it.
*/

typedef struct{ 
    int x; 
    int y;
    char* name;
    }Point;
typedef struct{
    Point a;
    Point b;
    char* lineSegName;
    } MyLine;

void printStruct(MyLine *line);

double distance(Point *point);
void main(){
    MyLine line;
    line.a.x = 0;
    line.a.y = 5;
    line.a.name = "Point 1";
    line.b.x = 10;
    line.b.y = 20;
    line.b.name = "Point 2";
    line.lineSegName = "AB";
    MyLine *pLine;
    pLine = &line;
    printStruct(pLine);

    MyLine line2;
    line2.a.name = "Point 1";
    line2.a.x = 501;
    line2.a.y = 1245;
    line2.b.name = "Point 2";
    line2.b.x = 1203;
    line2.b.y = 132;
    line2.lineSegName = "CD";
    MyLine *pLine2;
    pLine2 = &line2;
    printStruct(pLine2);
}


void printStruct(MyLine *line){
    Point *pLineA;
    Point *pLineB;
    pLineA = &line->a;
    pLineB = &line->b;
    double dist  = distance(pLineA);
    double dist2 = distance(pLineB);
    printf("Line name \t Point Name \t\t x Value \t y Value \t Distance\n");
    printf("%s \t\t %s \t\t %d \t\t %d \t\t %.3f\n",line->lineSegName,line->a.name,line->a.x, line->a.y
    ,dist);
    printf("%s \t\t %s \t\t %d \t\t %d \t\t %.3f\n",line->lineSegName,line->b.name,line->b.x, line->b.y
    ,dist2);
    printf("=====================================================================================\n");
}


double distance(Point *point){
    double val1 = pow(point->x,2);
    double val2 = pow(point->y,2);
    double squarer = val1+val2;
    return sqrt(squarer);

    
}