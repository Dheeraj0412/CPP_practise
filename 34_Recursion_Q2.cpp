//write a program to find factorial of a given number using recursion.

#include<iostream>
using namespace std;

int factorial(int n)
{
    if (n<=1)
    {
        return 1;
    }
    return n*factorial(n-1);
}

int main(){
    int a;
    cout<<"Enter Number: "<<endl;
    cin>>a;
    cout<<"Factorial of a given number: "<<factorial(a);
    return 0;
}