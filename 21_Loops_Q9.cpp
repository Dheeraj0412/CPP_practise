//write a program to add digit enter by user.

#include<iostream>
using namespace std;

void sum()
{
    int a;
    cout<<"Enter number: "<<endl;
    cin>>a;
    int add = 0;
    while (a>0)
    {
        int last_d = a%10;
        add = add+last_d;
        a = a/10;
    }
    cout<<"Sum of the digit u enter is: "<<add<<endl;
    
}

int main(){
    sum();
    return 0;
}