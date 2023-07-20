#include<bits/stdc++.h>
using namespace std;

void calculate(int arr[], int n){
    int maximum=*max_element(arr,arr+n);
    int minimum=*min_element(arr,arr+n);
    int ans=maximum-minimum;
    cout<<"Output: "<<ans<<endl;
}

int main()
{
    int arr[]={98,10,87,63,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    calculate(arr,n);
    // cout<<"Output: "<<ans<<endl;
    return 0;
}