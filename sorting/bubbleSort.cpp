    #include<bits/stdc++.h>
    using namespace std;
    void bubbleSort(int arr[],int n)
    {
        for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<n-i-1;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    swap(arr[j],arr[j+1]);
                }
            }
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
        bubbleSort(arr,n);
        cout<<"After sorting:"<<endl;
        printArr(arr,n);

    }