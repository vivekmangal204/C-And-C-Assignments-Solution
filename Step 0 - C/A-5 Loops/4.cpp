#include<stdio.h>
int main(){
    int n;
    int fact = 1;
    printf("Enter N: ");
    scanf("%d",&n);

    if(n==0){
        printf("Factorial of 0 is 1");
    }
    else{
    for(int i=1;i<n;i++)
    fact = fact + fact*i;
    printf("Factorial of %d is %d",n,fact);
    }

    return 0;
}