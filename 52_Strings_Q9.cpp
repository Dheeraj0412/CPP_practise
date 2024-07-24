/* Write a C++ program to capitalize the first letter of each word of a given string. Words must be separated by only one space*/

#include<iostream>
#include<string>
using namespace std;

//toupper() function is use to captialize a character in a string.

int main(){
    string str;
    cout<<"Enter string";
    getline(cin,str);
    for (int i = 0; i <str.length(); i++)
    {
        if (i == 0)
        {
            str[i] = toupper(str[i]);
        }
        else if (str[i] == ' ' && str[i+1] != ' ')
        {
            str[i+1] = toupper(str[i+1]);
        }
    }
    cout<<str;
    
    return 0;
}