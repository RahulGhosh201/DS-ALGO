#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={3, 2, 5, 6, 1, 4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i=0;
    while(i<n)
    {
        int correct=arr[i]-1;
        if(arr[correct]!=arr[i])
        {
            swap(arr[i],arr[correct]);
        }
        else{
            i++;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}