#include<iostream>

using namespace std;

void printsum(int [10][10],int,int);

int main()
{
    int arr[10][10];
    int i,j,row,col;
    cout<<"Enter the size of rows and col : \n";
    cin>>row;
    cin>>col;
    cout<<"Enter the data in the array : \n";
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cin>>arr[i][j];
        }
    }
    printsum(arr,row,col);
    return 0;
}

void printsum(int arr[10][10],int row ,int col)
{
    int i,j;
    int maxi=0,count=-1;
    for(i=0;i<3;i++)
    {
        int sum =0 ;
        for(j=0;j<3;j++)
        {
            sum += arr[i][j];
        }
        cout<<sum<<" ";
        if(sum > maxi)
        {
            maxi = sum;
            count = row;
        }
    }
    cout<<endl;
    cout<<"The max sum is "<<maxi<<" of row "<<count;
}