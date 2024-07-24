//write a program to display fibonacci series till nth term.

#include<iostream>
using namespace std;

///recursion se bhi krskte h lekin filhal loops se

int fib(int b)
{
    int t1 = 0,t2 = 1, next_term = 0;
    cout<<t1<<","<<t2<<",";

    for (int i = 1; i <= b; i++)
    {
        next_term = t1+t2;
        t1 = t2;
        t2 = next_term;
        cout<<next_term<<",";
    }
   
}

int main(){
    int a;
    cout<<"Enter number: "<<endl;
    cin>>a;
    cout<<"-----"<<endl;

    cout<<"The fibonacci series till "<<a<<" number is: "<<endl;
    fib(a);
    
    return 0;
}



