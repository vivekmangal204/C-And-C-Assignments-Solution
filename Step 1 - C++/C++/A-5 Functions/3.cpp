#include<iostream>
using namespace std;
float area(int);
int area(int,int);
float area(float,float);

float area(int r){
    return 3.14*r*r;
}
int area(int x,int y){
    return x*y;
}
float area(float a,float b){
    return 0.5*a*b;
}

int main(){
    int r;
    int L,B;
    float b,h;
    cout<<"Enter r: ";
    cin>>r;
    cout<<area(r)<<endl;
    cout<<"Enter l and b: ";
    cin>>L>>B;
    cout<<area(L,B)<<endl;
    cout<<"Enter base and height: ";
    cin>>b>>h;
    cout<<area(b,h);
    return 0;
}

