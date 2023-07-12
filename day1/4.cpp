#include<bits/stdc++.h>
using namespace std;

void series(int n){
    int a=1,b=2;
    cout<<a<<" "<<" ";
    while(n>0){
        int temp=a*b;
        cout<<temp<<" ";
        b=a;
        a=temp;
        n--;
    }
}

int main()
{
    int n=6;
    series(n);
    return 0;
}