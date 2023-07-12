#include<bits/stdc++.h>
using namespace std;

void pallindrome(int n){
    int temp=n,ans=0;
    while(temp){
        int rem=temp%10;
        ans=ans*10+rem;
        temp=temp/10;
    }
    if(ans==n){
        cout<<n<<" is a pallindrome"<<endl;
    }
    else{
        cout<<n<<" is not a pallindrome"<<endl;
    }
}

int main()
{
    pallindrome(151);
    pallindrome(123);
    return 0;
}