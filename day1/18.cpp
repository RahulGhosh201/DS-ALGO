#include<bits/stdc++.h>
using namespace std;

void series(int n){
    char x='A';
    char arr[]="52934";
    for(int i=0;i<n;i++){
        cout<<x<<arr[i]<<" ";
        x=(char)(x+1);
    }cout<<endl;
}

int main()
{
    series(5);
    return 0;
}