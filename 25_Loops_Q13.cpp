//write a program to identify number is prime or not.

#include<iostream>
using namespace std;

void p()
{
    int a;
    cout<<"Enter number: "<<endl;
    cin>>a;
    bool flag = 1; 

    for (int i =2; i < a/2; i++)
    {
        if (a%i == 0)
        {
            cout<<"Not a prime number";
            flag = 0;
            break;
        }   
    }

    if (flag == 1)
    {
        cout<<"Its a prime number.";
    }  
}

int main(){
    p();
    return 0;
}