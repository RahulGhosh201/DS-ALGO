#include <bits/stdc++.h>
using namespace std;

void soln(int arr[], int n)
{
    int a = 0, b = n - 1, k = 0;
    int temp[n];
    while (a < b)
    {
        temp[k++] = arr[b--];
        temp[k++] = arr[a++];
    }
    cout << "Ans: ";
    for (int i = 0; i < n; i++)
    {
        cout << temp[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    soln(arr, n);
    // cout<<"Ans: ";
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }cout<<endl;
    return 0;
}