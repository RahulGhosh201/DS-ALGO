#include<bits/stdc++.h>
using namespace std;

void lt(int arr[], int n){
    int first=INT_MIN,second=INT_MIN,third=INT_MIN;
    for(int i=0;i<n;i++){
        if(first<arr[i]){
            third=second;
            second=first;
            first=arr[i];
        }
        else if(second<arr[i] && first!=arr[i]){
            third=second;
            second=arr[i];
        }
        else if(third<arr[i] && second!=arr[i]){
            third=arr[i];
        }
    }
    cout<<"first: "<<first<<"Second: "<<second<<"Third: "<<third<<endl;
}

int main()
{
    int arr[]={1,2,4,5,3,4,8,7,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    lt(arr,n);
    return 0;
}