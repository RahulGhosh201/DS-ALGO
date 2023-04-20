#include<bits/stdc++.h>
using namespace std;

// int repeatingElem(int arr[], int n){
//     int j=0;
//     int temp=arr[j];
//     for(int i=1;i<n;i++){
//         if(temp==arr[i]){
//             return temp;
//         }
//         else{
//             temp=arr[j++];
//         }
//     }
// }

// int repeatingElem(int arr[], int n){
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]==arr[j]){
//                 return arr[i];
//             }
//         }
//     }
// }


int repeatingElem(int arr[], int n){
    map<int,int> m;
    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }
    for(auto it:m){
        if(it>1){
            return it;
        }
    }
}

int main()
{
    int arr[]={10, 5, 3, 4, 3, 5, 6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans=repeatingElem(arr,n);
    cout<<"First repeating element is: "<<ans<<endl;
    return 0;
}