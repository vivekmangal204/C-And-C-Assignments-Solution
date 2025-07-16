#include<stdio.h>
int main(){
    int n;
    printf("Enter a Number: ");
    scanf("%d",&n);
    if(n>0)
    printf("%d is positive",n);
    else if(n<0)
    printf("%d is negative",n);
    else
    printf("0");
    return 0;
}