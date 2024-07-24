//write a program to display fibonacci series till n number.

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
        if (next_term <= b)
        {
            cout<<next_term<<",";
            t1 = t2;
            t2 = next_term;
            next_term = t1+t2;
            
        }
        else{
            break;
        }
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


/*int main()               //using while loop
{
    int t1 = 0, t2 = 1, nextTerm = 0, n;
    cout << "Enter a positive number: ";
    cin >> n;
    cout << "Fibonacci Series: " << t1 << ", " << t2 << ", ";
    nextTerm = t1 + t2;
    while (nextTerm <= n)
    {
        cout << nextTerm << ", ";
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }
    return 0;*/

