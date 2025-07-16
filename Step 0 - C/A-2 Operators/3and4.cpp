#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Last digit is %d\n",n%10);
    printf("Number without last digit is %d",n/10);
    return 0;
}