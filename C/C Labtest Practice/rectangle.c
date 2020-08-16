#include <stdio.h>
#include <stdlib.h>

/*
The programming language C is pass by value, so you cannot pass a function attibutes of a struct to change them.
*/

typedef struct rectangle
{
    int x,y;
    // int area;

    char* name;
}Rectangle;




// void setCoordinates(struct rectangle r1, int x, int y){ //Works in pass by reference languages like java and C# but not in 
// // pass by value programming languages.
//     r1.x = x;
//     r1.y = y;
//     printf("Initial coordinates are: (%d, %d)\n",r1.x,r1.y);
//     return;
// }

struct rectangle setCoordinates(struct rectangle r1, int x, int y){ //the way to do it in C is to have it return type Struct rectangle, and
//assign it to the variale you want. 
    r1.x = x;
    r1.y = y;
    return r1;
}

int getXCoor(struct rectangle r1){
    return r1.x;
}
int getYCoor(struct rectangle r1){
    return r1.y;
}

int getArea(struct rectangle r1){
    return r1.x* r1.y;
}

void main(){
    struct rectangle r;
    printf("Initial coordinates are: (%d, %d)\n",r.x,r.y);
    r = setCoordinates(r,5,5);
    // printf("Final coordinates are: (%d, %d)\n",r.x,r.y);

    int area = getArea(r);
    printf("%d\n",area);

    printf("Final coordinates are: (%d, %d)\n",r.x,r.y);

    printf("%d\n",getXCoor(r)); //works because you pass a copy of the current struct. 

    setCoordinates(r,10,10);
    printf("After changing (%d, %d)\n",getXCoor(r),getYCoor(r)); // will print (5,5) not (10, 10). 
    //This is because the state of r was not changed by setCoordinates(r)
}
