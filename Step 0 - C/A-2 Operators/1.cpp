#include<stdio.h>
int main(){
    int a,b,temp;
    printf("Enter a and b: ");
    scanf("%d%d",&a,&b);
    temp = a;
    a = b;
    b = temp;
    printf("a and b are %d and %d",a,b);
    return 0;
}