//Write a Program that takes n element from user and displays the largest element of an array

#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"Enter the number of elements you want to store: "<<endl;
    cin>>size;
    int n;
    int avg = 0;
    int num= 1;
    int arr[100] = {n};

    for (int i = 0; i <size; i++)
    {
        cout<<"Enter element number "<<num++<<" : ";
        cin>>n;
        arr[i]=n;
    }

    cout<<"Elements Store in Array are: "<<endl;
    for (int i = 0; i<size; i++)
    {
        cout<<arr[i]<<",";
    }

    for (int i = 0; i <size; i++)
    {
        if (arr[0]<arr[i])
        {
            arr[0] = arr[i];
        }
    }
    
    cout<<"\nThe largest number in array is: "<<arr[0]<<endl;

    return 0;
}