#include<iostream>
#include<string.h>
#include<stack>
using namespace std;

int main()
{
	stack <int> s;
	char a[30];
	cin>>a;
	for(int i=0;i<30;i++)
	{
		if(a[i]=='('||a[i]=='{'||a[i]=='[')
			s.push(a[i]);
		else if(a[i]==')'||a[i]=='}'||a[i]=='[')
			s.pop();	
	}
	if(s.empty())
		cout<<"Balanced";
	else
		cout<<"Not Balanced";
	return 0;
}
