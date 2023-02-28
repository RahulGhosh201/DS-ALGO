#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int arr[], int n) 
{ 
    int i, j, min_idx; 
    // One by one move boundary of 
    // unsorted subarray 
    for (i = 0; i < n-1; i++)//eta n-1 obdhi chalate hbe jate j k n obdhi chalano jay i+1 r madhyome
    {
        // Find the minimum element in 
        // unsorted array 
        min_idx = i; //min-idx e first element k store korlam
        for (j = i+1; j < n; j++)//j k i+1 theke chalabo
        {
          if (arr[j] < arr[min_idx]) //jodi remaining element r modhye min-idx r element r theke small element pai then min-idx k updat kore debo j position e element peye6i tar sathe
              min_idx = j;
        }
        // Swap the found minimum element 
        // with the first element 
        if (min_idx!=i)
            swap(&arr[min_idx], &arr[i]);//min_idx update hye gele then ith element r sathe min_idx r current element r sathe swap kore debo
    }
}

void printArr(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[20], n = 0;
    
    cout << "Enter the size of the array" << endl;
    cin >> n;
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<<"Elements of the array before sorting:"<<endl;
    printArr(arr,n);
    selectionSort(arr,n);
    cout<<"Elements of the array after sorting:"<<endl;
    printArr(arr,n);


}