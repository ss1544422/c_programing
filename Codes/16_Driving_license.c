#include <stdio.h>
#include "main.h"

void age() {
    // Write C code here
    int age;
    printf("enter the age");
    scanf("%d", &age);
    if(age>18){
       printf("eligible for driving license"); 
    }else {
        printf("not eligible for driving license"); 
    }
    }