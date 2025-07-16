#include<stdio.h>
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);

    int sumcube = 0;
    for(int i=1;i<=n;i++)
    sumcube = sumcube + i*i*i;
    printf("Sum of Cubes of First N Natural numbers is: %d\n",sumcube);

    int sumsq = 0;
    for(int i=1;i<=n;i++)
    sumsq = sumsq + i*i;
    printf("Sum of Squares of First N Natural numbers is: %d\n",sumsq);

    int sumodd = 0;
    for(int i=1;i<=n;i=i+2)
    sumodd = sumodd + i;
    printf("Sum of First N Odd Natural numbers is: %d",sumodd);
}