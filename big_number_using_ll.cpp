#include<iostream>
#include<string.h>
using namespace std;

struct node	// Create linked list structure
{
	int d;	
	node *next;
};
node *head=NULL;	//Initialise head = NULL

class Linked_List
{
	public:
	void insert_tail(int n)	//Insert node at end of list
	{
		node *temp,*t;
		temp=create(n);
		if(head==NULL)
		{
			head=temp;
//			cout<<"\nList was empty. Element inserted at head";
		}
		else
		{
			t=head;
		while(t->next!=NULL)
		{
			t=t->next;
		}
		t->next=temp;
		temp->next=NULL;
		}
	}
	node* create(int n)	// Create a node
	{
		node *p=new node;
		p->d=n;
		p->next=NULL;
		return p;
	}
	void display()
	{
		node *t;
		t=head;
		if(head==NULL)
		{
			cout<<"\nThere is no list";
		}
		else
		{
			while(t!=NULL)
			{
				char c;
				c=t->d;
				cout<<c;
				t=t->next;
			}
		}
	}
	
	int count(node *t)
	{
		static int cou=0;
		if(t->next==NULL)
		{
			cou++;
			return cou;
		}
		else
		{
			cou++;
			t=t->next;
			count(t);
		}
	}
	

};

int main()
{
	Linked_List l,l1;
	int n,c=0,i=0,v;
	string s;
	cout<<"\nEnter first number : ";
	cin>>s;
	while(s[i]!='\0')
	{
		n=s[i];
		l.insert_tail(n);
		i++;
	}
	cout<<"\nEnter second number : ";
	cin>>s;
	while(s[i]!='\0')
	{
		n=s[i];
		l1.insert_tail(n);
		i++;
	}
	
	l.display();
	return 0;	
}
