#include<bits/stdc++.h>
using namespace std;

//it will generate 6 7 1 2 3 4 5
// void rotateArr(int arr[], int n,int d){
//     int ans[n];
//     for(int i=0;i<n;i++){
//         int index=((n-d)+i)%n;
//         ans[i]=arr[index];
//     }
//     cout<<"Ans: ";
//     for(int i=0;i<n;i++){
//         cout<<ans[i]<<" ";
//     }cout<<endl;
// }


//it will generate 3 4 5 6 7 1 2 
void rotateArr(int arr[], int n,int d){
    int ans[n],k=0;
    d=d%n;
    for(int i=d;i<n;i++){
        ans[k++]=arr[i];
    }
    for(int i=0;i<d;i++){
        ans[k++]=arr[i];
    }
    cout<<"Ans: ";
    for(int i=0;i<k;i++){
        cout<<ans[i]<<" ";
    }cout<<endl;
}

int main()
{
    int arr[]={1, 2, 3, 4, 5, 6, 7};
    int d=2,n=sizeof(arr)/sizeof(arr[0]);
    rotateArr(arr,n,d);
    return 0;
}