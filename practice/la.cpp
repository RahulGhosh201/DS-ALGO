#include<bits/stdc++.h>
using namespace std;

void leaders(int arr[], int n){
    vector<int> v;
    int max=INT_MIN,count=0,k=0;
    for(int i=n-1;i>=0;i--){
        if(arr[i]>max){
            v.push_back(arr[i]);
            max=arr[i];
            count++;
        }
    }
    int ans[count];
    cout<<"Ans: "<<endl;
    for(auto it: v){
        ans[k++]=it;
    }
    for(int i=count-1;i>=0;i--){
        cout<<ans[i]<<" ";
    }cout<<endl;
}

int main()
{
    int arr[]= {16, 17, 4, 3, 5, 2};
    int n=sizeof(arr)/sizeof(arr[0]);
    leaders(arr,n);
    return 0;
}