#include<bits/stdc++.h>
using namespace std;

void apo(int arr[], int n){
    map<int,int> m;
    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }
    int ans=0;
    for(auto it: m){
        if(it.second==1){
            ans=it.first;
            break;
        }
    }
    cout<<"Ans: "<<ans<<endl;
}

int main()
{
    int arr[] = {2, 3, 5, 4, 5, 3, 4};
    int n=sizeof(arr)/sizeof(arr[0]);
    apo(arr,n);
    return 0;
}