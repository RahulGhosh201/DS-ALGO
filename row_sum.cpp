#include<bits/stdc++.h>
using namespace std;

void printRowSum(int arr[][3],int row,int col)
{

    for(int row=0;row<3;row++)
    {
        int sum=0;
        for(int col=0;col<3;col++)
        {
            sum+=arr[row][col];
        }
        cout<<"Sum of "<<row+1<<" row is "<<sum<<endl;
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
    printRowSum(arr,3,3);
}