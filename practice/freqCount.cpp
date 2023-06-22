#include<bits/stdc++.h>
using namespace std;

void freqCount(int arr[], int n){
    map<int,int> m;
    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }
    for(auto it: m){
        std::cout<<it.first<<": "<<it.second<<endl;
    }
}

int main()
{
    int arr[]={1,2,3,4,5,6,7,1,5,2,3,5,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    freqCount(arr,n);
    return 0;
}