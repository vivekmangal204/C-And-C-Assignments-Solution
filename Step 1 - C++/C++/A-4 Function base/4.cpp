// Define a C++ Function to print Pascal Triangle upto N Lines.
#include<iostream>
using namespace std;
int fact(int n)
{
    int f = 1;
    while(n){
        f = f*n;
        n--;
    }
    return f;
}
int combi(int n,int r)
{
    return fact(n)/fact(n-r)/fact(r);
}
void printpascalTriangle(int lines)
{
    int i,j,gap,r;
    for(i=1;i<=lines;i++)
    {
        gap=1;
        r=0;
        for(j=1;j<=2*lines-1;j++)
        {
            if(j>= lines+1 - i && j<=lines-1 + i)
            {
                if(gap)
                cout<<combi(i-1,r++);
                else
                cout<<" ";
                gap = 1 - gap;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
int main()
{
    int N;
    cout<<"Enter N: ";
    cin>>N;

    printpascalTriangle(N);
    return 0;
}