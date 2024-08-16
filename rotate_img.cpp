#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<stdlib.h>

using namespace std;

void rotate_arr(vector<vector<int>>&);

int main()
{
    vector<vector<int>> arr;
    int a,i,j,rows,cols;
    system("CLS");
    cout<<"Enter the no. od row and cols : \n";
    cin>>rows;
    cin>>cols;
    cout<<"Enter the data in the matrix : \n";
    for(i=0;i<rows;i++)
    {
        vector<int> temp;
        for(j=0;j<cols;j++)
        {
            cin>>a;
            temp.push_back(a);
        }
        arr.push_back(temp);
    }
    cout<<"before output : \n";
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    rotate_arr(arr);
    cout<<"final output : \n";
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

void rotate_arr(vector<vector<int>>& arr)
{
    int n = arr.size();
    // changing symmetrically from middle row
    for(int i = 0; i < n/2; i++) {
        for(int j = 0; j < n; j++) {
            swap(arr[i][j], arr[n-1-i][j]);
        }
    }
    cout<<"hello : \n";
    // taking transpose
    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            swap(arr[i][j], arr[j][i]);
        }
    }
}