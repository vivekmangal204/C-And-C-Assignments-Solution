#include<stdio.h>
int main(){
    int a;
    printf("Enter a Number: ");
    scanf("%d",&a);
    if(a%2==0)
        printf("%d is an Even Number",a);
    else
        printf("%d is an Odd Number",a);
    return 0;
}