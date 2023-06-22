#include<bits//stdc++.h>
using namespace std;

void sortInWave(int arr[], int n){
    sort(arr,arr+n);
    for(int i=0;i<n-1;i+=2){
        swap(arr[i],arr[i+1]);
    }

    std::cout<<"Ans:"<<endl;
    for(int i=0;i<n;i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;

}
int main()
{
    int arr[]={10,90,49,2,1,5,23};
    int n=sizeof(arr)/sizeof(arr[0]);
    sortInWave(arr,n);
    return 0;
}