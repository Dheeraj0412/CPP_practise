/*Write a  Program to Concatenate (join) Two Strings entered by user*/

#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    string str_1;

    cout<<"Enter line_1: "<<endl;
    getline(cin,str);
    cout<<"Enter line_2: "<<endl;
    getline(cin,str_1);

    cout<<str+str_1;
    return 0;
}