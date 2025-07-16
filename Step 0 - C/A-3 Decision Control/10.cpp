#include<stdio.h>
int main(){
    int M,E,P,C,H;
    printf("To Get Your Division Enter Marks out of 100\n");
    printf("Enter Marks of Physics:");
    scanf("%d",&P);
    printf("Enter Marks of Chemistry:");
    scanf("%d",&C);
    printf("Enter Marks of Math:");
    scanf("%d",&M);
    printf("Enter Marks of English:");
    scanf("%d",&E);
    printf("Enter Marks of Hindi:");
    scanf("%d",&H);

    int r;
    r = (P+C+M+E+H)/5;
    printf("Percentage: %d\n", r);
    if(r>=40)
    printf("Result : PASS\n");
    else
    printf("Result : FAIL\n");

    if(r>=40&&r<60)
    printf("Division : C");
    else if(r>=60&&r<80)
    printf("Division : B");
    else
    printf("Division : A");

    return 0;
}