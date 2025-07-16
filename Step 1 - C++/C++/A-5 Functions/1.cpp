#include<iostream>
using namespace std;

void swap(int &x,int &y){
    x = x + y; // x = 9
    y = x - y; // y = 9 - 4 = 5
    x = x - y; // y = 9 - 5 = 4
    cout<<"a is "<<x<<" b is "<<y;
}

int main(){
    int a,b;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    swap(a,b);
    return 0;
}