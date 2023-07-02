#include<bits/stdc++.h>
using namespace std;

void maxmin(int arr[], int n){
    int p=0, q=n-1;
    int ans[n];
    for(int i=0;i<n;i++){
        if(i%2==0){
            ans[i]=arr[q--];
        }else{
            ans[i]=arr[p++];
        }
    }
    cout<<"ans: "<<endl;
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }cout<<endl;
}

int main()
{
    int arr[]={1, 2, 3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    maxmin(arr,n);
    return 0;
}