#include<bits/stdc++.h>
using namespace std;

void printColSum(int arr[][3],int row,int col)
{

    for(int col=0;col<3;col++)
    {
        int sum=0;
        for(int row=0;row<3;row++)
        {
            sum+=arr[row][col];
        }
        cout<<"Sum of "<<col+1<<" col is "<<sum<<endl;
    }
    
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
    //cout<<"Sum of the rows in the array:";
    printColSum(arr,3,3);
}