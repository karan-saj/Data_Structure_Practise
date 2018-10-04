#include<iostream>
#include<queue>

using namespace std;

int main()
{
	int n;
	cout<<"Enter no of elements : ";
	cin>>n;
	queue <int> q;
	
	for(int i=0;i<n;i++)
	{
		int a;
		cin>>a;
		q.push(a);
	}
	int b;
	cout<<"\nEnter no to find greatest multiple of ";
	cin>>b;
	int v,c=0,a=0;
	for(int i=0;i<n;i++)
	{
		v=q.front();
		q.pop();
		if(v%b==0&&c<v/b)
		{
			c=v/b;
			a=v;
		}
	}
	if(a!=0)
		cout<<"\n Greatest multiple of "<<b<<" is "<<a;
	else
		cout<<"\n There is no Multiple";
	return 0;
};
