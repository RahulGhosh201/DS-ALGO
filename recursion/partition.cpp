#include<bits/stdc++.h>
using namespace std;

int partiition(int arr[],int s,int e)
{
    int cnt=0;
    int pivot=arr[s];
    for(int i=s+1;i<=e;i++)
    {
        if(arr[i]<=pivot)
            cnt++;
    }

    int pivotIndex=cnt+pivot;
    swap(arr[pivotIndex],arr[s]);
    int i=s,j=e;
    while(i<pivotIndex && j>pivotIndex)
    {
        while(arr[i]<pivot)
            i++;
        while(arr[j]>pivot)
            j--;
        if(i<pivotIndex && j>pivotIndex)
            swap(arr[i++],arr[j--]);
    }
    return pivotIndex;
}