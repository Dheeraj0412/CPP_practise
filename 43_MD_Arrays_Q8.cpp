/*Write a Program that takes three integers from the user and swaps them in cyclic order using pointers.
Example:
Enter value of a, b and c respectively:1 2 3
Value after swapping numbers in cycle:
a=3
b=1
c=2*/

#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter number1: "<<endl;
    cin>>a;
    cout<<"Enter number2: "<<endl;
    cin>>b;
    cout<<"Enter number3: "<<endl;
    cin>>c;

    cout<<"Before swapping: "<<endl;
    cout<<a<<b<<c;

    int *A = &a;
    int *B = &b;
    int *C = &c;

    int temp = *A ; //for swapping 3 numbers using pointers.
    *A = *C;
    *C = temp;
    temp = *B;

    cout<<"\nAfter swapping: "<<endl;
    cout<<*A<<*B<<*C;

    return 0;
}