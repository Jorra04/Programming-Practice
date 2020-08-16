#include <stdio.h>
#include <stdlib.h>
/*
easy way to get the number of lines in a file.
*/


void main(){
    char c;
    // char line[150];
    char * readFileName = "test.txt";
    char *line;
    line = (char*) calloc(150,sizeof(char));
    FILE *fp = fopen(readFileName,"r");
    int count = 0;
    while(!feof(fp)){ //while we're not at the end of a file.
        fgets(line,150,fp); //get the contents of the line and dump
                            // at a max, 150 characters into it.
        count++;
    }

    printf("The number of lines in the textfile is: %d\n",count);

    fclose(fp);
}