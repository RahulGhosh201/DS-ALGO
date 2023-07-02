#include<bits//stdc++.h>
using namespace std;

void leftRotate(int arr[], int n, int k){
    int mod=k%n;
    for(int i=0;i<n;i++){
        std::cout<<(arr[(mod+i)%n])<<" ";
    }
    std::cout<<endl;
}

int main()
{
    int arr[]={1,3,5,7,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k1=14;
    leftRotate(arr,n,k1);
    return 0;
}