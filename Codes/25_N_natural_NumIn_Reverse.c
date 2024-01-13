#include <stdio.h>
#include "main.h"

void nuturalReverse() {
    int num,n;
    printf("enter the range");
    scanf("%d", &n);
    num=n;
    while (num>0) {
        
           printf("%d ", num); 
       
        num--;
    }
}
