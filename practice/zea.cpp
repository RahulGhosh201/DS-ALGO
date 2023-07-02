#include<bits/stdc++.h>
using namespace std;

void zea(int arr[], int n){
    int ans[n];
    int k=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            ans[k]=arr[i];
            k++;
        }
    }
    for(int i=k;i<n;i++){
        ans[i]=0;
    }
    cout<<"ans: "<<endl;
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }cout<<endl;
}

int main()
{
    int arr[]={1, 2, 0, 4, 3, 0, 5, 0};
    int n=sizeof(arr)/sizeof(arr[0]);
    zea(arr,n);
    return 0;
}