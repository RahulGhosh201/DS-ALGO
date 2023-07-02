#include<bits/stdc++.h>
using namespace std;

void ar(int arr[], int n, int d){
    int ans[n];
    for(int i=0;i<n;i++){
        int index=(i+d)%n;
        ans[index]=arr[i];
    }
    cout<<"ans: "<<endl;
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }cout<<endl;
    
}

int main()
{
    int arr[]={1, 3, 5, 7, 9};
    int n=sizeof(arr)/sizeof(arr[0]);
    ar(arr,n,1);
    return 0;
}