#include<iostream>
#include<string.h>
#include<stack>
using namespace std;

class Stack
{
	public:
	int t,l;
	char r;
	stack <char> s;
	void rev()
	{
		if(s.empty())
		{
		}
		else
		{
			r=s.top();
			s.pop();
			rev();
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
	as.rev();
	while (!as.s.empty())
    {
        cout << as.s.top();
        as.s.pop();
    }
	return 0;
}
