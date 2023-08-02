#include<bits/stdc++.h>
using namespace std;

void mostFrequent(int arr[],int n){
    map<int,int> m;
    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }
    int max=INT_MIN;
    for(auto it: m){
        if(it.second>max){
            max=it.first;
        }
    }
    cout<<"Most frequent element is "<<max<<endl;
}

int main()
{
    int arr[]={10, 10, 20, 10, 20, 30, 20};
    int n=sizeof(arr)/sizeof(arr[0]);
    mostFrequent(arr,n);
    return 0;
}