#include<bits/stdc++.h>
using namespace std;

int main()
{
    // string str1="rahul ";
    // string str2="ghosh";
    // string result=str1+str2;
    // cout<<"Resultant string is "<<str1.append(str2)<<endl;
    char str1[100]="rahul ",str2[100]="ghosh",str3[100];
    int i=0,j=0;

    while(str1[i]!='\0'){
        str3[j]=str1[i];
        i++;
        j++;
    }
    i=0;
    while(str2[i]!='\0'){
        str3[j]=str2[i];
        i++;
        j++;
    }
    str3[j]='\0';
    cout<<"Concatenated string: "<<str3<<endl;
    return 0;
}