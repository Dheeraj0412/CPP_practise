//write a program to reverse a digit enter by user.

#include<iostream>
using namespace std;

int rev(int r){
    int n = r;
    int reverse = 0;
    while (n>0)
    {
        int lastdigit = n%10; //modulus operator remainder deta h. aur jb 10 se divide krege toh last digit hi remainder bachegaa phr ause reverse m store kra dege

        reverse = reverse*10 + lastdigit;

        n = n/10; //n/10 se hoga yah ki last digit hat jahega kyuki 10 se divide se ones ke baad decimal lg jaega vo value int m store ho rhi h toh vo neglect ho jahega.
    }
    return reverse;
    
}


int main(){
    int a;
    cout<<"Enter number: "<<endl;
    cin>>a;
    cout<<"your original Number: "<<a<<endl;
    cout<<"After reversing number : "<<rev(a)<<endl;
    return 0;
}

