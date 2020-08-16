#include <stdlib.h>
#include <stdio.h>

void main(){
    int n = 0;
    int  i = 0;
    scanf("%d", &n);   
    float myArr[n];

    for(i = 0; i < n; i ++){
        scanf("%f", &myArr[i]);
    }

    float diff = myArr[1]/ myArr[0];
    for(i = 1 ; i < n; i ++ ){
        if(myArr[i]/myArr[i-1] != diff ){
            goto notGeo;
        }
    }
    goto geo;

    geo:
    printf("Geo!\n");
    return;


    notGeo:
    printf("not Geo\n");
    return;
}