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
	int v,c=0,a=0;
	for(int i=0;i<n;i++)
	{
		v=q.front();
		q.pop();
		if(v%3==0&&c<v/3)
		{
			c=v/3;
			a=v;
		}
	}
	cout<<"\n Greatest multiple of 3 is "<<a;
	return 0;
};
