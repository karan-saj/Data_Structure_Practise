#include<iostream>
using namespace std;

class Stack
{
	
public:
	
	int s;
	int a[s];
	int top=0;
	
	Stack(int x)
	{
		s=x;
	}
	void push(int x)
	{
		if(top==4)
		cout<<"Stack Overflow";
		else
		a[top]=x;
		top++;
	}
	
	void pop()
	{
		if(top==0)
		cout<<"Stack Underflow";
		else
		cout<<a[top];
		top--;
	}
	void  display()
	{
		for(int i=4;i>=0;i--)
		cout<<a[i]<<endl;
	}
	 
	
};

int main()
{
	int n,v,si,c=1;;
	
	cout<<"Enter Size";
	cin>>si;
	Stack q(si);
	
	while(c==1)	
	{
		cout<<"\nSelect Choice: \n1. Push\n2. Pop\n3. Display\n4. Exit\n  ";
		cin>>n;
		switch(n)
		{
			case 1: {
				cout<<"\nEnter Element : ";
				cin>>v;
				q.push(v);
				break;
			}
			case 2: {
				q.pop();
				break;
			}
			case 3: {
				q.display();
				break;
			}
			case 4: {
				c--;
				break;
			}
		}
		
	}
	return 0;
}
