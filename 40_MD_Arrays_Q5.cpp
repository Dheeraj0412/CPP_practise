/*) Write a Program that adds two matrices using Multi dimensional Arrays where the number of rows r and columns c is entered by user (Value of r and c < 100)*/

#include<iostream>
using namespace std;

int matrix(int m,int n,int p,int q)
{
    int arr_1[m][n];
    int arr_2[p][q];
    
    cout<<"Enter matrix_1"<<endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr_1[i][j];
        }   
    }

    cout<<"Enter matrix_2"<<endl;
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            cin>>arr_2[i][j];
        }   
    }

    cout<<"Displaying Matrix_1:"<<endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<arr_1[i][j]<<" ";
        }
        cout<<endl;   
    }

    
    cout<<"Displaying Matrix_2:"<<endl;
    for (int i = 0; i < p; i++)
    {
        for  (int j = 0; j < q; j++)
        {
            cout<<arr_2[i][j]<<" ";
        }
        cout<<endl;    
    }

    cout<<"Addition of Matrix_1 and Matrix_2 :-"<<endl;
    for (int i = 0; i <m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int add = arr_1[i][j]+arr_2[i][j];
            cout<<add<<" ";
        }
        cout<<endl;
        
    }
}

int main(){
    
    int m,n;
    cout<<"Matrix_1 should be greater than Matrix_2"<<endl;
    cout<<"Enter no of rows for matrix_1: "<<endl;
    cin>>m;
    cout<<"Enter no of columns for matrix_1: "<<endl;
    cin>>n;

    int p,q;
    cout<<"Enter no of rows for matrix_2: "<<endl;
    cin>>p;
    cout<<"Enter no of columns for matrix_2: "<<endl;
    cin>>q;

    matrix(m,n,p,q);

    return 0;
}