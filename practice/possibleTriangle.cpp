#include<bits/stdc++.h>
using namespace std;


void possibleTriangles(int arr[], int n){
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]>arr[k]  && arr[i]+arr[k]>arr[j] && arr[k]+arr[j]>arr[i]){
                    count++;
                }
            }
        }
    }
    std::cout<<"Ans: "<<count<<endl;
}

int main()
{
    int arr[]={10, 21, 22, 100, 101, 200, 300};
    int n=sizeof(arr)/sizeof(arr[0]);
    possibleTriangles(arr,n);
    return 0;
}