#include<iostream>
#include<string.h>

using namespace std;

struct node
{
	int power;
	int coef;
	node *next;
};
node *head=NULL;
class Linked_List
{
	private:
		node *head=NULL;
	public:
		
	void insert(int c, int p)	//Insert node at end of list;
	{
		node *temp,*t;
		temp=create(p,c);
		if(head==NULL)
		{
			head=temp;
			cout<<"\nL";
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

	node* create(int c, int p)	// Create a node;
	{
		
		node *q=new node;
		q->power=p;
		q->coef=c;
		q->next=NULL;
		return q;
	}

	void display()	// dislpay main ll
	{
		node *t;
		t=head;
		if(head==NULL)
		{
			cout<<"\nThere is no list ";
		}
		else
		{
			cout<<endl;
			while(t!=NULL)
			{
				cout<<t->coef<<"x"<<t->power<<endl;
				t=t->next;
			}
		}
	}

};

int main()
{
	
	int n,t;
	cout<<"\nEnter no of expressions : ";
	cin>>t;
	Linked_List l[t];
	while(t)
	{
		cout<<"Enter no. of polynomial expressions to be added : ";
		cin>>n;
		cout<<"\nEnter the polynomial expression : ";
		for(int i=0;i<n;i++)
		{
			int c,p;
			char ch;
			cin>>c>>ch>>p;
			l[t].insert(c,p);
			cout<<" +";
		}
		l[t].display();
		t--;
	}
	return 0;
}
