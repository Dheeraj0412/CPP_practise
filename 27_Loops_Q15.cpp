//Write a Program to check whether a number entered by the user is an Armstrong number or not.

#include<iostream>
#include<math.h>
using namespace std;

void arm()
{
    int a;
    cout<<"Enter number 3 digit number: "<<endl;
    cin>>a;
    int c = a;
    int n = 0;
    while (a != 0)
    {
        int lastd = a%10;
        n += lastd*lastd*lastd;
        a /= 10;
    }
    //cout<<n;

    if (n == c)
    {
        cout<<"Its a armstrong number"<<endl;
    }
    else{
        cout<<"Not a armstong number."<<endl;
    }  
}

int main(){
    arm();
    return 0;
}