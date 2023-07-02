#include<bits/stdc++.h>
using namespace std;

void kle(int arr[], int n, int k){
    sort(arr,arr+n);
    int p=n-1;
    while(k>0){
        cout<<arr[p]<<" ";
        p--;
        k--;
    }
}

int main()
{
    int arr[]={11,5,12,9,44,17,2};
    int k=2;
    int n=sizeof(arr)/sizeof(arr[0]);
    kle(arr,n,k);
    return 0;
}