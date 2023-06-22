#include<bits/stdc++.h>
using namespace std;

void distinctElements(int arr[], int n){
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        while(i<n-1 && arr[i]==arr[i+1]){
            i++;
        }
        std::cout<<arr[i]<<" ";
    }
    std::cout<<endl;

}

int main()
{
    int arr[]= {12, 10, 9, 45, 2, 10, 10, 45};
    int n=sizeof(arr)/sizeof(arr[0]);
    distinctElements(arr,n);;
    return 0;
}