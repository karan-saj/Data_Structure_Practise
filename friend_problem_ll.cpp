#include<iostream>
#include<string.h>

using namespace std;

struct node	// Create linked list structure
{
	string d;
	node *next;
};
node *head=NULL;	//Initialise head = NULL
node *head1=NULL;	//Initialise head2 = NULL
class Linked_List
{
	public:
	void insert(string n,int c)	//Insert node at end of list
	{
		if(c==1)
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
		else
		{
			node *temp,*t;
			temp=create(n);
			if(head1==NULL)
			{
				head1=temp;
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

	}
	node* create(string n)	// Create a node
	{
		node *p=new node;
		p->d=n;
		p->next=NULL;
		return p;
	}
	void display()
	{
		node *t,*t1;
		t=head;
		t1=head1;
		if(head==NULL)
		{
			cout<<"\nThere is no list 1";
			while(t1!=NULL)
			{
				cout<<t1->d<<endl;
				t1=t1->next;
			}
		}
		else if(head1==NULL)
		{
			cout<<"\nThere is no list 2";
			while(t!=NULL)
			{
				cout<<t->d<<endl;
				t=t->next;
			}
		}
		else
		{
			cout<<endl;
			while(t!=NULL)
			{
				t1=head1;
				while(t1!=NULL)
				{
					if(t->d==t1->d)
					{
						cout<<t1->d<<endl;
					}
					t1=t1->next;
				}
				t=t->next;
				
			}
		}
	}
};

int main()
{
	Linked_List l;
	string n;
	int c=0,i=0;
	while(c!=3)
	{
		cout<<"\nSelect option :\n1. Insert in Linked List\n2. Display the list\n3. End\n";
		cin>>c;
		switch(c)
		{
			case 1:{
				int h;
				cout<<"\n Select option:\n1. LinkList 1\n2.LInklist 2\n";
				cin>>h;
				cout<<"\nEnter Data : ";
				cin>>n;
				fflush(stdin);
				l.insert(n,h);
				break;
			}
			case 2:{
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
