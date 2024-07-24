//write a program to display sum of natural number using recursion.

#include<iostream>
using namespace std;

int num(int n)
{
    if (n<=1)
    {
        return 1;
    }
    return n+num(n-1);
    
    // int c = 0;
    // for (int i = 1; i <= n; i++)
    // {
    //     c += i;
    // }
    // cout<<c;
    

}

int main(){
    int a;
    cout<<"Enter number: "<<endl;
    cin>>a;
    cout<<"Sum of first "<<a<<" natural number is "<<num(a);
    return 0;
}