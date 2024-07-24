//Write a C++ program to find the largest word in a given String

#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    cout<<"Enter string:"<<endl;
    getline(cin,str);
    int count = 0;
    int space = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ')
        {
            count++;    
        }
        else{
            space++;
        }
        
    }
    cout<<count<<endl;
    cout<<space<<endl;
    
    return 0;
}