// Online C compiler to run C program online
#include <stdio.h>

void pattern2() {
    int row=5,rowcount=1, starcount;
    
    while(rowcount<=row){
        for(starcount=1; starcount<=rowcount; starcount++){
            printf("*");
        }
        rowcount++;
        printf("\n");
        
    }
}
