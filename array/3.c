#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	int i,j,n,count = 0;
	
	printf("Enter a string: ");
	gets(str);
	for(j=0;str[j];j++)
	n=j;
	for(i=0;i<n;i++)
	{
		count=1;
		if(str[i])
		{
			for(j=i+1;j<n;j++)
			{
				if(str[i]==str[j])
				{
					count++;
					str[j]='\0';
				}
			}
			printf("\nFrequency of %c=%d",str[i],count);
		}
	}
}
