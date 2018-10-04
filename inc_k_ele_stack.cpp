#include<iostream>
#include<stack>

using namespace std;
//stack <int> s;
//stack <int> inc(stack <int> s,int n)
//void dec(int n,int q,int m)
void myfunction(std::stack<int>& s,int n,int q,int m)
{
	if(m>0)
	{

		int a;
		a=s.top();
		m--;
		s.pop();
		dec(s,n,q,m);
		s.push(a);

	}
	else if(n>0)
	{
		int a;
		a=s.top();
		a-=q;
		n--;
		s.pop();
		dec(s,n,q,m);
		s.push(a);
	}
}
int main()
{
	int n,c;
	stack <int> s;
	cout<<"Enter no elements : ";
	cin>>n;
	//stack <int> s;
	for(int i=0;i<n;i++)
	{
		cin>>c;
		s.push(c);
	}
	cout<<"\nEnter no of elements to be incremented : ";
	cin>>c;
	int m;
	cout<<"\n Enter no to be excluded ";
	cin>>m;
	cout<<"\nEnter no to be subtracted : ";
	int q;
	cin>>q;
	dec(s,c,q,m);
	for(int i=0;i<n;i++)
	{
		c=s.top();
		cout<<c<<" ";
		s.pop();
	}
	return 0;
}
