#include<bits/stdc++.h>
using namespace std;

void print(int arr[][4]){
    cout<<"Elements in the matrix are: "<<endl;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
    }cout<<endl;
}

int main()
{
    int arr[4][4];
    cout<<"Enter elements of the matrix: "<<endl;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    print(arr);
    return 0;
}