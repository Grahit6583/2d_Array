#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

vector<int> print_wave(vector<vector<int>>,int,int);

int main()
{
    vector<vector<int>> arr;
    int rows , cols , i , a , j;
    cout<<"Enter the no. of rows and cols : \n";
    cin>>rows;
    cin>>cols;
    cout<<"Enter the data in the array : \n";
    for(i=0;i<rows;i++)
    {   vector<int> temp;
        for(j=0;j<cols;j++)
        {
            cin>>a;
            temp.push_back(a);
        }
        arr.push_back(temp);
    }
    cout<<"output : \n";
    for(i=0;i<rows;i++)
    {  
        for(j=0;j<cols;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    vector<int> ans = print_wave(arr,rows,cols);
    cout<<"output : \n";
    for(i=0;i<ans.size();i++)
    {   
            cout<<ans[i]<<" ";
    }
    return 0;
}

vector<int> print_wave(vector<vector<int>> arr,int rows, int cols)
{
    vector<int> temp;
    int i,j;
    for(i=0;i<cols;i++)
    {
        if(i&1)
        {
            for(j=rows-1;j>=0;j--)
            {
                temp.push_back(arr[j][i]);
            }
        }
        else
        {
            for(j=0;j<rows;j++)
            {
                temp.push_back(arr[j][i]);
            }
        }
    }
    return temp;
}