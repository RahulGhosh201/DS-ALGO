#include<bits/stdc++.h>
using namespace std;

void cpt(int arr[], int n){
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]<(arr[j]+arr[k]) && arr[j]<(arr[i]+arr[k]) && arr[k]<(arr[i]+arr[j]))
                    count++;
            }
        }
    }
    cout<<"Ans: "<<count<<endl;
}

int main()
{
    int arr[]={4,6,3,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    cpt(arr,n);
    return 0;
}