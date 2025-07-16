//WAP in C++ to add all the numbers of an array of size 10
#include<iostream>
using namespace std;
int main(){
    int arr[10];
    int i;
    for(i=0;i<10;i++)
    {
        cout<<"Enter element "<<i+1<<" : ";
        cin>>arr[i];
    }
    int sum = 0;
    for(i=0;i<10;i++)
    {
        sum = sum + arr[i];
    }
    cout<<"Sum of all elements are: "<<sum<<endl;
    return 0;
}