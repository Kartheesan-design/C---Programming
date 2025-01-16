//C Program to Find the Largest Number Among Three Numbers

#include <stdio.h>

int main(){
    int a,b,c;
    
    printf("Enter the First number:");
    scanf("%d",&a);
    printf("Enter the Second number:");
    scanf("%d",&b);
    printf("Enter the Third number:");
    scanf("%d",&c);
    if(a > b && a > c){
        printf("%d is the largest number",a);
    }
    else if(b > a && b > c){
        printf("%d is the largest number",b);
    }
    else{
        printf("%d is the largest number",c);
    }
    
}
