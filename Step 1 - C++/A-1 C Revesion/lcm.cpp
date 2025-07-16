// Again Do and Dry Run

#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two Numbers: ");
    scanf("%d%d",&a,&b);
    int L;
    for(L = (a>b?a:b) ; L<=a*b ; L = L + (a>b?a:b))
        if(L%a==0 && L%b==0)
        break;

    printf("LCM is %d",L);
    return 0;
}