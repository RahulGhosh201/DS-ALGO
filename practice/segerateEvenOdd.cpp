#include<bits//stdc++.h>
using namespace std;


void segerateEvenOdd(int arr[], int n){
    int ans[n];
    int p=0;
    for(int i=0;i<n;i++){
        if((arr[i]%2)==0){
            ans[p]=arr[i];
            p++;
        }
    }
    for(int i=0;i<n;i++){
        if((arr[i]%2)!=0){
            ans[p]=arr[i];
            p++;
        }
    }
    std::cout<<"Ans:"<<std::endl;
    for(int i=0;i<n;i++){
        std::cout<<ans[i]<<" ";
    }std::cout<<endl;
}


int main()
{
    int arr[]={1,3,2,4,7,6,9,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    segerateEvenOdd(arr,n);
    return 0;
}