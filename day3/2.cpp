#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    if(n>=1)
        return n*factorial(n-1);
    else    
        return 1;
}

int main()
{
    int n=5;
    int ans=factorial(n);
    cout<<"Factorial of "<<n<<" is "<<ans<<endl;
    return 0;
}