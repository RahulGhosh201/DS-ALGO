#include<bits/stdc++.h>
using namespace std;


int main()
{
    int arr[]={1, 3, 2, 2, 5};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=1;i<n;i++)
    {
        if(i%2==0)
        {
            if(arr[i]>arr[i-1])
            {
                swap(arr[i],arr[i-1]);
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
