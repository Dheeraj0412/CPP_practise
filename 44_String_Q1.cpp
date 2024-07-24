/*Write a Program to Find the Frequency of given Character by
user in a String*/

#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    cout<<"Enter a line: "<<endl;
    getline(cin,str);          //puri line likhne ke liyee.
    
    //int count = 0 //ise hoga yah ki 1 baar hi count zero se initialise hoga jis se counting mistake hogi
    for (int i = 0; i <str.length(); i++)
    {
        int count = 0; //har ek loop ke baad count zero se initialise hojahega.
        for (int j = 0; j <str.length(); j++)
        {
            if (str[i]==str[j])
            {
                count++;
            }  
        }
        cout<<"No. of Time a letter "<<str[i]<<" repeats "<<count<<endl;
        
    }
    
    return 0;
}

