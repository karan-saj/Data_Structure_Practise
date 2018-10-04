#include<stdio.h>

int main()
{
	int i,n,sl=0,l,li=0,sli;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	l=a[0];
	sl=0;
	
	for(i=0;i<n;i++)
	{
		if(l<a[i])
		{
			sli=li;
			sl=l;
			l=a[i];
			li=i;
		}
		if(l>a[i]&&sl<a[i])
		{
			sl=a[i];
			sli=i;
		}
	}
	printf("l %d li %d sl %d sli %d",l,li,sl,sli);
	return 0;
}
