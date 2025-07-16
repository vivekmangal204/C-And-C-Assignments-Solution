#include<stdio.h>
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);

    printf("Square of First N Natural Numbers are: ");
    for(int i=1;i<=n;i++)
    printf("%d ",i*i);
    printf("\n");
    int sum = 0;
    for(int i=1;i<=n;i++)
    sum = sum + i;
    printf("Sum of First N Natural numbers is: %d",sum);
    return 0;

}