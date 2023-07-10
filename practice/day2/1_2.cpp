#include<bits/stdc++.h>
using namespace std;

void decimalToOctal(int n){
    int octal[100],i=0;
    int temp=n;
    while(temp!=0){
        int rem=temp%8;
        octal[i]=rem;
        temp=temp/8;
        i++;
    }
    cout<<"Binary: "<<n<<" -> Octal: ";
    for(int j=i-1;j>=0;j--){
        cout<<octal[j];
    }cout<<endl;
}

int main()
{
    int n=16;
    decimalToOctal(n);
    return 0;
}
