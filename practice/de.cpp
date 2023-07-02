#include<bits/stdc++.h>
using namespace std;

void de(int arr[], int n){
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        while(i<n-1 && arr[i]==arr[i+1]){
            i++;
        }
        cout<<arr[i]<<" ";
    }cout<<endl;
}

int main()
{
    int arr[]={12, 10, 9, 45, 2, 10, 10, 45};
    int n=sizeof(arr)/sizeof(arr[0]);
    de(arr,n);
    return 0;
}