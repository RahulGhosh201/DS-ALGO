#include<bits/stdc++.h>
using namespace std;

bool isPallindrome(string str){
    int n=str.size(),p=0;
    int q=n-1;
    string temp=str;
    for(int i=0;i<n/2;i++){
        swap(str[p++],str[q--]);
    }
    if(temp==str){
        return 1;
    }else{
        return 0;
    }
}

void check(string str,int k){
    int i=0;
    for(int i=0;i<str.size();i++){
        string temp;
    }
}

int main()
{
    string str="academy";
    check(str,3);
    return 0;
}