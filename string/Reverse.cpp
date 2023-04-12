#include<bits/stdc++.h>
using namespace std;


//using stack
// void recursiveReverse(string str){
//     stack<char> st;
//     for(int i=0;i<str.length();i++){
//         st.push(str[i]);
//     }

//     for(int i=0;i<str.length();i++){
//         str[i]=st.top();//top element ta str e store h66e
//         st.pop();//top element ta remove hye ja66e jar fole topr next element ta store hote par6e
//     }
//     cout<<"After reversing str= "<<str<<endl;    
// }


// string reverseStr(string str){
//     int n=str.length();
//     for(int i=0;i<n/2;i++){
//         swap(str[i],str[n-i-1]);
//     }
//     return str;
// }

// void reverseStr(string str){
//     for(int i=str.length();i>=1;i--){
//         cout<<str[i];
//     }cout<<endl;
// }


int main()
{
    string str="geeksforgeeks";
    cout<<"Before reversing str= "<<str<<endl;
    // recursiveReverse(str);
    // string tr=reverseStr(str);
    reverse(str.begin(),str.end());
    cout<<"After "<<str;
    return 0;
}