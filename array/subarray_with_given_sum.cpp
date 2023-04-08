#include<bits/stdc++.h>
using namespace std;


void subArr(int arr[],int n,int target){
    int ans1=0,ans2=0,i=0,j=0;
    for(i=0;i<n;i++){
        int sum=arr[i];
        
        for(j=i+1;j<n;j++){
            sum+=arr[j];
            if(sum==target){
                cout<<i<<" "<<j;
                return;
            }
        }
    }
    // cout<<"Ans: "<<ans1<<" , "<<ans2<<endl;
}

int main(){
    int arr[]={1,4,20,3,10,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target=33;
    subArr(arr,n,target);
    return 0;
}