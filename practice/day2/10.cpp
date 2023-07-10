#include<bits/stdc++.h>
using namespace std;

int gcds(int a, int b){
    while(a!=b){
        if(a>b){
            a-=b;
        }else{
            b-=a;
        }
    }
    return a;
}

int main()
{
    int a=5,b=6;
    int gcd=gcds(a,b);
    int product=a*b;
    int lcm=product/gcd;
    cout<<"lcm("<<a<<","<<b<<"): "<<lcm<<endl;
    cout<<"gcd("<<a<<","<<b<<"): "<<gcd<<endl;

}