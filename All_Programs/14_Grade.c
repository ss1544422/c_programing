#include <stdio.h>
int main() {
    float s1,s2,s3,s4,s5,Avg;
    printf("Enter the marks of s1,s2,s3,s4,s5:\n");
scanf("%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5);
Avg=(s1+s2+s3+s4+s5)/5;
printf("Average mark: %.2f\n", Avg);
char grade;
if(Avg>80){
        printf("grade A");
    }else if(Avg>60){
        printf("grade B");
    }else if(Avg>40){
        printf("grade C");
    }else{
        printf("grade D");
    }
    return 0;
}
