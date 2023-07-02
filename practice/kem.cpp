#include<bits/stdc++.h>
using namespace std;

void kem(int arr[][4],int k){
    int n=16;
    int m=0;
    int temp[n];
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            temp[m++]=arr[i][j];
        }
    }
    sort(temp,temp+n);
    cout<<temp[k-1]<<endl;

}

int main()
{
    int arr[4][4];
    cout<<"Enter the elements: "<<endl;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    int k=7;
    kem(arr,k);
    return 0;
}