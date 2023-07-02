#include <bits//stdc++.h>
using namespace std;

void evenGreaterOdd(int arr[], int n)
{
    sort(arr, arr + n);
    int ans[n];
    // int k = n / 2;
    // for (int i = 1; i < n; i += 2)
    // {
    //     ans[i] = arr[k];
    //     k++;
    // }
    // int m = 0;
    // for (int i = 0; i < n; i += 2)
    // {
    //     ans[i] = arr[m];
    //     m++;
    // }
    int p=0,q=n-1;
    for(int i=0;i<n;i++){
        if((i)%2==0){
            ans[i]=arr[p++];
        }
        else{
            ans[i]=arr[q--];
        }
    }
    std::cout<<"Ans:"<<endl;
    for(int i=0;i<n;i++){
        std::cout<<ans[i]<<" ";
    }
    std::cout<<std::endl;
}

int main()
{
    int arr[] = {1,2,2,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    evenGreaterOdd(arr, n);
    return 0;
}