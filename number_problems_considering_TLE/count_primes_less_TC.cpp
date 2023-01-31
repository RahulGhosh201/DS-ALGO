//using Sieve of Eratosthenes-->
    //step-1: mark each no till n-1 from 2 as prime number
    //step-2: n-1 obdhi j number gulo a6e tader namta te j value gulo pabo tader k non prime mark kore debo
    //step-2: mark kora number gulo count korbo setai desirable answer

#include<bits/stdc++.h>
using namespace std;

int countPrime(int n)
{
    int count=0;
    vector<bool> prime(n+1,true);//it initializess all the elements present in the vector as true
    prime[0]=prime[1]=0;//base case
    for(int i=2;i<n;i++)
    {
        if(prime[i])
        {
            count++;
        
            for(int j=2*i;j<n;j+=i)
            {
                prime[j]=0;
            }
        }
    }
    return count;
}

int main()
{
    int n=0;
    cout<<"Enter the range:"<<endl;
    cin>>n;
    cout<<"Number of prime numbers in "<<n<<" is: "<<countPrime(n)<<endl;
}
