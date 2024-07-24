//calulator using switch case statment

#include<iostream>
#include<string>
using namespace std;

void calc()
{
    int a,c;
    char b;
    cout<<"Enter number1,operator,number2: "<<endl;
    cin>>a>>b>>c;

    switch (b)
    {
    case '+' :
        cout<<a+c;
        break;
    case '-' :
        cout<<a-c;
        break;
    case '*' :
        cout<<a*c;
        break;
    case '/' :
        cout<<a/c;
        break;
    
    default:
    cout<<"No case for this operator."<<endl;
        break;
    }
}

int main(){
    calc();
    return 0;
}