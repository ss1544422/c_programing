#include <stdio.h>
#include "main.h"

void perimeter() {
    float pi=3.14,p,r;
        

    printf("enter the radius of circle");
    scanf("%f",&r);
    double perimeter; 
    perimeter = 2 *pi * r;
    printf("perimeter of circle is%lf",perimeter);

}
