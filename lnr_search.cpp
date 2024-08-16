#include<iostream>

using namespace std;

bool founditem(int arr[][10],int item , int row ,int col)
{
    int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(arr[i][j] == item)
            {
                return 1;
            }
        }
    }
    return 0;
}
int main()
{
    int m,n;
    cout<<"Enter the no. of rows and columns : \n";
    cin>>m;
    cin>>n;
    cout<<"Enter the data in the array : \n";
    int arr[10][10];
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int item;
    cout<<"Enter the item to search : \n";
    cin>>item;
    int ans = founditem(arr,item,m,n);
    if(ans==1)
    {
        cout<<"item found";
    }
    else
    {
        cout<<"item not found";
    }
    return 0;
}