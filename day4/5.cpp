#include<bits/stdc++.h>
using namespace std;

void diagonalSum(int arr[][4]){
    int pSum=0,sSum=0;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(i==j){
                pSum=pSum+arr[i][j];
            }
        }
    }
    cout<<"Primary sum= "<<pSum<<endl;
    for(int i=0;i<4;i++){
        for(int j=3;j>=0;j--){
            sSum=sSum+arr[i][j];
        }
    }
    cout<<"Secondary sum= "<<sSum<<endl;
}

int main()
{
    int arr[4][4]=
    {
        {1,2,3,4},
        {4,3,2,1},
        {7,8,9,6},
        {6,5,4,3}
    };
    // cout<<"Enter elements:"<<endl;
    // for(int i=0;i<4;i++){
    //     for(int j=0;j<4;j++){
    //         cin>>arr[i][j];
    //     }
    // }
    diagonalSum(arr);
    return 0;
}