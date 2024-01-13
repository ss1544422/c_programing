
#include <stdio.h>

void pattern3() {
    int rowcount=5, i;
    
    while(rowcount>0){
        for(i=1; i<=rowcount; i++){
            printf("A");
        }
        rowcount--;
        printf("\n");
        
    }
}
