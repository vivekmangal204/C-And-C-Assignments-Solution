// Define a C++ Function to print all prime numbers b/w two given numbers.
#include<iostream>
using namespace std;
int prime(int,int);
int main(){
    int x,y;
    cout<<"Enter two Numbers: ";
    cin>>x>>y;
    cout<<"Prime Numbers b/w these Numbers are : ";
    prime(x,y);
    return 0;
}

int prime(int x,int y)
{
    for(int i=x+1;i<y;i++)
    {
        bool isprime = true;
        if(i<2) continue; // Skips numbers less than 2
        for(int j=2;j<i;j++){
        if(i%j==0){
            isprime = false;
            break;
        }
    
        if(isprime)
        cout<<i<<" ";
    }
    return 0;
}
// bool isprime = true; ==> This is the main thing i am missing