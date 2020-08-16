#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
//checks if two strings are equal.
bool stringsEqual(char* str1, char * str2){
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
//checks if a function is upper case.
bool isUpperCase(char c ){
    if(c >= 65 && c <= 90){
        return true;
    }
    return false;
}
//checks if a function is lowercase 
bool isLowerCase(char c ){
    if(c >= 97 && c <= 122){
        return true;
    }
    return false;
}
//checks if character is a vowel or not.
bool isVowel(char c){
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}
//check to see if a array contains a val
bool contains(int arr[], int size, int val){
    int i = 0;
    for(i = 0 ; i < size; i ++){
        if(arr[i] == val){
            printf("arr1 contains: %d\n", val);
            return true;
        }
    }
    printf("arr1 does not contain: %d\n", val);
    return false;
}
//get the length of a line.
int len(char * str){
    int i = 0;
    while(str[i] != '\0'){
        i++;
    }
    return i;
}

//Finds the largest number in an integer array.
int maxOf(int arr[], int size){
    int max = arr[0];
    int  i = 0;
    for(i = 0; i < size; i ++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    return max;
}
//Finds the number of occurences of a value in an array
int numOccur(int arr[], int size, int val){
    int i = 0;
    int count = 0;
    for(i = 0 ; i < size; i ++){
        if(arr[i] == val){
            count ++;
        }
    }
    return count;
}
//Returns the index of a given val. If multiple items share this, it returns the first.
int indexOf(int arr[], int size,int val){
    int i =0;
    for(i = 0; i < size; i ++){
        if(arr[i] == val){
            return i;
        }
    }
    return -1;
}
//Checks to see if all characters are upper case.
bool allUppercase(char *str){
    int i =0;
    for(i = 0; i < strlen(str); i ++){
        if(!(str[i] >= 65 && str[i] <= 90)){
            // printf("%c\n",str[i]);
            return false;
        }
    }
    return true;
}
//Checks to see if all characters are lower case.
bool allLowercase(char *str){
    int i =0;
    for(i = 0; i < strlen(str); i ++){
        if(!(str[i] >= 97 && str[i] <= 122)){
            // printf("%c\n",str[i]);
            return false;
        }
    }
    return true;
}

void sorter(int *arr, int size){
    bool isSorted = false;
    while(!isSorted){
        isSorted = true;
        int i = 0;
        for(i = 0; i < size; i ++){
            if(arr[i] < arr[i-1]){
                int tmp = arr[i];
                arr[i] = arr[i-1];
                arr[i-1] = tmp;
                isSorted = false;
            }
        }
    }
}

void main(){
    int arr1[5] = {4,5,1,3,6};
    sorter(arr1, 5);
    for(int i = 0; i < 5; i ++){
        printf("%d ", arr1[i]);
    }
}