#include <stdio.h>
#include <stdlib.h>


// char * deleteblankspaces(char *s)
// {
//     char *s2;
//     int i,j = 0;
//     while(s[i] != '\0'){
//         if(s[i] == ' '){
//             s2[j] = s[i];
//             j++;
//         }
//         i++;
//     }

//    return s2;
// }

void main(){
    char str1 [50];
    char str2 [50];
    fgets(str1,sizeof(str1),stdin);
    int i;
    for(i = 0; str1[i] != '\0'; i ++){
        printf("%c\n",str1[i]);
    }
    printf("----------\n");
    int j;
    deleteblankspaces(str1);

    for(j= 0; str1[j] != '\0'; j ++){
        printf("%c\n",str1[j]);
    }
}
