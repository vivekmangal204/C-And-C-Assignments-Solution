//WAP in C++ to find the maximum of two numbers.
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    if(a>b)
        cout<<"Maximum is : "<<a;
    else
        cout<<"Maximum is : "<<b;
    return 0;
}