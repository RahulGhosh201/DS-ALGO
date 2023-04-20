#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[],int n,int l,int r,int x){
    while(l<=r){
        int m=l+(r-l)/2;
        if(arr[m]==x){
            return m;
        }
        if(arr[m]<x){
            l=m+1;
        }
        else
            r=m-1;
    }
    return -1;
}

int main(){
    int arr[]={10,20,30,4,50,5,45};
    int n=sizeof(arr)/sizeof(arr[0]);
    int l=0,x=0;
    int r=n-1;
    cout<<"Enter the element to be searched:"<<endl;
    cin>>x;
    int result=binarySearch(arr,n,l,r,x);
    if(result==-1){
        cout<<x<<" is not found"<<endl;
    }
    else{
        cout<<x<<" is found at "<<result+1<<" index"<<endl;
    }

}