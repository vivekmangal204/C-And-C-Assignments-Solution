#include<stdio.h>
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    printf("%d ",2*i);
    printf("\n");
    for(int i=n;i>=1;i--)
    printf("%d ",2*i);

    return 0;
}