#include <stdio.h>
#include "main.h"

void age1() {
    // Write C code here
    int age1;
    printf("enter the age");
    scanf("%d", &age1);
    if(age1<5){
       printf("nice kid"); 
    }else if(age1<=10){
        printf("nice child"); 
    }else if(age1<=15){
        printf("teenage"); 
    }else if(age1<=25){
        printf("young age"); 
    }else if(age1<=50){
        printf("middle age"); 
    }else {
        printf("old age");
    }
}
