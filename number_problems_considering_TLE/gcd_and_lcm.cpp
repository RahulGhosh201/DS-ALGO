//it should be done using recursion

#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
    if(a==0)
    {
        return b;
    }
    if(b==0)
    {
        return a;
    }
    while(a!=b)
    {
        if(a>b)
        {
            a=a-b;
        }
        else
        {
            b=b-a;
        }
    }
    return a;
}

int lcm(int a,int b)
{
    int temp=a*b;
    int ans=temp/gcd(a,b);
    return ans;
}

int main()
{
    int a=0,b=0;
    cout<<"Enter first number:";
    cin>>a;
    cout<<endl<<"Enter second number:";
    cin>>b;
    cout<<"GCD of "<<a<<" & "<<b<<" is "<<gcd(a,b)<<endl;
    cout<<"LCM of "<<a<<" & "<<b<<" is "<<lcm(a,b);

}