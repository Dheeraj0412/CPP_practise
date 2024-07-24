//Write a Program to check if an integer (entered by the user)can be expressed as the sum of two prime numbers,if yes then print all possible combinations with the use of functions.

//Thorda hard h.

#include<iostream>
using namespace std;

bool checkprime(int n){
    bool flag = true;

    if ((n == 0) || (n == 1))//0 and 1 are not prime
    {
        flag = false;
    }
    else{
        for (int i = 2; i <= n/2; i++)
        {
            if (n%i == 0)
            {
                flag = false;
                break;
            }
        }
    }
    return flag;
}

int main(){
    int b;
    cout<<"Enter number: "<<endl;
    cin>>b;
    bool flag = false;

    for (int i = 2; i <= b/2; i++)
    {
        
        if (checkprime(i))
        {
            if (checkprime(b-i))
            {
                cout<<b<<" = "<<i<<" + "<<b-i<<endl;
                flag = true;
            }
            
        }
        
    }
    if (!flag)
    {
        cout<<b<<"can't be expressed as sum of two prime numbers.";
    }
    
    
    return 0;
}