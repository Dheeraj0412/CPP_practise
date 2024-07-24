//Write a Program to Check Whether a Number N entered by user is Palindrome or Not

#include<iostream>
using namespace std;

void p(){

    int a;
    cout<<"Enter Number: ";
    cin>>a;
    int c = a;
    int n = 0;
    while (a != 0)
    {
        int last_d = a%10;
        n = n*10 + last_d;
        a = a/10;
    }
    
    // cout<<c<<endl;
    // cout<<n<<endl;
    if (c == n)
    {
        cout<<"Number you Enter is Palindrome";
    }
    else
    {
        cout<<"Number you enter is not a Palindrome";
    }
    
    
    
}

int main(){
    p();
    return 0;
}