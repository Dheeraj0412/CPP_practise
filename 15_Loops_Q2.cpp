//write a program to find factorial of a given number.

#include<iostream>
using namespace std;

///recursion se bhi krskte h lekin filhal loops se

int num(int b)
{
    int c = 1;
    for (int i = 1; i <= b; i++)
    {
        c = c * i;    
    }
    return c; 
}

int main(){
    int a;
    cout<<"Enter number: "<<endl;
    cin>>a;
    cout<<"-----"<<endl;
    cout<<"The factorial of "<<a<<" is: "<<num(a)<<endl;
    
    return 0;
}

