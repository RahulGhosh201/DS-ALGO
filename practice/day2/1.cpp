#include<bits/stdc++.h>
using namespace std;

void decimalToOctal(int n){
    int temp=n,octal[100],i=0;
    while(temp!=0){
        int rem=temp%8;
        octal[i]=rem;
        temp=temp/8;
        i++;
    }cout<<"Decimal: "<<n<<" -> Octal: ";
    for(int j=i-1;j>=0;j--){
        cout<<octal[j];
    }cout<<endl;
}

int binaryToDecimal(int n){
    int temp=n,power=1,decimal=0;
    while(temp){
        int rem=temp%10;
        decimal=decimal+rem*power;
        temp=temp/10;
        power=power*2;
    }
    return decimal;
}

int main()
{
    int n=10000;
    int x=binaryToDecimal(n);
    cout<<"Binary: "<<n<<" ";
    decimalToOctal(x);
    return 0;
}