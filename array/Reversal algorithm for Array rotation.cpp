#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[],int start,int end)
{
    int mid=(start+end)/2;
    for(int i=start;i<mid;i++)
    {
        swap(arr[i],arr[end-(mid-i+1)]);
    }
}

void rotate(int arr[],int d,int n)
{
    d = d % n;
    reverse(arr,1,d);
    reverse(arr,d+1,n);
    reverse(arr,1,n);
}


int main()
{
    int arr[]={1, 2, 3, 4, 5, 6, 7};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter d:"<<endl;
    int d=0;
    cin>>d;
    // int temp[n];
    // for(int i=0;i<n;i++)
    // {
    //     int t=(i+d)%n;
    //     temp[i]=arr[t];
    // }
    rotate(arr,d,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}