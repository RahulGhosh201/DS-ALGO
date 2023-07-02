#include<bits//stdc++.h>
using namespace std;

void secondLargest(int arr[], int n){
    int first=INT_MIN, second=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i] > first ){
            second=first;
            first=arr[i];
        }
        else if(arr[i] > second && arr[i] != first){
            second=arr[i];
        }
    }
    std::cout<<"The second largest element is: "<<second<<endl;
}

int main()
{
    int arr[]={10,2,3,4,50};
    int n=sizeof(arr)/sizeof(arr[0]);
    secondLargest(arr,n);
    return 0;
}