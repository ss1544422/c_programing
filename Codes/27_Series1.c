#include <stdio.h>

void series1() {
    int r,count;
    printf("enter range");
    scanf("%d", &r);
    count=1;
    while (count <= r) {
       
            
           printf("%d ", count*5); 
        
        
        count++;
    }
}
