#include<bits/stdc++.h>
using namespace std;

void series(int n){
    int a=21,b=9;
    cout<<a<<" ";
    for(int i=0;i<n;i++){
        cout<<b<<" "<<a<<" ";
        b+=2;
    }cout<<endl;
}
int main()
{
    series(4);
    return 0;
}