#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if(n<=1)//base case
    {
        return false;
    }
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n=0;
    cout<<"Enter the range:"<<endl;
    cin>>n;
    int count=0;
    for(int i=2;i<n;i++)
    {
        if(isPrime(i))
        {
            count++;
        }
    }
    cout<<"Number of prime numbers in "<<n<<" is: "<<count<<endl;
}