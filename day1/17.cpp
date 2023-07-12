#include<bits/stdc++.h>
using namespace std;

void series(int n){
    char x='A',y='B';
    for(int i=0;i<n;i++){
        cout<<x<<y<<x<<" ";
        x=(char)(x+1);
        y=(char)(y+1);
    }cout<<endl;
}

int main(){
    series(4);
    return 0;
}