#include<iostream>
#include<string.h>

using namespace std;

struct node	// Create linked list structure
{
	string d;
	node *next;	// traverse b/w main ll
	node *down;	// traverse in tail ll
};

struct tree	// Create linked list structure for friend link list
{
	string d;
	node *nxt;	// traverse b/w main ll
};


class Linked_List
{
	public:
		node* head=NULL;	// for main ll
		tree* heed=NULL;	// for friend ll

	void insert_tail(string n)	//Insert node at end of list of a friend list;
	{
		tree *temp,*t;
		temp=create_ll(n);
		if(heed==NULL)	// if the list is empty
		{
			heed=temp;
			cout<<"\nList was empty. Element inserted at head of new list";
		}
		else	// if the list is non empty
		{
			t=heed;
		while(t->nxt!=NULL)
		{
//			t=t->nxt;//* Resolve error
		}
//		t->nxt=temp;//* Resolve error
		temp->nxt=NULL;
		}
	}

	void insert(string n)	//Insert node at end of list of a main list;
	{
		node *temp,*t;
		temp=create(n);
		if(head==NULL)	//if the list is empty
		{
			head=temp;
			cout<<"\nList was empty. Element inserted at head of new list";
		}
		else	// if the list is non empty
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

	node* create(string n)	// Create a node for friend list and main list
	{
		node *p=new node;
		p->d=n;
		p->next=NULL;
		p->down=NULL;
		return p;
	}

	tree* create_ll(string n)	// Create a node for friend list and main list
	{
		tree *p=new tree;
		p->d=n;
		p->nxt=NULL;
		return p;
	}

	void display()	// dislpay main ll
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

	void del(string s, string s1)
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
	Linked_List l;	// l object created for linked list
	
	int n,i=0,no;	// declaration of variables
	/*
		* n = number of people
		* i = iterator
		* no = number of friends of a person
	*/
	string s,s1;	// string variable for char array scan
	
	cout<<"\nEnter number of friends to maintain list for : ";	// Scan total no of people to maintain list for
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		cout<<"\nEnter Name of person to create a list : ";	//	Scan total name of the person
		cin>>s;
		l.insert(s);
		cout<<"\nEnter number of friends : ";	// Scan number of friends of person
		cin>>no;
		cout<<"\nEnter names of friends  : \n";
		for(int j=0;j<no;j++)
		{
			cin>>s;
			l.create_ll(s);
		}
	}

// Code block to delete a element

	cout<<"\nEnter person name from whom to delete a friend : ";
	cin>>s;
	cout<<"\nEnter friends name : ";
	cin>>s1;
	l.del(s,s1);
	l.display();
	
	return 0;
}
