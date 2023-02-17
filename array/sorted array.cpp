#include<stdio.h>
int main()
{
	int a[20],n,i,j,p=0,s=0;
	printf("Enter number of elements:");
	scanf("%d",&n);
	printf("\nEnter %d numbers:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		p=i;
		for(j=i+1;j<n;j++)
		{
			if (a[p]>a[j])
			p=j;
		}
		if(p!=i)
		{
			s=a[i];
			a[i]=a[p];
			a[p]=s;
		}
	}
	printf("\nSorted array:");
	for(i=0;i<n;i++)
	printf("%d\n",a[i]);
	return 0;
}
