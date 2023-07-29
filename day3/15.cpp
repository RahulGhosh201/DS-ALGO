#include<bits/stdc++.h>
using namespace std;

void target(int arr[], int k,int n){
    for(int i=0;i<n;i++){
        int a=arr[i];
        for(int j=0;j<n;j++){
            int b=arr[j];
            if(a+b==k){
                cout<<a<<" + "<<b<<"="<<k<<endl;
                
            }
        }
    }
}

int main()
{
    int A[]={1, 4, 15, 6, 10, 2}, K=16;
    int n=sizeof(A)/sizeof(K);
    target(A,K,n);
    return 0;
}