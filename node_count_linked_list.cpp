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
	void count(node *t)
	{
		static int cou=0;
		if(t->next==NULL)
		{
			cou++;
			cout<<"No of nodes are : "<<cou;
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
	Linked_List l;
	int n,c=0,i=0;
	while(c!=4)
	{
		cout<<"\nSelect option :\n1. Insert \n2. Count nodes\n3. Display the list\n4. End\n";
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
				node *t;
				t=head;
				l.count(t);
				break;
			}
			case 3: {
				l.display();
				break;
			}
			case 4: {
				break;
			}
			default :{
				cout<<"\nInvalid option selected";
				break;
			}
		}

	}
}
