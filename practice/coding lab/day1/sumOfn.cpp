#include<bits/stdc++.h>
using namespace std;

void sumOfn(int n){
    int sum=(n*(n+1))/2;
    cout<<"Sum of "<<n<<" natural numbers is: "<<sum<<endl;
}

int main()
{
    int n=5;
    sumOfn(n);
    return 0;
}