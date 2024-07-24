#include<iostream>
#include<string>
using namespace std;

void stud()
{
    int size;
    cout<<"Enter number of students your want to register in a array: "<<endl;
    cin>>size;
    string student[size] = {};
    int r = 1;
    for (int i = 0; i < size; i++)
    {
        string a;
        cout<<"Enter Name of student no.: "<<r++<<endl;
        cin>>a;
        student[i] = a;
    }
    
    cout<<"Name of student you register are: "<<endl;
    for (int i = 0; i < size ;i++)
    {
        cout<<student[i]<<endl;
    }
    
}

int main(){

    stud();
    return 0;
}