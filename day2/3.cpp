#include<bits/stdc++.h>
using namespace std;

void rearrange(int arr[],int n){
    cout<<"Before rearranging: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    sort(arr,arr+n);
    int mid=n/2;
    cout<<"After rearranging: "<<endl;
    for(int i=0;i<mid;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=n-1;i>=mid;i--){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

int main()
{
    int arr[]={5, 2, 4, 7, 9, 3, 1, 6, 8};
    int n=sizeof(arr)/sizeof(arr[0]);
    rearrange(arr,n);
    return 0;
}