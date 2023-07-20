#include<bits/stdc++.h>
using namespace std;

void calculate(int arr[], int n){
    int min=arr[0];
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    // cout<<min<<" "<<max<<endl;
    int ans=max-min;
    cout<<"Output: "<<ans<<endl;
    
    
}

int main()
{
    int arr[]={190,56,87,100,-10};
    int n=sizeof(arr)/sizeof(arr[0]);
    calculate(arr,n);
    // cout<<"Output: "<<ans<<endl;
    return 0;
}