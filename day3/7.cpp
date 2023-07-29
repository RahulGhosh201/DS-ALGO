#include<bits/stdc++.h>
using namespace std;

void countVowels(string str){
    int count=0;
    for(int i=0;i<str.size();i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            count++;
        }
    }
    cout<<"No of vowels in "<<str<<" is "<<count<<endl;
}

void upper(string str){
    transform(str.begin(),str.end(),str.begin(), ::toupper);
    cout<<str<<endl;
} 

void rev(string str){
    transform(str.begin(),str.end(),str.begin(),::toupper);
    int n=str.size();
    for(int i=0;i<n/2;i++){
        swap(str[i],str[n-i-1]);
    }
    cout<<str<<endl;
}

int main()
{
    string str="information";
    countVowels(str);
    upper(str);
    rev(str);
    return 0;
}