#include<stdio.h>
int main(){
    float si,p,r,t;
    printf("Enter Principal Amount: ");
    scanf("%f",&p);
    printf("Enter rate in Percent: ");
    scanf("%f",&r);
    printf("Enter time in years: ");
    scanf("%f",&t);
    
    si = (p*r*t)/100.0;

    printf("Simple interest is : %f",si);
    return 0;
}