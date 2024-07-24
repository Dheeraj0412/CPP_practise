/*Write a Program that takes a matrix of order r*c from the user and computes the transpose of the matrix*/

#include<iostream>
using namespace std;

int matrix(int m,int n)
{
    int arr_1[m][n];
 

    cout << "Enter matrix" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr_1[i][j];
        }
    }

    cout << "Displaying Matrix before Transpose:" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr_1[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Displaying Matrix after Transpose:" << endl;
    for (int i = m-1; i >=0; i--)
    {
        for (int j = n-1; j >= 0; j--)
        {
            cout << arr_1[i][j] << " ";
        }
        cout << endl;
    }

}

int main(){

    int m,n;
    cout<<"Enter no of rows :"<<endl;
    cin>>m;
    cout<<"Enter no of columns :"<<endl;
    cin>>n;

    matrix(m,n);
    
    return 0;
}