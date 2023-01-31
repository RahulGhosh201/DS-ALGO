//here,tc->o(n) we should avoid it & make o(log n)
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a=0,b=0;
    cout<<"Enter value of a:";
    cin>>a;
    cout<<"Enter value of b:";
    cin>>b;
    int result=1;
    for(int i=1;i<=b;i++)
    {
        result=result*a;
    }
    cout<<a<<"^"<<b<<" is "<<result;
    
}