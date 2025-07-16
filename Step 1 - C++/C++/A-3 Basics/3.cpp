//WAP to swap values of two int variables without using 3rd variable.
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter a: "; //a = 10
    cin>>a;
    cout<<"Enter b: "; // b = 20
    cin>>b;
    a = a + b; // a = 30
    b = a - b; // b = 30 - 20 = 10
    a = a - b; // a = 30 - 10 = 20
    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b;
    return 0;
}