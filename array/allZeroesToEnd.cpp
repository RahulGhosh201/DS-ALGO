#include<bits/stdc++.h>
using namespace std;



void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

void allZeroesToEnd(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            arr[count++]=arr[i];
        }
    }
    for(int i=count;i<n;i++){
        arr[i]=0;
    }
    cout<<"After rearranging elements of the array:"<<endl;
    printArr(arr,n);
}



int main()
{
    int arr[]={0,1,2,3,4,0,0,5,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Before rearranging elements of the array:"<<endl;
    printArr(arr,n);
    allZeroesToEnd(arr,n);
    return 0;
}