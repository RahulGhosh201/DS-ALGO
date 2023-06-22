#include<bits/stdc++.h>
#include<vector>
using namespace std;

void leaders(int arr[], int n){
    // for(int i=0;i<n;i++){
    //     int j;
    //     for(j=i+1;j<n;j++){
    //         if(arr[i]<=arr[j]){
    //             break;
    //         }
           
    //     }
    //      if(j==n)
    //     {
    //         std::cout<<arr[i]<<" ";
    //     }
    // }

    vector<int> vc;
    int max=INT_MIN;
    for(int i=n-1;i>0;i--){
        if(arr[i]>max){
            vc.push_back(arr[i]);
            max=arr[i];
        }
    }

    std::cout<<"Ans: "<<std::endl;
    for(auto it:vc){
        std::cout<<it<<" ";
    }std::cout<<std::endl;
}

int main()
{
    int arr[]= {16, 17, 4, 3, 5, 2};
    int n=sizeof(arr)/sizeof(arr[0]);
    leaders(arr,n);
    return 0;
}