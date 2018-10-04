#include<iostream>

using namespace std;

class Que
{
	public:
	int f;
	int r;
	int q[10];
	Queue()
	{
		r=-1;
		f=-1;
	}
	void en()
	{
		if(r==9)
			cout<<"\nOver Flow";
		else if((f==0&&r=size-1)||f=r+1)	//(f==-1&&r==-1)
		{
			f=0;
			r=0;
		}
		else
		{
			int n;
			cout<<"\nEnter Element\n";
			cin>>n;
			s1.push(n);
			q[r]=n;
			r++;
			
		}
	}

	void de()
	{
		if(f==-1)
			cout<<"\nUnder Flow";
		else if (f==r)
			{
				r=-1;
				f=r;
			}
		else
			f++;
		
	}
	
	void dis()
	{
		for(int i=f;i<=r;i++)
		{
			cout<<endl<<q[i];
		}
	}
	void rev()
	{
		while(s1.size()>0)
		{
			int n=s1.top();
			s1.pop();
			s2.push(n);
		}
		s1.pop();
		while(s2.size()>0)
		{
			int n=s2.top();
			s2.pop();
			s1.push(n);
		}
	}
};

int main()
{
	int n=0;
	Que qe;
	while(n!=4)
	{
		cout<<"Select a option,\n1. Insert\n2. Delete \n3. Show Queue \n4. Exit\n";
		cin>>n;
		switch(n)
		{
			case 1:
				{
					qe.en();
					break;
				}
			case 2:
				{
					qe.de();
					break;
				}
			case 3:
				{
					qe.dis();
					break;
				}
			case 4:
				{
					cout<<"\nExiting Program";
					break;
				}
			default :cout<<"Invalid option";
		}
	}
	return 0;
}
