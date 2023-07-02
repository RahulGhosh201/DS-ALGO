#include<bits/stdc++.h>
using namespace std;

// void freqCount(int arr[], int n){
//     map<int,int> m;
//     for(int i=0;i<n;i++){
//         m[arr[i]]++;
//     }
//     for(auto it:m){
//         std::cout<<it.first<<" - "<<it.second<<endl;
//     }
// }

void freqCount(string s){
    int count[26]={0};
    for(int i=0;i<s.length();i++){
        int index=s[i]-'a';
        count[index]++;
    }
    for(int i=0;i<s.length();i++){
        std::cout<<s[i]<<" - "<<count[i]+1<<endl;
    }
}

int main()
{
    // int arr[]={1,2,3,4,5,6,7,1,5,2,3,5,3,4};
    string s="hello world";
    // int n=sizeof(arr)/sizeof(arr[0]);
    // freqCount(arr,n);
    freqCount(s);
    return 0;
}