//write a program to calculate lcm of two numbers.

#include<iostream>
using namespace std;

void lcm()
{
    int a,b,g,lcm;
    cout<<"Enter no 1: "<<endl;
    cin>>a;
    cout<<"Enter no 2: "<<endl;
    cin>>b;

    for (int i=1; i<=a;i<=b , i++)
    {
        if (a%i == 0 && b%i == 0)
        {
            g = i;
        }  
    }
    //for loop khtm hone ke baad akhri loop wali value hi hcf hoga aur vo niche jake divide hojahega aur lcm ki value aaajahegi according to relationship.
    
    /*relation b/w lcm and hcf; lcm*hcf = product of two numbers.*/
    lcm = a*b/g;
    cout<<"lcm of "<<a<<","<<b<<" is: "<<lcm;

}

int main(){
    lcm();
    return 0;
}