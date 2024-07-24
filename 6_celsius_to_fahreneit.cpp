#include<iostream>
using namespace std;

void ctof(float celsius)
{
    float a = (1.8*celsius) + 32;
    cout<<"In fahrenheit: "<<a<<endl;
}

int main(){
    float g;
    cout<<"Enter temp in celsius: ";
    cin>>g;
    ctof(g);

    return 0;
}