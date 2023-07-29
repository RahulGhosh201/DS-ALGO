#include<bits/stdc++.h>
using namespace std;

void maxInTwo(int arr1[], int arr2[],int n,int m){
    // int max1= *max_element(arr1,arr1+n);
    // int max2= *max_element(arr2,arr2+m);
    int max1=INT_MIN,max2=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr1[i]>max1){
            max1=arr1[i];
        }
    }
    for(int i=0;i<m;i++){
        if(arr2[i]>max2){
            max2=arr2[i];
        }
    }
    int sum = max1+max2;
    cout<<"Ans: "<<sum<<endl;
}

int main()
{
    int arr1[]={2,1,5,7,10};
    int arr2[]={3,6,8,1,2};
    int n=sizeof(arr1)/sizeof(arr1[0]);
    int m=sizeof(arr2)/sizeof(arr2[0]);
    maxInTwo(arr1,arr2,n,m);
    return 0;
}