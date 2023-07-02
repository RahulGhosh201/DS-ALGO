#include<bits/stdc++.h>
using namespace std;

void nm(int arr[], int n, int m){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int temp=((m+1)*m)/2;
    int ans=temp-sum;
    cout<<"Ans: "<<ans<<endl;
}

int main()
{
    int arr[]={1,2,4,6,3,7,8},m=8;
    int n=sizeof(arr)/sizeof(arr[0]);
    nm(arr,n,m);
    return 0;
}