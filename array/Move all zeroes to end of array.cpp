#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={10,2,3,46,0,55,0,0,2,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            swap(arr[i],arr[j]);
            j++;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}