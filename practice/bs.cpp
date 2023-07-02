#include<bits/stdc++.h>
using namespace std;

int bs(int arr[], int low, int high, int key){
    if(low>high)
        return -1;
    int mid=(low+high)/2;
    if(arr[mid]==key)
        return mid;
    if(arr[mid]<key){
        return bs(arr,mid+1,high,key);
    }
    return bs(arr,low,mid-1,key);
}

int main()
{
    int arr[]={5, 6, 7, 8, 9, 10};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key=10;
    int ans=bs(arr,0,n,key);
    if(ans>=0){
        cout<<key<<" is found at position: "<<ans<<endl;
    }else{
        cout<<key<<" not found in the array"<<endl;
    }
    return 0;
}