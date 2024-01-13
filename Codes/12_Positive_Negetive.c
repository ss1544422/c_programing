#include <stdio.h>

void pos_neg() {
    int a;
    printf("Enter the number:\n");
    scanf("%d", &a);

    if(a>0){
        printf("%dis  positive number",a);
    }else{

    printf("%dis negative number",a);
    }
}
