#include<bits/stdc++.h>
using namespace std;

void is(int arr[], int n,int num){
    int index=0;
    for(int i=0;i<n;i++){
        if(arr[i]>num){
            index=i;
            break;
        }
    }
    int ans[n+1];
    for(int i=0;i<index;i++){
        ans[i]=arr[i];
    }
    ans[index]=num;
    for(int i=index;i<n;i++){
        ans[i+1]=arr[i];
    }
    for(int i=0;i<n+1;i++){
        cout<<ans[i]<<" ";
    }cout<<endl;
    
}

int main()
{
    int arr[]={1,2,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    is(arr,n,3);
    return 0;
}