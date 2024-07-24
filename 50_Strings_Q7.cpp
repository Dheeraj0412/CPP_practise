//Write a C++ program to check if a given string is a Palindrome or not.

#include<iostream>
#include<string>
using namespace std;

int main(){

    string str;
    cout<<"Enter string:";
    cin>>str;
    bool flag = 0;

    for (int i = 0; i <str.length(); i++)
    {
        if (str[i] != str[str.length()-i-1])
        {
            flag = 1;
            break;
        }
        
    }
    if (flag)
    {
        cout<<"String you enter is not palidrome";
    }
    else{
        cout<<"string you enter is palindrome";
        
    }
    
    

    return 0;
}