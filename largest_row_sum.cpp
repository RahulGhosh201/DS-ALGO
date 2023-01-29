#include<bits/stdc++.h>
using namespace std;

int largestRowSum(int arr[][3],int row,int col)
{
    int maxi=INT_MIN,rowIndex=-1;
    for(int row=0;row<3;row++)
    {
        int sum=0;
        for(int col=0;col<3;col++)
        {
            sum+=arr[row][col];
        }
        if(sum>maxi)
        {
            maxi=sum;
            rowIndex=row;
        }
    }
    cout<<"Maximum sum is "<<maxi<<" & that's from row: "<<rowIndex+1<<endl;
    
}

int main()
{
    int arr[3][3];
    cout<<"Enter the elements for the 2D array:"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }
    largestRowSum(arr,3,3);
}