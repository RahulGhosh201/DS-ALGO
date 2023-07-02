#include<bits/stdc++.h>
using namespace std;

void mr(int arr[], int n){
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    int temp=(max*(max+1))/2;
    int sum=0,repeating=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                repeating=arr[i];
            }
        }
    }
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    sum=sum-repeating;
    int missing=temp-sum;
    cout<<"Missing: "<<missing<<" Repeating: "<<repeating<<endl;
}

int main()
{
    int arr[]={4,3,6,2,1,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    mr(arr,n);
    return 0;
}