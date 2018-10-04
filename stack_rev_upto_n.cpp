#include <iostream>
#include <queue>
 
using namespace std;
 
void showq(queue <int> g)
{
    while (!g.empty())
    {
        cout << '\t' << g.front();
        g.pop();
    }
    cout << '\n';
}

queue <int> rever(queue <int> g)
{
	queue <int> q;
	int c=g.empty();
	if(c!=0)
	{
		int n =g.front();
		g.pop();
		g=rever(g);
		q.push(n);
		return q;	
	}
}

queue <int> rev(int n, queue <int> q)
{
	if(n>0)
	{
		int n=q.front();
		q.pop();
		q=rev(n--,q);
		q.push(n);
		return q;
	}
	else
	{
		q=rever(q);
		q=rever(q);	
	}
}
 
int main()
{
    queue <int> qu;
    int n,c;
    cout<<"Enter no of Elements \n";
    cin>>c;
    cout<<"Enter Elements \n";
    while(c>0)
    {
    	cin>>n;
    	qu.push(n);
    	c--;
	}
	cout<<"Enter the no. elements to be reversed : ";
	cin>>n;
	qu=rev(n,qu);
    showq(qu);
    return 0;
}
