//write a program to calculate power of a number.

#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter Base: "<<endl;
    cin>>a;
    cout<<"Enter power: "<<endl;
    cin>>b;

    cout<<"= "<<pow(a,b);

    return 0;
}