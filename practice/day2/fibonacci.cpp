#include<bits/stdc++.h>
using namespace std;

void fibonacci(int n){
    int a=1,b=1,temp=0;
    for(int i=0;i<n;i++){
        cout<<a<<" "<<b<<" ";
        temp=a+b;
        a=temp;
        b=a+b;
    }

}
// 1 1 2 3 5 8 13
int main()
{
    fibonacci(5);
    return 0;
}