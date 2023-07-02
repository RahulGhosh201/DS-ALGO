#include<bits/stdc++.h>
using namespace std;

void sags(int arr[], int sum, int n){
    for(int i=0;i<n;i++){
        int currentSum=arr[i];
        if(currentSum==sum){
            cout<<"found at "<<i<<endl;
            return;
        }else{
        for(int j=i+1;j<n;j++){
            currentSum+=arr[i];
            if(currentSum==sum){
                cout<<"found at "<<i<<" and "<<j<<endl;
                return;
            }
        }
        }
    }
    cout<<"Not found"<<endl;
}

int main()
{
    int arr[] = {1, 4, 20, 3, 10, 5};
    int sum = 33;
    int n=sizeof(arr)/sizeof(arr[0]);
    sags(arr,sum,n);
    return 0;
}