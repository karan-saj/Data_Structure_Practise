#include<stdio.h>

int main()
{
	int i,n,s,l,c;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	for(i=0;i<n;i++)
	{
		if(l<a[i])
		{
			l=i;
		}
		if(s>a[i])
		{
			s=i;
		}
	}
	c=a[l];
	a[l]=a[s];
	a[s]=c;
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	return 0;
}
