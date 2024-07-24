// write a program to find hcf or gcd of 2 numbers.

#include<iostream>
using namespace std;

void gcd()
{
    int a,b,g;
    cout<<"Enter no 1: "<<endl;
    cin>>a;
    cout<<"Enter no 2: "<<endl;
    cin>>b;

    for (int i =1; i <=a ; i <=b , i++)
    {
        if (a%i == 0 && b%i == 0)
        {
            g = i;
            cout<<g;  //greatest common divisor 
        }
        
    }
    cout<<"HCF of "<<a<<","<<b<<" is: "<<g;  
}

int main(){
    gcd();
    return 0;
}

/*eg
12= 1,2,3,4,6...
15= 1,2,3,5,...
so the greatest factor of 12 and 15 is 3
and now how program works,
a =12
i iterate from 1 to a ie = 12
now a%i == 0 means agr a se i poora divide hogya toh ause g ke equal krdo aur akhri loop m jo value aahegi vohi highest common factor hoga*/
