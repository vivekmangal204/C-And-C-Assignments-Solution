#include<stdio.h>
int main(){
    int temp, a, b;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
    temp = a;
    a = b;
    b = temp;
    printf("a : %d\n", a);
    printf("b : %d", b);
}