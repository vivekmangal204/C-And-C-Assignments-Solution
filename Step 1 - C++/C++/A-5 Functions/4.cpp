#include<iostream>
using namespace std;
int max(int, int);
float max(float, float);

int max(int x,int y){
    if(x>y)
    return x;
    else
    return y;
}
float max(float a,float b){
    if(a>b)
    return a;
    else
    return b;
}

int main(){
    float a,b;
    cout<<"Enter two Numbers: ";
    cin>>a>>b;
    cout<<max(a,b);
    return 0;
}