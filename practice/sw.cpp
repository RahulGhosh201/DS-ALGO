#include<bits/stdc++.h>
using namespace std;

void sw(int arr[], int n){

    for(int i=0;i<n-1;i+=2){
        swap(arr[i],arr[i+1]);
    }
    cout<<"Ans: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

int main()
{
    int arr[] = {10, 5, 6, 3, 2, 20, 100, 80};
    int n=sizeof(arr)/sizeof(arr[0]);
    sw(arr,n);
    return 0;
}