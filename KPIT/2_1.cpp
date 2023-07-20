#include<bits/stdc++.h>
using namespace std;

void rotation(string str, int k){
    int n=str.length();
    if(k>n){
        cout<<str<<"-Position exceeds length"<<endl;
        return;
    }
    for(int i=0;i<k;i++){
        cout<<(char)tolower(str[n-k+i]);
    }
    for(int i=0;i<n-k;i++){
        cout<<(char)tolower(str[i]);
    }
}
//yzabcdx
int main()
{
    string str="abcdxyz";
    int k=2;
    rotation(str,k);
    return 0;
}