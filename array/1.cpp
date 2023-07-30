// N = 5, D = 2
// arr[] = {1,2,3,4,5}
// Output: 3 4 5 1 2

#include<bits/stdc++.h>
using namespace std;

void rotateArr(int arr[], int D, int size){
    int temp[size];
    int k=0;
    D=D%size;
    for(int i=D;i<size;i++){
        temp[k++]=arr[i];
    }
    for(int i=0;i<D;i++){
        temp[k++]=arr[i];
    }
    cout<<"Ans:";
    for(int i=0;i<k;i++){
        cout<<temp[i]<<" ";
    }cout<<endl;
}

int main(){
    int D = 3;
    int arr[] = {2,4,6,8,10,12,14,16,18,20};
    int size=sizeof(arr)/sizeof(arr[0]);
    rotateArr(arr,D,size);
    return 0;
}