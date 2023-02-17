#include<stdio.h>
int main()
{
	int array[100],i,j,n,value;
	printf("Enter number of elements in array:");
	scanf("%d",&n);
	printf("\nEnter %d elements",n);
	for(i=0;i<n;i++)
	scanf("%d",&array[i]);
	printf("\nEnter the value to insert:");
	scanf("%d",&value);
	for(i=0;i<n;i++)
	{if(array[i]>value)
	{
	for(j=n-1;j>=i;j--)
	{
		array[j+1]=array[j];
		array[i]=value;
		break;
		}	n++;
	}
	}
	printf("\nThe array after insertion of %d is",value);
	for(i=0;i<n+1;i++)
	{
		printf("\t%d",array[i]);
	}
	return 0;
}
