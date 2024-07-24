//write a program to display prime number between  two intervals.

#include<iostream>
using namespace std;

void p()
{
    int a,b;
    cout<<"Enter number 1: "<<endl;
    cin>>a;
    cout<<"Enter number 2: "<<endl;
    cin>>b; 
    int flag;

    while (a<=b)
    {
        flag = 0;
        for (int i = 2; i <= a/2; i++)  //a/2 isliye use kiya kyuki vo number divide hoga vo auske adhe se andr hi hoga nhi toh auske baad bhi nhi hoga except aus given number se. eg. 18, divide 9 aur nine ke andr hi hoga 9 ke baad kiski se nhi hogaa.

        {
            if (a%i == 0)
            {
                flag = 1;
                break;
            } 
        }
        if (flag == 0)
        {
            cout<<a<<" is a prime number."<<endl;
        }
        a = a+1;   
    }  
}

int main(){
    p();
    return 0;
}