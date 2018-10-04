#include<iostream>

using namespace std;

struct node
{
	int d;
	node *l;
	node *r;
};
node *head=NULL;
void insert(int d)
{
	node *t,*c,*temp=create(d);
	int f=0;
	if(head==NULL)
	{
		head=temp;
	}
	else
	{
		t=head;
		int fa=insert_t(temp,t);
	}

}
int insert_t(node *temp,node *t)
{
	if(t->l==NULL)
	{
		t->l=temp;
	}
	else if(t->r==NULL);
	
	{
		t->r=temp;
	}
	else
	{
		int f=0;
		f=insert_t(temp,t->l);
		if(f==1)
		{
			return 1;
		}
		f=insert_t(temp,t->r);
		if(f==1)
		{
			return 1;
		}
	}
}
node * create(int data)
{
	node *p;
	*p->d=data;
	*p->l=NULL;
	*p->r=NULL;
	return p;
}
int main()
{
	return 0;
}