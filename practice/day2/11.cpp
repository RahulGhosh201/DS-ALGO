#include<bits/stdc++.h>
using namespace std;
 
bool isprime(int x)
{
    for (int i = 2; i * i <= x; i++)
        if (x % i == 0)
            return false;
    return true;
}
 
bool isSumOfKprimes(int N, int K)
{
    if (N < 2*K)
        return false;
    if (K == 1)
        return isprime(N);
 
    if (K == 2)
    {
        if (N % 2 == 0)
            return true;
        return isprime(N - 2);
    }
    return true;
}
 

int main()
{
    int n = 30, k = 3;
    if (isSumOfKprimes (n, k))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}