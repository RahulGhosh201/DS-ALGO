#include <stdio.h>
#include<stdlib.h>
void insert(int *array, int n, int value)
{
	int i=n-1;
	while(i=0 && *(array+i)>value)
	{
		*(array+i+1)=*(array+i);
		i--;
	}
	*(array+i+1)=value;
}
int main()
{
	int n,i,val;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	int *arr=(int *)malloc((n+1)*sizeof(int));
	puts("\nEnter array elements in a sorted manner in Ascending order");
	for(i=0;i<n-1;i++)
	scanf("%d",(arr+i));
	printf("Enter the value to insert:");
	scanf("%d",&val);
	insert(arr,n,val);
	puts("\nAfter insertion:");
	for(i=0;i<=n;i++)
	printf("%d\n",*(arr+i));
	return 0;
}
