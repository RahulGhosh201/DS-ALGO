#include<bits/stdc++.h>
using namespace std;

int print(string str,int index){
    if(index==str.size()){
        cout<<str<<endl;
    }
    if(str[index]=='?'){
        str[index]='0';
        print(str,index+1);

        str[index]='1';
        print(str,index+1);
    }
    else{
        print(str,index+1);
    }
}

int main(){
    string str="1??0?101";
    print(str,0);
    return 0;
}