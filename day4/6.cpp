#include<bits/stdc++.h>
using namespace std;

void missing(int arr[],int n){
    int sum=((n+1)*(n+2))/2;
    int add=0;
    for(int i=0;i<n;i++){
        add=add+arr[i];
    }
    int ans=sum-add;
    cout<<"Missing character: "<<ans<<endl;
}

int main()
{
    int arr[]={1, 2, 7, 6, 3, 4, 8};
    int n=sizeof(arr)/sizeof(arr[0]);
    missing(arr,n);
    return 0;
}