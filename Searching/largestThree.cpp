#include<bits/stdc++.h>
using namespace std;

void largestThree(int arr[],int n){
    int max1=INT_MIN,max2=INT_MIN,max3=INT_MIN;
    if(n<3)
        cout<<"Invalid input"<<endl;
     for(int i=0;i<n;i++){
        if(arr[i]>max1){
            max3=max2;
            max2=max1;
            max1=arr[i];
        }
        else if(arr[i]>max2 && arr[i]!=max1){
            max3=max2;
            max2=arr[i];
        }
        else if(arr[i]>max3 && arr[i]!=max2){
            max3=arr[i];
        }
    }
    cout<<"max1: "<<max1<<" max2: "<<max2<<" max3: "<<max3<<endl;
}

int main(){
    int arr[]={10, 4, 3, 50, 23, 90};
    int n=sizeof(arr)/sizeof(arr[0]);
    largestThree(arr,n);
    return 0;
}