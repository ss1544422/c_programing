#include <stdio.h>
#include "main.h"

void sum1() {
    int i1, i2, i3, i4, i5, i6,sum1;

    printf("Enter the values of current:\n");
    scanf("%d%d%d%d%d%d", &i1, &i2, &i3, &i4, &i5, &i6);

    sum1=i1+i2-i3+i4+i5-i6;
    printf("sum of current:%d",sum1);
}
