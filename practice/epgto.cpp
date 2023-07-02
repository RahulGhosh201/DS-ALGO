#include<bits/stdc++.h>
using namespace std;

void epgto(int arr[], int n){
    int ans[n];
    sort(arr,arr+n);
    int p=0,q=n-1;
    for(int i=0;i<n;i++){
        if(i%2==0){
            ans[i]=arr[p++];
        }else{
            ans[i]=arr[q--];
        }
    }
    cout<<"ans: "<<endl;
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }cout<<endl;
}

int main()
{
    int arr[]={1, 2, 2, 1};
    int n=sizeof(arr)/sizeof(arr[0]);
    epgto(arr,n);
    return 0;
}