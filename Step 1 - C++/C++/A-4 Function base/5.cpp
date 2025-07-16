// Define a C++ Function to check whether a given number is a term in fibonacci series or not.
#include<iostream>
using namespace std;
int infibonacci(int n)
{
    int a = -1, b= 1, c , i;
    for(i=0;c<=n;i++)
    {
        c = a+b;
        if(n==c)
            return 1;
        a=b;
        b=c;
    }
    return 0;
}
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(infibonacci(n))
        cout<<n<<" is in fibonacci Series";
    else
        cout<<n<<" is not in fibonacci Series";
    return 0;
}