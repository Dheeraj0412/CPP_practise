//write a program to convert binary number in decimal

#include<iostream>
#include<math.h>

using namespace std;

int convert(long long); //declaration

int main(){
    long long a;
    cout<<"Enter binary number: "<<endl;
    cin>>a;
    cout<<"value in decimal: "<<convert(a)<<endl;;
    return 0;
}

int convert(long long l)
{
    int decimal = 0;
    int i = 0;
    while (l != 0)
    {
        int lastd = l%10;
        l /= 10;
        decimal = decimal +( lastd * pow(2, i));
        ++i;

    }
    return decimal ;
    
} 

