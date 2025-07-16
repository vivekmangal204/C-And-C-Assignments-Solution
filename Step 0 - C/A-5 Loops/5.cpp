#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    int count = 1;
    int digit;
    while(n==0){
        n = n/10;
        digit = count++;
    }
    printf("digits: %d",digit);
    return 0;
}