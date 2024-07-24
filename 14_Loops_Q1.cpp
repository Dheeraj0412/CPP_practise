//write a program to calculate first n sum of natural numbers.

#include<iostream>
using namespace std;

///recursion se bhi krskte h lekin filhal loops se

int num(int b)
{
    int c = 0;
    for (int i = 1; i <= b; i++)
    {
        c = c + i;    
    }
    return c; 
}

int main(){
    int a;
    cout<<"Enter number: "<<endl;
    cin>>a;
    cout<<"-----"<<endl;
    cout<<"The sum of first "<<a<<" natural number is: "<<num(a)<<endl;
    
    return 0;
}

