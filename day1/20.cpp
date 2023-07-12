#include<bits/stdc++.h>
using namespace std;

void series(int n){
    int a=0,b=0;
    for(int i=0;i<n;i++){
        cout<<a<<" "<<b<<" ";
        a+=2;
        b+=1;
    }cout<<endl;
}

int main()
{
    series(5);
    return 0;
}