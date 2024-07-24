//write a program to calulate gcd of two numbers using recursion

#include<iostream>
using namespace std;

int gcd(int a,int b)
{
    if (a%b==0)
    {
        return b;
    }
    return gcd(b,a%b);
}

int main(){
    int a;
    int b;
    cout<<"Enter number1 "<<endl;
    cin>>a;
    cout<<"Enter number2 "<<endl;
    cin>>b;
    cout<<"GCD for a given number: "<<gcd(a,b);
    return 0;
}