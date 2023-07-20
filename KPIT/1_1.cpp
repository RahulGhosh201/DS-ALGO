#include<bits/stdc++.h>
using namespace std;

void countVowel(string str){
    int count=0;
    for(int i=0;i<str.length();i++){
        char temp= tolower(str[i]);
        if(temp=='a' || temp=='e' || temp=='i' || temp =='0' || temp=='u'){
            count++;
        }
    }
    cout<<"Vowels in "<<str<<" are "<<count<<endl;
}


// transform(s2.begin(), s2.end(), s2.begin(), ::tolower); koreo amra lowercase e nie jete pari puro string ta k
int main(){
    string str;
    cout<<"Enter string:";
    cin>>str;
    countVowel(str);
    return 0;
}