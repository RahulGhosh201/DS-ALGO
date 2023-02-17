#include<stdio.h>
int main()
{
	int arr[100],i,n,p,val;
	printf("Input the size of the array:");
	scanf("%d",&n);
	printf("Input %d elements in the array in ascending order:\n",n);
	for(i=0;i<n;i++)
	{
		printf("element-%d:",i);
		scanf("%d",arr[i]);
	}
	printf("Enter the value to be inserted:\n");
	scanf("%d",&val);
	printf("The exist array list is:\n");
	for(i=0;i<n;i++)
	printf("%5d",&arr[i]);
	for(i=0;i<n;i++)
	{
		if(val<arr[i])
		{
			p=i;
			break;
		}
		else
		{
			p=i+1;
		}
	}
	for(i=n+1;i>=p;i--)
	{
		arr[i]=arr[i-1];
		arr[p]=val;
	}
	printf("\nAfter inserting the list is:\n");
	for(i=0;i<n;i++)
	printf("%5d",arr[i]);
	printf("\n");
}
