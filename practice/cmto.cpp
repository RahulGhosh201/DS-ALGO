#include<bits/stdc++.h>
using namespace std;

void cmto(int arr[], int n, int k){
    unordered_map<int,int> m;
    int t=n/k;
    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }
    for(auto it : m){
        if(it.second>t){
            cout<<it.first<<" ";
        }
    }
}

int main()
{
    int arr[]={3,1,2,2,1,2,3,3};
    int k=4;
    int n=sizeof(arr)/sizeof(arr[0]);
    cmto(arr,n,k);
    return 0;
}