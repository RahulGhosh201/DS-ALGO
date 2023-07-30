// N = 9
// Arr[] = {9, 4, -2, -1, 5, 0, -5, -3, 2}
// 5 -5 2 -2 4 -8 7 1 8 0
#include<bits/stdc++.h>
using namespace std;

void alternativeArr(int arr[], int n){
    int positive[n],negative[n],temp[n];
    int a=0,b=0,c=0,d=0,e=0;
    for(int i=0;i<n;i++){
        if(arr[i]>=0){
            positive[a++]=arr[i];
        }else{
            negative[b++]=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(i%2==0 && a!=0){
            temp[c++]=positive[d++];
            a--;
        }else if(i%2!=0 && b!=0){
            temp[c++]=negative[e++];
            b--;
        }
    }
    while(a!=0){
        temp[c++]=positive[d++];
        a--;
    }
    while(b!=0){
        temp[c++]=negative[e++];
        b--;
    }
    cout<<"Ans: ";
    for(int i=0;i<c;i++){
        cout<<temp[i]<<" ";
    }cout<<endl;
}

int main()
{
    int N = 10;
    int Arr[] = {-5, -2, 5, 2, 4, 7, 1, 8, 0, -8};
    alternativeArr(Arr,N);
    return 0;
}