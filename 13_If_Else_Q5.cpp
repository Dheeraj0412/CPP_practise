//write a program to check a leap year.

#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter any year: "<<endl;
    cin>>a;

    if (a%4 == 0)
    {
        cout<<"The year you entered is a leap year"<<endl;
    }
    else{
        cout<<"The year you entered is not a leap year"<<endl;
    }
    
    return 0;
}