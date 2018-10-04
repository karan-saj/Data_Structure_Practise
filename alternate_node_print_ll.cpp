#include<iostream>

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
			cout<<"\nList was empty. Element inserted at head";
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
				cout<<t->d<<endl;
				t=t->next;
			}
		}
	}
	void del()
	{
		node *t,*p;
		t=head;
		while(t->next!=NULL)
		{
			p=t;
			node *c;
			t=t->next;
			c=t;
			if(t->next==NULL)
			{
				break;
			}
			t=t->next;
			p->next=t;
			delete(c);
		}
	}
};

int main()
{
	Linked_List l;
	int n,c=0,i=0,v;
	while(c!=3)
	{
		cout<<"\nSelect option :\n1. Insert \n2. Display the list \n3. End\n";
		cin>>c;
		switch(c)
		{
			case 1:{
				cout<<"\nEnter Data : ";
				cin>>n;
				l.insert_tail(n);
				break;
			}
			case 2: {
				l.del();
				l.display();
				break;
			}
			case 3: {
				break;
			}
			default :{
				cout<<"\nInvalid option selected";
				break;
			}
		}

	}
}
