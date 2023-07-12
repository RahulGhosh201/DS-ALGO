#include<bits/stdc++.h>
using namespace std;

void freq(int arr[], int n){
    map<int,int> m;
    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }
    for(auto it: m){
        cout<<it.first<<" -> "<<it.second<<endl;
    }
}

void charFreq(string s){
    int count[26]={0},i=0,j=0;
    while(s[i]!='\0'){
        if(s[i]>='a' && s[i]<='z'){
            j=s[i]-'a';
            ++count[j];
        }
        ++i;
    }
    for(int i=0;i<26;i++){
        cout<<char(i+'a')<<" -> "<<count[i]<<endl;
    }
}

int main()

{
    int arr[]={1,2,4,5,1,5,2,1};
    string s="hello world";
    int n=sizeof(arr)/sizeof(arr[0]);
    // freq(arr,n);
    charFreq(s);
    return 0;
}