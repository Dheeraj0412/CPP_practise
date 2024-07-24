// Return Value of modulus operator, x%y
// If y completely divides x, the result of the expression is 0.
// If x is not completely divisible by y, then the result will be 1.

#include<iostream>
using namespace std;

int eofinder()
{
    int n;
    cout<<"Enter a Number: "<<endl;
    cin>>n;
    if (n%2 == 0 ) 
    {
        cout<<"Number you enter is even."<<endl;
    }
    else
    {
        cout<<"Number you enter is odd."<<endl;
    }  
}

int main(){
    eofinder();
    return 0;
}


