#include<bits/stdc++.h>
using namespace std;

int once(int arr[], int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    return ans;
}

int main(){
    int arr[]={2, 3, 5, 4, 5, 3, 4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans=once(arr,n);
    cout<<"Ans: "<<ans<<endl;
    return 0;
}