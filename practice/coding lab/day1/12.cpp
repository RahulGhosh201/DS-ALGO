#include<bits/stdc++.h>
using namespace std;

void series(int n){
    char c='A';
    int x=1;
    for(int i=0;i<n;i++){
        cout<<c<<x<<" ";
        c=(char)(c+1);
        x*=2;
    }
}

int main()
{
    series(6);
    return 0;
}