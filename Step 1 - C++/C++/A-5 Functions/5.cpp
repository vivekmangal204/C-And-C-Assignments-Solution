#include<iostream>
using namespace std;
float add(int, float);
float add(float, int);
int add(int,int);
float add(float,float);

float add(int x,float y){
    return x+y;
}
float add(float x,int y){
    return x+y;
}
int add(int x,int y){
    return x+y;
}
float add(float x,float y){
    return x+y;
}

int main(){
    float x,y;
    cout<<"Enter two Numbers: ";
    cin>>x>>y;
    cout<<add(x,y);
    return 0;
}