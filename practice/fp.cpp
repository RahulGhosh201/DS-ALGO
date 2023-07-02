#include<bits/stdc++.h>
using namespace std;

void fp(int arr[], int n,int key){
    int diff=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            diff=abs(arr[j]-arr[i]);
            if(diff==key){
                cout<<arr[i]<<" "<<arr[j]<<endl;
                return;
            }
        }
    }
}

int main()
{
    int arr[]={5,20,3,2,50,80};
    int key=78;
    int n=sizeof(arr)/sizeof(arr[0]);
    fp(arr,n,key);
    return 0;
}