#include<bits//stdc++.h>
using namespace std;

void largestThree(int arr[],int size)
{
    // int ans[10];
    // vector<int> ans;
    // sort(arr,arr+size);
    // for(int i=0;i<3;i++){
    //     ans[i]=arr[size-i-1];//just last r 3 te element store h66e
    // }
    std::cout<<"The largest 3 elements are:";
    // for(int i=0;i<3;i++){
    //     std::cout<<ans[i]<<" ";
    // }std::cout<<endl;


    //..without taking extra space
    // for(int i=size-1;i>size-4;i--){
    //     std::cout<<arr[i]<<" ";
    // }


    // for(int i=0;i<3;i++){
    //     ans.push_back(arr[size-i-1]);
    // }
    // for(auto it: ans){
    //     std::cout<<it<<" ";
    // }std::cout<<endl;

    int first=INT_MIN,second=INT_MIN,third=INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i] > first){
            third=second;
            second=first;
            first=arr[i];
        }
        else if(arr[i] > second && arr[i] != first){
            third=second;
            second=arr[i];
        }
        else if(arr[i] > third && arr[i] != second){
            third=arr[i];
        }
    }
    std::cout<<first<<" "<<second<<" "<<third<<endl;


}

int main()
{
    int arr[]={10,1,5,20,30};
    int size=sizeof(arr)/sizeof(arr[0]);
    largestThree(arr,size);
    return 0;
}