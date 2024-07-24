//write a program to calculate power of a number without using pow()

#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter Base: "<<endl;
    cin>>a;
    cout<<"Enter power: "<<endl;
    cin>>b;
    int c = 1;
    for (int i = 1; i <=b; i++)
    {
        c = c*a;
    }
    cout<<"="<<c;
     
    return 0;
}