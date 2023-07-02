#include<bits//stdc++.h>
// using namespace std;

void movingZeroes(int arr[], int n){
     
    // int zeroCount=0;
    std::cout<<"Before rearranging the array:"<<std::endl;
    for(int i=0;i<n;i++){
        std::cout<<arr[i]<<" ";
    }std::cout<<std::endl;
    int nonZeeroCount=0;
    // for(int i=0;i<n;i++){
    //     if(arr[i]==0){
    //         zeroCount++;
    //     }
    // }
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            std::swap(arr[i],arr[nonZeeroCount]);
            nonZeeroCount++;
        }
    }
    for(int i=nonZeeroCount;i<n;i++){
        arr[i]=0;
    }

    std::cout<<"After rearranging the array:"<<std::endl;
    for(int i=0;i<n;i++){
        std::cout<<arr[i]<<" ";
    }std::cout<<std::endl;
}

int main()
{
    int arr[]={0,1,2,0,32,5,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    movingZeroes(arr,n);
    return 0;
}