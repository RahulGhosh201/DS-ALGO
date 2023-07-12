#include<bits/stdc++.h>
using namespace std;

void series(int n){
    int a=14;
    for(int i=0;i<n;i++){
        int b=a*2;
        cout<<a<<" "<<b<<" ";
        a=b;
        a-=8;
    }
}

int main()
{
    series(3);
    return 0;
}