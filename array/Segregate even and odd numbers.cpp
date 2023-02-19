#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={12, 34, 45, 9, 8, 90, 3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int smallest=0,largest=n-1;
    int temp[n];
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            temp[smallest]=arr[i];;
            smallest++;
        }
        else
        {
            temp[largest]=arr[i];
            largest--;
        }
    }
    for(int i=0;i<n;i++)
    {
        arr[i]=temp[i];
    }
    sort(arr,arr+smallest);
    sort(arr+smallest+1,arr+largest);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}



// int k=-1;
    // int j=0;
    // for(int i=0;i<n;i++)
    // {
    //     if(arr[j]%2==0)
    //     {
    //         k++;
    //         swap(arr[k],arr[j]);
    //     }
    //     j++;
    // }