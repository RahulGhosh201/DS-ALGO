#include<bits/stdc++.h>
using namespace std;

int isPresent(int arr[][4],int target,int m,int n)
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i][j]==target)
            {
                return i*j;
            }
        }
    }
    return 0;
}

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

    cout<<"Enter the element to be searched:";
    int target=0;
    cin>>target;
    cout<<endl;
    // if(isPresent(arr,target,3,4))
    // {
    //     cout<<"Element is present";
    // }
    // else
    // {
    //     cout<<"Element is not present";
    // }
    int ans=0;
    ans=isPresent(arr,target,3,4);
    if(ans!=0)
    {
        cout<<target<<"is found at"<<ans;
    }
    else
    {
        cout<<target<<"is not found";
    }
}