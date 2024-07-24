#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter no.1: "<<endl;
    cin>>a;
    cout<<"Enter no.2: "<<endl;
    cin>>b;
    
    int *a1 = &a;
    int *b1 = &b;

    cout<<&a<<endl; //Address of a
    cout<<*b1<<endl; //dereference of b;

    int sum;
    sum = *a1 + *b1;

    //sum of number using pointers.
    cout<<"Sum of this two number is: "<<sum<<endl;

    return 0;
}