#include<iostream>
#include<string>
using namespace std;

string rev(string r){
    string tem_r = r;
    int i = 0;
    for (int x = tem_r.length()-1; x >=0; x--)
    {
        r[i] = tem_r[x];
        i++;
    }
    return r;
}


int main(){
    string a;
    cout<<"Enter a string: "<<endl;
    cin>>a;
    cout<<"your original string : "<<a<<endl;
    cout<<"After reversing string : "<<rev(a)<<endl;
    return 0;
}