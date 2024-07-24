//write a program to to display all factors of a number entered by user.

#include<iostream>
using namespace std;

void fac()
{
    int a;
    cout<<"Enter number: "<<endl;
    cin>>a;
    cout<<"Factors of "<<a<<" are ";
    for (int i = 1; i <=a; i++)
    {
        if (a%i==0)
        {
            cout<<i<<",";
        }
    }
    
}

int main(){
    fac();
    return 0;
}