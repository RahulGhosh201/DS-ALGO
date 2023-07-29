#include<bits/stdc++.h>
using namespace std;

void smfc(string str){
    map<char,int> m;
    for(int i=0;i<str.size();i++){
        int index=str[i]-'a';
        m[index]++;
    }
    int k=0,arr[10];

    for(auto it: m){
        arr[k++]=it.second;
    }
    int second=INT_MIN,first=INT_MIN;
    for(int i=0;i<k;i++){
        if(first<arr[i]){
            first=arr[i];
        }
        else if(second<arr[i] && second!=arr[i]){
            second=arr[i];
        }
    }
    cout<<"Ans: "<<second<<endl;
}

int main()
{
    string str="aacbacbabaz";
    smfc(str);
    return 0;
}