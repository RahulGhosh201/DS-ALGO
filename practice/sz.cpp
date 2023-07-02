#include<bits/stdc++.h>
using namespace std;

void nz(int arr[], int n){
    sort(arr,arr+n);
    cout<<arr[0]<<" "<<arr[n-1]<<endl;
}

int main()
{
    int arr[]={1,60,-10,70,-80,85};
    int n=sizeof(arr)/sizeof(arr[0]);
    nz(arr,n);
    return 0;
}