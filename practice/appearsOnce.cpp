#include<bits//stdc++.h>
using namespace std;

void appearsOnce(int arr[], int n){
    int ans=0;
    // map<int,int> m;
    // for(int i=0;i<n;i++){
    //     m[arr[i]]++;
    // }
    // for(auto it: m){
    //     if(it.second==1){
    //         ans=it.first;
    //     }
    // }
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count==1){
            ans=arr[i];
            break;
        }
    }
    std::cout<<"Ans: "<<ans;

}

int main()
{
    int arr[] = {2, 3, 5, 4, 5, 3, 4,2,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    appearsOnce(arr,n);
    return 0;
}