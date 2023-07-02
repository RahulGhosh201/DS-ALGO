#include<bits/stdc++.h>
using namespace std;

void s(int arr[], int n){
    int i=0;
    while(i<n){
        int correct=arr[i]-1;
        if (arr[correct] != arr[i]){
            swap(arr[i],arr[correct]);
        }else{
            i++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

int main()
{
    int arr[]={10, 7, 9, 2, 8, 3, 5, 4, 6, 1};
    int n=sizeof(arr)/sizeof(arr[0]);
    s(arr,n);
    return 0;
}