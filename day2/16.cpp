#include<bits/stdc++.h>
using namespace std;

void factors(int n){
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }cout<<endl;
}

int main()
{
    factors(6);
    return 0;
}