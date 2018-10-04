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
	void insert_head(int n)	// Insert node at head of list
	{
		node *temp;
		temp=create(n);
		if(head==NULL)
		{
			head=temp;
			cout<<"\nList was empty. Element inserted at head";
		}
		else
		{
			temp->next=head;
			head=temp;
		}
	}
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
	void middle(int n,int i)
	{
		node *temp,*t,*c;
		temp=create(n);
		if(head==NULL)
		{
			head=temp;
			cout<<"\nList was empty. Element inserted at head";
		}
		else
		{
			t=head;
//		int v=1;
		while(i!=t->d)
		{
			t=t->next;
//			v++;
		}
		c=t->next;
		t->next=temp;
		temp->next=c;
		}
	}
};

int main()
{
	Linked_List l;
	int n,c=0,i=0;
	while(c!=5)
	{
		cout<<"\nSelect option :\n1. Insert at head\n2. Insert at tail\n3. Display the list\n4. Insert at middle \n5. End\n";
		cin>>c;
		switch(c)
		{
			case 1:{
				cout<<"\nEnter Data : ";
				cin>>n;
				l.insert_head(n);
				break;
			}
			case 2:{
				cout<<"\nEnter Data : ";
				cin>>n;
				l.insert_tail(n);
				break;
			}
			case 3:{
				l.display();
				break;
			}
			case 4:{
				cout<<"\nEnter Data : ";
				cin>>n;
				cout<<"\nEnter element after which to enter : ";
				cin>>i;
				l.middle(n,i);
				break;
			}
			case 5: {
				break;
			}
			default :{
				cout<<"\nInvalid option selected";
				break;
			}
		}
		
	}	
}
