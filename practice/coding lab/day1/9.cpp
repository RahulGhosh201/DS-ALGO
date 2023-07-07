#include<bits/stdc++.h>
using namespace std;

void series(int n){
    int a=1;
    for(int i=0;i<n;i++){
        cout<<a<<" "<<a<<" ";
        a+=4;
    }cout<<endl;
}

int main()
{
    series(4);
    return 0;
}