#include<bits/stdc++.h>
using namespace std;

void remove(string str,char c){
    int n=str.length();
    for(int i=0;i<n;i++){
        if(str[i]==c){
            str[i]=str[i+1];
        }
    }
    cout<<"After removal: "<<str<<endl;
}

int main(){
    string str="geeksforgeeks";
    char c='e';
    cout<<"Before removal: "<<str<<endl;
    remove(str,c);
    return 0;
}