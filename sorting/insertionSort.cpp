    #include<bits/stdc++.h>
    using namespace std;
    void insertionSort(int arr[],int n)
    {
        int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
 
        // Move elements of arr[0..i-1], 
        // that are greater than key, to one
        // position ahead of their
        // current position
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    }
    void printArr(int arr[],int n)
    {
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    int main()
    {
        int n=0,arr[20];
        cout<<"Enter the size of the array:"<<endl;
        cin>>n;
        cout<<"Enter the elements of the array:"<<endl;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cout<<"Before sorting:"<<endl;
        printArr(arr,n);
        insertionSort(arr,n);
        cout<<"After sorting:"<<endl;
        printArr(arr,n);

    }