#include<iostream>
using namespace std;

int table(){
    int t;
    cout<<"Enter Number: "<<endl;
    cin>>t;
    cout<<"multiple of these number upto 10:->"<<endl;
    for (int i = 1; i <= 10; i++)
    {
        cout<<t*i<<endl;
    }  

    cout<<"multiple of these number upto 10 reverse:->"<<endl;
    for (int i = 10; i >= 1; --i)
    {
        cout<<t*i<<endl;
    }  
}

int main(){
    table();
    return 0;
}