#include<bits/stdc++.h>
using namespace std;

void re(int arr[], int n){
    // sort(arr,arr+n);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                cout<<"Repeating element: "<<arr[i]<<endl;
                return;
            }
        }
    }
    cout<<"No repeating element"<<endl;
}

int main()
{
    int arr[]={10, 5, 3, 4, 3, 5, 6};
    int n=sizeof(arr)/sizeof(arr[0]);
    re(arr,n);
    return 0;
}