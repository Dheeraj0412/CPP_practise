//write a program to find largest number among three enter by user.

#include<iostream>
using namespace std;

//call by reference.

void find()
{
    int a,b,c;
    cout<<"Enter any three number: "<<endl;
    cin>>a>>b>>c;
    if ((a>b) && (a>c))  //using logical opertor
    {
        cout<<"The greatest Number among you enter is: "<<a<<endl;
    }

    if ((b>a) && (b>c))  //using logical opertor
    {
        cout<<"The greatest Number among you enter is: "<<b<<endl;
    }
    if ((c>b) && (c>a))  //using logical opertor
    {
        cout<<"The greatest Number among you enter is: "<<c<<endl;
    }
    
}

int main(){  
    find(); 
    return 0;
}