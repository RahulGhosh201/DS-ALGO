#include<stdio.h>
void insert();
int main()
{
	int value,i;
	int arr[20],n;
	printf("Enter the size of the array:");
	scanf("%d", &n);
	printf("\nEnter elements in ascending order:");
	for(i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("\nEnter the element to insert:");
	scanf("%d",&value);
	insert(arr,n,value);
	n=n+1;
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}

void insert( int arr[], int n, int value)
{
	int j=0;
	j-n-1;
	while(j>=0 && arr[j]>value)
	{
		arr[j+1]=arr[j];
		j--;
	}
	arr[j+1]=value;
}
