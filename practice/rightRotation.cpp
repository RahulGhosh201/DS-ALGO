#include<bits//stdc++.h>
using namespace std;


void arrayRotation(int arr[], int n, int d){
    int ans[n];

    //right rotation
    // int q=n-(d%n),p=0;
    // for(int i=0;i<d;i++){
    //     ans[q++]=arr[i];
    // }
    // for(int i=d;i<n;i++){
    //     ans[p++]=arr[i];
    // }

    //reverse algo approach
    // std::reverse(arr,arr+n);
    // std::reverse(arr+d,arr+n);
    // std::reverse(arr,arr+(n-d));
    std::cout<<"Ans:"<<std::endl;
    for(int i=0;i<n;i++){
        std::cout<<ans[i]<<" ";
    }std::cout<<endl;
}


int main()
{
    int arr[]={1,3,5,7,9};
    int d=1;
    int n=sizeof(arr)/sizeof(arr[0]);
    arrayRotation(arr,n,d);
    return 0;
}