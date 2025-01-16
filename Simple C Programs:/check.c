//C program to Check Whether a Number is Positive or Negative

#include <stdio.h>

int main(){
    int n;
    printf("Enter your number:");
    scanf("%d",&n);
    
    if(n > 0){
        printf("%d is a positive number",n);
    }
    else if(n < 0){
        printf("%d is a negative number",n);
    }
    else{
        printf("ZERO");
    }
    
    return 0;
}
