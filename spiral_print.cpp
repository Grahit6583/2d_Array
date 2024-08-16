#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<stdlib.h>

using namespace std;

vector<int> spiral_wave(vector<vector<int>>);

int main()
{
    vector<vector<int>> arr;
    int i,j,a,row,col;
    system("CLS");
    cout<<"Enter the no. of rows and cols : \n";
    cin>>row;
    cin>>col;
    cout<<"Enter the data in the array : \n";
    for(i=0;i<row;i++)
    {
        vector<int> temp;
        for(j=0;j<col;j++)
        {
            cin>>a;
            temp.push_back(a);
        }
        arr.push_back(temp);
    }
    cout<<"output : \n";
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    vector<int> ans = spiral_wave(arr);
    cout<<"final answer : \n";
    for(i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}

vector<int> spiral_wave(vector<vector<int>> arr)
{
    vector<int> ans;
    int row = arr.size();
    int col = arr[0].size();

    int count = 0;
    int total = row*col;

    int startrow = 0;
    int startcol = 0;
    int endrow = row-1;
    int endcol = col-1;
    int index;

    while(count<total)
    {
        //starting row
        for(index=startcol ; count<total && index<=endcol ; index++)
        {
            ans.push_back(arr[startrow][index]);
            count++;
        }
        startrow++;

        //ending column
        for(index=startrow ; count<total && index<=endrow ; index++)
        {
            ans.push_back(arr[index][endcol]);
            count++;
        }
        endcol--;

        //ending row
        for(index=endcol ; count<total && index>=startcol ; index--)
        {
            ans.push_back(arr[endrow][index]);
            count++;
        }
        endrow--; 

        //start column
        for(index=endrow ; count<total && index>=startrow ; index--)
        {
            ans.push_back(arr[index][startcol]);
            count++;
        }
        startcol++;
    }
    return ans;
}