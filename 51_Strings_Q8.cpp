/*Write a C++ program to count all the words in a given
string.Words must be separated by only one space*/

#include<iostream>
#include<string>
using namespace std;

int main(){ 
    //method 1

    // string str = "hello world";
    // cout<<"Enter string: "<<endl;
    // cin>>str;
    // string s = " ";
    // string add = str+s;
    // int count =0;
    // for (int i = 0; add[i] != '\0'; i++) // \0 = null
    // {
    //    if (add[i]==' ')
    //    {
    //         count++;
    //    }
       
    // }
    // cout<<count;


    //method 2

    string str = "hello how are you";
    // cout<<"Enter string: "<<endl;
    // cin>>str;
    int ch = 0;
    int wcount = 0;
    for (int i = 0; str[i] != '\0'; i++) // \0 = null
    {
       if (str[i]==' '){
            if (ch!= 0)
            {
                wcount++;
            }
            ch=0;  
       }
       else{
            ch++;
       }
    }
    if (ch!= 0)
    {
        wcount++;
    }
    
    cout<<wcount;


    return 0;
}