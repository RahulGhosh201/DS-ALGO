#include<bits/stdc++.h>
using namespace std;

void series(int n){
    int a=7,b=10;
    for(int i=0;i<n/2;i++){
        cout<<a<<" "<<b<<" ";
        a++;
        b++;
    }cout<<endl;
}

int main()
{
    series(6);
    return 0;
}