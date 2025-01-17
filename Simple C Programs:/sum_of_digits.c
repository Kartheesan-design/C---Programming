//Sum of Digits Program in C

#include <stdio.h>

int main(){
    int a,sum = 0;
    printf("Enter your number:");
    scanf("%d",&a);
    while(a != 0){
        sum += a % 10;
        a = a / 10;
    }
    printf("Sum : %d",sum);
}
