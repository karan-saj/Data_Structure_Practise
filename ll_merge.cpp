#include<iostream>

using namespace std;

struct node	// Create linked list structure
{
	int d;
	node *next;
};
node *head=NULL;	//Initialise head = NULL
node *head1=NULL;	//Initialise head1 = NULL
node *hed=NULL;
class Linked_List
{
	public:
	void insert(int nu,int c)	//Insert node at end of list
	{
		if(c==1)
		{
			node *temp,*t;
			temp=create(nu);
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
			temp=create(nu);
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

	node* create(int nu)	// Create a node
	{
		node *p=new node;
		p->d=nu;
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
		node *t,*t1,*n;
		t=head;
		t1=head1;
		n=hed;
		cout<<endl;
		while(n->next!=NULL)
		{
			if(t!=NULL)
			{
				n=t;
				t=t->next;
				n=n->next;
			}
			if(t1!=NULL)
			{
				n=t1;
				t1=t1->next;
				n=n->next;				
			}
		}
		
	}

};

int main()
{
	Linked_List l;
	int n,c=0,i=0,v;
	while(c!=4)
	{
		
		cout<<"\nSelect option :\n1. Insert \n2. Display the list \n3. Merge \n4. End\n";
		cin>>c;
		switch(c)
		{
			case 1:{
				int f;
				cout<<"\nSelect option : \n1. First LL\n2. Second LL \n";
				cin>>f;
				cout<<"\nEnter Data : ";
				cin>>n;
				l.insert(n,f);
				break;
			}
			case 2: {
				l.display();
				break;
			}
			case 3: {
				l.del();
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
	return 0;	
} 
