#include<stdio.h>
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);

    for(int i=1;i<=n;i=i+2)
    printf("%d ",i);
    for(int i=n;i>=1;i=i-2)
    printf("%d ",i-1);

    return 0;
}