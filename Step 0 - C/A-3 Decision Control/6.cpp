// Nature of Roots : Checked by D (Discriminant)
#include<stdio.h>
int main(){
    printf("-----Program To Check Nature of Roots-----\n");
    int a,b,c,d;
    printf("Enter Coefficient of x^2: ");
    scanf("%d",&a);
    printf("Enter Coefficient of x: ");
    scanf("%d",&b);
    printf("Enter Constant: ");
    scanf("%d",&c);

    d = (b*b - (4*a*c));

    if(d>0){
    printf("Real And Distinct Roots");
    }
    else if(d<0){
    printf("Imaginary roots");
    }
    else{
    printf("Equal roots");
    }

    return 0;
}