// Define a C++ Function to calculate x raised to the power y.
#include<iostream>
using namespace std;
int power(int,int);

int main() {
    int x,y;
    cout<<"Enter x: ";
    cin>>x;
    cout<<"Enter y: ";
    cin>>y;
    cout<<"x raised to the power y is "<<power(x,y);
    return 0;
}
int power(int x,int y)
{
    int result = 1;
    for(int i=1;i<=y;i++)
    result *= x;
    return result;
}