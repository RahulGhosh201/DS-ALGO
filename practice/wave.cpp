#include<bits//stdc++.h>
using namespace std;

void wave(int arr[], int n){
    int ans[n];
    sort(arr,arr+n);
    int p=0,q=n-1;
    for(int i=0;i<n;i++){
        if(i%2==0){
            ans[i]=arr[p++];
        }else{
            ans[i]=arr[q--];
        }
    }
    std::cout<<"Ans:"<<endl;
    for(int i=0;i<n;i++){
        std::cout<<ans[i]<<" ";
    }std::cout<<endl;
}

int main()
{
    int arr[]={1,2,3,5,6,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    wave(arr,n);
    return 0;
}
