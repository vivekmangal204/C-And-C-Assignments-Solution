#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter 3 No's: ");
    scanf("%d%d%d",&a,&b,&c);
    float avg;
    avg = (a+b+c)/3.0;

    printf("Avg of 3 No's is : %f",avg);
    return 0;
}