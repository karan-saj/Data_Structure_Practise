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
	void del(int n)
	{
		node *t,*p;
		t=head;
		int l=count(t);
		if(n==1)
		{
			node *c;
			t=t->next;
			head=t;
			delete(c);
		}
		else if(n==0)
		{
			node *c;
			if(t->next==NULL)
			{
				node *c;
				t=t->next;
				head=t;
				delete(c);

			}
			else
			{
				while(t->next!=NULL)
				{
					p=t;
					t=t->next;
				}
				c=t;
				p->next=NULL;
				delete(c);
			}
		}
		else
		{
			int v=1;
			if(v<n)
			{
				p=t;
				t=t->next;
				v++;
			}
			t=t->next;
			p->next=t;
		}
	}
};

int main()
{
	Linked_List l;
	int n,c=0,i=0,v;
	while(c!=6)
	{
		cout<<"\nSelect option :\n1. Insert \n2. Delete head \n3. Delete tail \n4. Delete nth element \n5. Display the list \n6. End\n";
		cin>>c;
		switch(c)
		{
			case 1:{
				cout<<"\nEnter Data : ";
				cin>>n;
				l.insert_tail(n);
				break;
			}
			case 2:{
				v=1;
				l.del(v);
				break;
			}
			case 3:{
				v=0;
				l.del(v);
				break;
			}
			case 4:{
				cout<<"\nEnter node to deleted : ";
				cin>>v;
				l.del(v);
				break;
			}
			case 5: {
				l.display();
				break;
			}
			case 6: {
				break;
			}
			default :{
				cout<<"\nInvalid option selected";
				break;
			}
		}
		
	}	
}
