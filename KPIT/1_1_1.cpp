#include<bits/stdc++.h>
using namespace std;

void vowelCounts(char *chptr){
    int count=0;
    while((*chptr) != '\0'){
        (*chptr)=toupper(*chptr);
        if(*chptr =='A' || *chptr=='E' || *chptr=='I' || *chptr=='O' || *chptr=='U'){
            count++;
        }
        chptr++;
    }
    cout<<"Vowel count:"<<count<<endl;
}


int main()
{
    char str[]="PrepInsta";
    vowelCounts(str);
    return 0;
}