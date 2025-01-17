//C Program to Increment by 1 to all the Digits of a Given Integer

#include <stdio.h>

int main(){
    int a,sum = 0;
    printf("Enter your number:");
    scanf("%d",&a);
    while(a != 0){
        sum += (a % 10)+1;
        a = a / 10;
    }
    printf("Sum : %d",sum);
}
