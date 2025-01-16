//C Program to Swap Two Numbers

#include <stdio.h>

int main(){
    int a,b,swap;
    
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    swap = a;
    a = b;
    b = swap;
    
    printf("Enter the value of a:%d \n",a);
    printf("Enter the value of b:%d",b);
}
