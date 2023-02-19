#include<bits/stdc++.h>
using namespace std;


void largestThree(int arr[],int n)
{
    int ans[50];
    sort(arr,arr+n);
    for(int i=0;i<3;i++)
    {
        ans[i]=arr[n-1-i];
    }
    cout<<"Output:";
    for(int i=0;i<3;i++)
    {
        cout<<ans[i]<<" ";
    }cout<<endl;
}

int main()
{
    int size=0,arr[50];
    cout<<"Enter the no of elements in the array:"<<endl;
    cin>>size;
    cout<<"Enter the elements in the array:"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    largestThree(arr,size);
}