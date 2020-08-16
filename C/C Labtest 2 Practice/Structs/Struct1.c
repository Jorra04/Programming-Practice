#include <stdio.h>
#include <stdlib.h>
struct Point
    {
        int xCoor;
        int yCoor;
        char *name;
    }point;


    struct Person
    {
        char * name;
        int age;
        int weight;

    }p1;

    struct Student
    {
        char * name;
        int year;
        float grade;
        int courses;
        
    }s1;

void changeCoor(struct Point *p);

void changeName(struct Point *p);

struct Point changeX(int newVal);
void main(){

    struct Point point2;
    point.name = "coordinate 1";
    point.xCoor = 5;
    point.yCoor  =7;

    point2.name = "Coordinate 2";
    point2.xCoor = 10;
    point2.yCoor = 14;


    printf("Coordinate name \t Xcoor \t yCoor\n");
    printf("%s \t\t %d \t %d \n",point.name,point.xCoor,point.yCoor);
    printf("%s \t\t %d \t %d \n",point2.name,point2.xCoor,point2.yCoor);

    printf("======================================\n");
    point = changeX(111); //works in a weird way, it basically reassigns the struct 
    //to this new value. Wouldnt want to do this.
    /*
    While its possible to pass all attributes of a struct to a function, this can 
    get tedious and nearly impossible to follow with large structures.
    The best way to manipulate attributes of a structure is to make a pointer to the structure
    and pass that to the function. That way, the function has access to all of the attributes
    and can make the necessary changes.
    */
    printf("Coordinate name \t Xcoor \t yCoor\n");
    printf("%s \t\t %d \t %d \n",point.name,point.xCoor,point.yCoor);
    printf("%s \t\t %d \t %d \n",point2.name,point2.xCoor,point2.yCoor);

    printf("======================================\n");


    struct Point *pPoint;
    pPoint = &point;
    changeCoor(pPoint);
    printf("Coordincate name \t Xcoor \t yCoor\n");
    printf("%s \t\t %d \t %d \n",point.name,point.xCoor,point.yCoor);
    printf("%s \t\t %d \t %d \n",point2.name,point2.xCoor,point2.yCoor);

    printf("======================================\n");
    changeName(pPoint);
    printf("Coordincate name \t Xcoor \t yCoor\n");
    printf("%s \t\t %d \t %d \n",point.name,point.xCoor,point.yCoor);
    printf("%s \t\t %d \t %d \n",point2.name,point2.xCoor,point2.yCoor);

    printf("======================================\n");

    p1.name = "John Doe";
    p1.age = 35;
    p1.weight = 85;
    struct Person p2;
    p2.name = "Jane Smith";
    p2.age = 29;
    p2.weight = 68;
    printf("Name \t\t Age \t Weight\n");
    printf("%s \t %d \t %d \n",p1.name,p1.age,p1.weight);
    printf("%s \t %d \t %d \n",p2.name,p2.age,p2.weight);

    printf("======================================\n");
    s1.courses = 5;
    s1.name = "Edgar Alan";
    s1.grade = 7.56;
    s1.year = 3;

    struct Student s2;
    s2.courses = 3;
    s2.name = "Avatar Aang";
    s2.grade = 8.79;    
    s2.year = 4;
    printf("Name \t\t Year \t GPA \t Courses\n");
    printf("%s \t %d \t %.2f \t %d\n",s1.name,s1.year,s1.grade,s1.courses);
    printf("%s \t %d \t %.2f \t %d\n",s2.name,s2.year,s2.grade,s2.courses);

}


void changeCoor(struct Point *p){
    p->xCoor = 500; // -> gets the member of the struct that p points to
}

void changeName(struct Point *p){
    p->name = "Coordinate 3";
}


struct Point changeX(int newVal){
    struct Point p;
    p.xCoor = newVal;
}
