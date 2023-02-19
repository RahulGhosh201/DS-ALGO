#include<bits/stdc++.h>
using namespace std;

void leftRotate(int arr[],int n,int k)
{
    int mod=k%n;
    for(int i;i<n;i++)
    {
        cout<<arr[(mod+i)%n]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[]={1, 3, 5, 7, 9};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter k:"<<endl;
    int k=0;
    cin>>k;
    leftRotate(arr,n,k);
}