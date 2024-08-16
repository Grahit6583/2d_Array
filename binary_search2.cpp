#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

bool binary_search(vector<vector<int>> , int);

int main()
{
    vector<vector<int>> arr;
    int i,j,rows,cols,a;
    cout<<"Enter thr no. of rows and cols : \n";
    cin>>rows;
    cin>>cols;
    cout<<"Enter the data in the vector : \n";
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
    bool ans = binary_search(arr,target);
    if(ans == 1)
    {
        cout<<"element found";
    }
    else
    {
        cout<<"Element found";
    }
    return 0;
}

bool binary_search(vector<vector<int>> arr , int target)
{
    int rows = arr.size();
    int cols = arr[0].size();

    int rowindex = 0;
    int colindex = cols - 1;
    while(rowindex < rows && colindex >= 0)
    {
        int element = arr[rowindex][colindex];
        if(element == target)
        {
            return 1;
        }

        if(element < target)
        {
            rowindex++;
        }
        else
        {
            colindex--;
        }
    }
}