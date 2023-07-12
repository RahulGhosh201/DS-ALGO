#include<bits/stdc++.h>
using namespace std;

void wave(int arr[],int n){
    sort(arr,arr+n);
    int p=0,q=n-1;
    while(p!=q){
        cout<<arr[p]<<" "<<arr[q]<<" ";
        p++;
        q--;
    }
}

int main()
{
    int arr[]={5, 8, 1, 4, 2, 9, 3, 7, 6};
    int n=sizeof(arr)/sizeof(arr[0]);
    wave(arr,n);
    return 0;
}