#include<iostream>
#include<string.h>
#include<stack>
using namespace std;
class Stack
{
	public:
	int t,l,c;
	stack <char> s;
	stack<char> swap()
	{
		if(c==0)
		{
			s.pop();
			return s;
		}
		else
		{
			char r=s.top();
			s.pop();
			c--;
			swap();
			s.push(r);
		}
	}
};
int main()
{
	Stack as;
	char a[30];
	cin>>a;
	int len=strlen(a),i=0;
	while(len!=0)
	{
		as.s.push(a[i]);
		len--;
	}
	as.t=as.s.top();
	as.l=as.s.size();
	as.c=as.l/2;
	as.swap();
	
	while (!as.s.empty())
    {
        cout << as.s.top();
        as.s.pop();
    }
	return 0;
}
