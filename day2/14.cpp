#include<bits/stdc++.h>
using namespace std;

void armstrong(int n){
    int temp=n,ans=0;
    while(temp){
        int rem=temp%10;
        ans+=pow(rem,3);
        temp=temp/10;
    }
    if(ans==n){
        cout<<n<<" is a prime number"<<endl;
    }else{
        cout<<n<<" is not a prime number"<<endl;
    }
}

int main()
{
    armstrong(371);
    return 0;
}