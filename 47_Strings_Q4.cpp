//write a program to calculate length of string enter by user.

#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    cout<<"Enter line: "<<endl;
    getline(cin,str);
    cout<<"Length of string line Enter by user is: "<<str.length();
    return 0;
}