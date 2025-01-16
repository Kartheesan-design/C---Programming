//C Program to Find the Number of Integers Divisible by 5


#include <stdio.h>

int main(){
    int a,count = 0;
    
    printf("Enter the value of a:");
    scanf("%d",&a);
    for(int i = 1;i <= a;i++){
        if( i % 5 == 0){
            count = count + 1;
        }
    }
    
    printf("The number of integers that are divisible by 5:%d \n",count);
    
}
