/*Write a Program that takes N elements (max. value of N is 100 and N is the float number specified by user) from user,stores data in an array and Calculates the average of those numbers*/

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
    for (int i = 0; i < size; i++)
    {
        avg += arr[i];
    }

    int result;
    result = avg/size;
    cout<<"\nAverage of Elements you Enter: "<<result<<endl;
    
    return 0;
}