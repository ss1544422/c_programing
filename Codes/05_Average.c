#include <stdio.h>
#include "main.h"

void Avg() {
    float a,b,c;
    float Avg;
        

    printf("enter 3 numbers");
    scanf("%f%f%f",&a,&b,&c);
    Avg = (a+b+c)/3;
    printf("average  of numbers is%f",Avg);

}
