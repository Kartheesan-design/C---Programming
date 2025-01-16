//C Program to Find the Sum of Even and Odd Numbers

#include <stdio.h>

int main(){
    int N,even_sum = 0,odd_sum = 0;
    printf("Enter your number:");
    scanf("%d",&N);
    
    for(int i = 1;i <= N;i++){
        if(i % 2 == 0){
            even_sum = i + even_sum;
        }
        else{
            odd_sum = i + odd_sum;
        }
    }

    printf("even sum: %d \n",even_sum);
    printf("odd sum:%d",odd_sum);
}
