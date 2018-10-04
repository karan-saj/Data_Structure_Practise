#include<stdio.h>

int main()
{
	int n,s=0,i;
	do
	{
		printf("Enter Array Size : ");
		scanf("%d",&n);
	}
	while(n%2!=0);
	
	int a[n];
	do
	{
		printf("Enter Array elements : ");
		for(i=0;i<n;i++)
		{
			scanf("%d",a[i]);
			if(a[i]%2==0)
			{
				s++;
			}
			else
			{
				s--;
			}
		}
	}
	while(s!=0);
	return 0;
}
