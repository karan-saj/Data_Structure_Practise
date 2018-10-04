#include<iostream>
#include<queue>

using namespace std;

int main()
{
	queue <int> q;
	int n,s,f=0,v;
	cout<<"\nEnter string size : ";
	cin>>n;
	int a[n];
	cout<<"\nEnter Page slots : ";
	cin>>s;
	int c[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	q.push(a[0]);
	f++;
	int co=1;
	int i=1;
	while(co<s)
	{
		v=q.front();
		q.pop();
		if(a[i]==v)
		{
			q.push(v);
		}
		else
		{
			q.push(v);
			q.push(a[i]);
			co++;
		}
		i++;
	}
	while(i<n)
	{
		v=q.front();
		q.pop();
		if(v!=a[i])
		{
			if(v!=a[i-s+1]&&v!=a[i-s+2]&&v!=a[i-s+3])
			v=a[i];
			f++;

		}
		q.push(v);
		i++;
	}
	cout<<"No. of page faults are : "<<f;
	return 0;
}
