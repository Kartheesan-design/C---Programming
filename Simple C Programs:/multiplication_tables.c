//C Program to Print Multiplication Table

#include <stdio.h>

int main(){
    int a;
    printf("Enter your number:");
    scanf("%d",&a);
    for(int i = 1;i < 21;i++){
        printf("%d  x  %d = %d \n",i,a,(i*a));   
    }
}
