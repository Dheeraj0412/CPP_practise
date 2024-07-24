/*Write a Program that takes the array of five element and the elements of that array are accessed using pointer*/

#include<iostream>
using namespace std;

int main(){
    int n;
    int avg = 0;
    int num= 1;
    int arr[100] = {n};

    for (int i = 0; i <5; i++)
    {
        cout<<"Enter element number "<<num++<<" : ";
        cin>>n;
        arr[i]=n;
    }

    cout<<"Elements Store in Array are: "<<endl;
    for (int i = 0; i<5; i++)
    {
        cout<<arr[i]<<",";
    }

    cout<<"\n";
    for (int i = 0; i < 5; i++)
    {
        int *p = &arr[i];
        cout<<"address of Array "<<arr[i]<<" at position "<<i<<" "<<p<<endl;
        }
    return 0;
}