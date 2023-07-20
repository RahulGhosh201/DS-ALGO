// At least one numeric digit
// – At Least one Small/Lowercase Letter
// – At Least one Capital/Uppercase Letter
// – Must not have space 
// – Must not have slash (/)
// – At least 6 characters
#include<bits/stdc++.h>
using namespace std;

int checkPassword(char str[], int n){
    if(n>6){
        return 0;
    }
    int a=0,lower=0,upper=0,digit=0;
    while(a<n){
        if(str[a]==' '||str[a]=='/'){
            return 0;
        }
        if(str[a]>=65 && str[a]<=90){
            upper++;
        }
        if(str[a]-32 >=65 && str[a]-32<=90){
            lower++;
        }
        if(str[a]-'0'>=0 && str[a]-'0'<=9){
            digit++;
        }
        a++;
    }
    return upper>0 && lower>0 && digit>0;
}

int main(){
    string str;
    cout<<"Enter your password: ";
    cin>>str;
    int n=str.length();
    char *c=&str[0];
    if(checkPassword(c,n)){
        cout<<"Password is valid"<<endl;
    }else{
        cout<<"Password is not valid"<<endl;
    }
    return 0;
}