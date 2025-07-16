// Define a C++ Function to find the highest value digit in a given number.
#include<iostream>
using namespace std;
int Highvalue(int);
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<Highvalue(n);
    return 0;
}
int Highvalue(int x)
{
    int D = 0;
    while(x){
        int y = x%10;
        if(y > D)
            D = y;
        x = x/10; // Happens everyone Don't Write in ELSE
    }
    return D;
}