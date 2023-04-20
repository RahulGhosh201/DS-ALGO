#include<bits/stdc++.h>
using namespace std;

int missingNum(int arr[],int n){
    int ans=0,temp=1;
    for(int i=0;i<n-1;i++){
        if(temp==arr[i])
            temp++;
        else
            return temp;
    }
} 

int main()
{
    int arr[]={1,2,3,4,6,7,8};
    int n=8;
    int ans=missingNum(arr,n);
    cout<<"Missing number is: "<<ans<<endl;
    return 0;
}