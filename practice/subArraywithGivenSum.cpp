#include<bits/stdc++.h>
using namespace std;

void SAGS(int arr[], int n, int sum)
{
 
    // Pick a starting point
    for (int i = 0; i < n; i++) {
        int currentSum = arr[i];
 
        if (currentSum == sum) {
            cout << "Sum found at indexes " << i << endl;
            return;
        }
        else {
            // Try all subarrays starting with 'i'
            for (int j = i + 1; j < n; j++) {
                currentSum += arr[j];
 
                if (currentSum == sum) {
                    cout << "Sum found between indexes "
                         << i << " and " << j << endl;
                    return;
                }
            }
        }
    }
    cout << "No subarray found";
    return;
}

int main()
{
    int arr[] = {1, 4, 20, 3, 10, 5};
    int sum = 33;
    int n=sizeof(arr)/sizeof(arr[0]);
    SAGS(arr,sum,n);
    return 0;
}