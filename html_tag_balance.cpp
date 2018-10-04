#include<iostream>
#include<stack>
using namespace std;

int main()
{
	int n=0;
	do
	{
		if(n%2!=0)
		{
			cout<<"\nInvalid Entry\nEnter an even number \n";
		}
		
		cout<<"Enter Size of stack : " ;
		cin>>n;

	}
	while(n%2!=0);
	stack <string> s;
	for(int i=0;i<n;i++)
	{
		string q;
		cin>>q;
		s.push(q);
	}
	int c=0;
	for(int i=0;i<n;i++)
	{
		string a;
		a=s.top();
		s.pop();
		if(a[1]!='/')
		{
			c--;
		}
		else 
		{
			c++;
		}
	}
	if(c==0)
	{
		cout<<"Tags are balanced";
	}
	else
	{
		cout<<"Tags are not balanced";
	}
	
} */
