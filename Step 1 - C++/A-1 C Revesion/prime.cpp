#include<stdio.h>
int isprime(int);
int main(){
    int x;
    printf("Enter a Number: ");
    scanf("%d",&x);
    printf("%d",isprime(x));
}
int isprime(int a){
    for(int i=2;i<a;i++)
        if(a%i==0)
        return 0;
    return 1;
}