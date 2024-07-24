#include<iostream>
using namespace std;

float swap()
{
    float a,b;
    cout<<"Enter number 1: "<<endl;
    cin>>a;
    cout<<"Enter number 2: "<<endl;
    cin>>b;

    float temp;
    temp = a;
    a = b;
    b = temp;
    
    cout<<"After swapping: "<<endl;
    cout<<"number 1: "<<a<<endl;
    cout<<"number 2: "<<b<<endl;
}

int main(){
    swap();
    return 0;
}