//write a program to convert decimal number into binary

#include<iostream>
using namespace std;

long long convert(int n)
{
    long long bin = 0;
    int lastd,i = 1;
    while (n>0)
    {
        lastd = n%2;
        n /= 2;
        bin += lastd * i;
        i*=10;
    }
    return bin;
    
}

int main(){
    int d;
    cout<<"Enter decimal number: "<<endl;
    cin>>d;
    cout<<"value in binary: "<<convert(d);
    return 0;
}