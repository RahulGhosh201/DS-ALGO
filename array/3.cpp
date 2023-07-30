#include<bits/stdc++.h>
using namespace std;

void plusOne(int arr[], int n){
    int number=0;
    for(int i=0;i<n;i++){
        number=number*10+arr[i];
    }
    cout<<"Ans: "<<number+1<<endl;
}

int main()
{
    int N = 3;
    int arr[] = {9,9,9};
    plusOne(arr,N);
    return 0;
}