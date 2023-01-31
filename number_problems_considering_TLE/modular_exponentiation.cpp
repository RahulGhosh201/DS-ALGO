//(x^n)%m
#include<bits/stdc++.h>
using namespace std;

int modularExponentiation(int x,int n,int m)
{
    int res=1;
    while(n>0)
    {
        if(n&1)//odd
        {
            res=(1LL*(res) * (x)%m)%m;
        }
        x=(1LL * (x)%m * (x)%m)%m;
        n=n>>1;//right shift means n=n/2
    }
    return res; 
}

int main()
{
    int x=0,m=0,n=0;
    cout<<"Enter X: ";
    cin>>x;
    cout<<"Enter m: ";
    cin>>m;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"("<<x<<"^"<<n<<")%"<<m<<": "<<modularExponentiation(x,n,m);
}