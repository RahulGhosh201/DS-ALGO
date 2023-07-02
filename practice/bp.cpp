#include<bits/stdc++.h>
using namespace std;

void bp(int arr[], int n){
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    cout<<"Bitonic Point: "<<max<<endl;
}

int main()
{
    int arr[] = {1, 3, 50, 10, 9, 7, 6};
    int n=sizeof(arr)/sizeof(arr[0]);
    bp(arr,n);
    return 0;
}