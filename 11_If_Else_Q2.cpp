//write a program to identify vowels or consonant using if else.

#include<iostream>
using namespace std;

int main(){
    char a;
    cout<<"Enter a character: "<<endl;
    cin>>a;

    if ((a == 'a') || (a == 'e') || (a == 'i') || (a == 'o') || (a == 'u'))
    {
        cout<<"The character you enter is a vowel"<<endl;
    }
    else{
        cout<<"The character you enter is a consonant"<<endl;
    }
    
    return 0;
}