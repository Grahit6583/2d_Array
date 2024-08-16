#include<iostream>
#include<vector>
#include<stdlib.h>
#include<bits/stdc++.h>

using namespace std;

bool linear_search(vector<vector<int>>,int);

int main()
{
    vector<vector<int>> arr;
    int i,j,rows,cols,a;
    cout<<"Enter the no. rows and cols : \n";
    cin>>rows;
    cin>>cols;
    cout<<"Enter the no. of rows and cols : \n";
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
    int target;
    cout<<"Enter the item to search : \n";
    cin>>target;
    bool ans = linear_search(arr,target);
    if(ans == 1)
    {
        cout<<"Element found ";
    }
    else
    {
        cout<<"Element not found";
    }
}

bool linear_search(vector<vector<int>> arr , int target)
{
    int rows = arr.size();
    int cols = arr[0].size();

    int start = 0;
    int end = rows*cols-1;
    int mid  = start+(end-start)/2;
    while(start<end)
    {
        int element = arr[mid/cols][mid%cols];
        if(element == target)
        {
            return 1;
        }

        if(target > mid)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid  = start+(end-start)/2;
    }
    return 0;
}