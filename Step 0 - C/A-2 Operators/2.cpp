#include<stdio.h>
int main(){
    int a,b;
    printf("Enter a and b: ");
    scanf("%d%d",&a,&b); // a = 10 b = 20
    a = a + b; // a = 10 + 20 // a = 30
    b = a - b; // b = 30 - 20 = 10
    a = a - b; // a = 30 - 10 = 20
    printf("a and b are %d and %d",a,b);
    return 0;
}