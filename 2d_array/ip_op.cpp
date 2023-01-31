#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[3][4];
    cout<<"Enter the elements for the 2D array:"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"The elements of the 2D array are:"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<arr[i][j]<<" ";
        }
    }cout<<endl;

}