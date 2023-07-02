#include<stdio.h>

void rev(int arr[], int n){
    printf("Elements of the array after reversal: \n");
    for(int i=n-1;i>=0;i--){
        printf("%d ",arr[i]);
    }
}

int main()
{
    int arr[10];
    int n=0;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("\n Enter the elements of the array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    rev(arr,n);
    return 0;
}