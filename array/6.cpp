// N = 5
// A[] = {0, 1, 2, 3, 4}
// Output:
// 1 1 2 6 24
#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}

void largeFactorial(int arr[], int n){
    vector<int> v;
    for(int i=0;i<n;i++){
        if(arr[i]==0 || arr[i]==1){
            v.push_back(1);
        }else{
            v.push_back(factorial(arr[i]));
        }
    }
    cout<<"Ans: ";
    for(auto it:v){
        cout<<it<<" ";
    }cout<<endl;
}

int main()
{
    int N = 3;
    int A[] = {5,6,3};
    largeFactorial(A,N);
    return 0;
}