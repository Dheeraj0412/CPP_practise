//write a program to calculate pow base and exponent enter by user.

#include<iostream>
using namespace std;

int pow(int a,int b)
{
    if (b != 0)
    {
        return (a*pow(a,b-1));
    }
    else
    {
        return 1;
    }
    
}

int main(){
    int a,b;
    cout<<"Enter Base: "<<endl;
    cin>>a;
    cout<<"Enter power: "<<endl;
    cin>>b;
    cout<<"="<<pow(a,b);
    return 0;
}