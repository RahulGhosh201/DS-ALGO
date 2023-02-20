#include<stdio.h>

void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
        printf("\n");
    }
}
    

void interchange(int arr[],int a,int b){//pointer gulo increase or decrease hoar por jokhn pivot r sathe q pointer r or p pointer r sathe q pointer interchange
    int temp;
    temp=arr[a];
    arr[a]=arr[b];
    arr[b]=temp;
}

// int pLeft(int arr[],int low,int high){//when pivot element is the first element of the array
//     int i=low;
//     int j=high+1;
//     int pivot=arr[low];
//     while(i<j){//jotokhon na i pointer r index < j
//         do{
//             i++;
//         }while(i<=j && arr[i]<pivot);//we have to maintain that arr[i],pivet r theke 6oto hoy

//         do{
//             j--;
//         }while(arr[j]>pivot);

//         if(i<j){
//             interchange(arr,i,j);
//         }
//     }
//     interchange(arr,low,j);
//     return j;
// }

// int pRight(int arr[],int low,int high){//when pivot element is the last element of the array
//     int i=low-1;
//     int j=high;
//     int pivot=arr[high];
//     while(i<j){
//         do{
//             i++;
//         }while(arr[i]<pivot);

//         do{
//             j--;
//         }while(j>=0 && arr[j]>pivot);

//         if(i<j){
//             interchange(arr,i,j);
//         }
//     }
//     interchange(arr,i,high);
//     return i;
// }

int pMiddle(int arr[],int low,int high){//when pivot element is the middle element of the array
    int i=low-1;
    int j=high+1;
    int mid=(low+high)/2;
    int pivot=arr[mid];
    while(i<j){
        do{
            i++;
        }while(arr[i]<pivot);

        do{
            j--;
        }while(j>=0 && arr[j]>pivot);

        if(i<j){
            interchange(arr,i,j);
        }
    }
    interchange(arr,mid,j);
    return j;
}

int lomuto(int arr[],int low,int high){
    int i=low-1;
    int pivot=arr[high];
    for(int j=low;j<high;j++){
        if(arr[j]<=pivot){
            i++;
            interchange(arr,i,j);
        }
    }
    i++;
    interchange(arr,i,high);
    return i;
}
void QuickSort(int arr[],int low,int high){
    int partIndex;
    // if(low==high){
    //     printf("%d",low);
    // }
    if(low<high){
        partIndex=lomuto(arr,low,high);
        QuickSort(arr,low,partIndex-1);
        QuickSort(arr,partIndex+1,high);
    }
}


int main(){
    int arr[]={1,5,2,20,10,50};
    int n=6;
    printf("ELements of the array before sorting....\n");
    printArr(arr,n);
    QuickSort(arr,0,n-1);
    printf("ELements of the array after sorting....\n");
    printArr(arr,n);
    return 0;
}