#include<bits/stdc++.h>
using namespace std;

void seo(int arr[], int n){
    int k=0;
    int ans[n];
    for(int i=0;i<n;i++){
        if((arr[i]%2)==0){
            ans[k]=arr[i];
            k++;
        }
    }
    for(int i=0;i<n;i++){
        if((arr[i]%2)!=0){
            ans[k]=arr[i];
            k++;
        }
    }
    cout<<"Ans: "<<endl;
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }cout<<endl;
}

int main()
{
    int arr[]={1,9,5,3,2,6,7,11};
    int n=sizeof(arr)/sizeof(arr[0]);
    seo(arr,n);
    return 0;
}