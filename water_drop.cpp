#include<iostream>

using namespace std;

int main()
{
	int n,p;
	cout<<"Enter Pipe size :";
	cin>>p;
	cout<<"\nEnter no of elements to be enterd :";
	cin>>n;
	float l[n],s[n],t[n],c;
	for(int i=0;i<n;i++)
	{
		cout<<"\nEnter "<<i<<" element position : ";
		cin>>l[i];
		cout<<"\nEnter "<<i<<" element speed : ";
		cin>>s[i];
		t[i]=(p-l[i])/s[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(l[i]<l[j])
			{
				c=l[i];
				l[i]=l[j];
				l[j]=c;
				c=s[i];
				s[i]=s[j];
				s[j]=c;
				c=t[i];
				t[i]=t[j];
				t[j]=c;
			}
		}
	}
	c=0;
	for(int i=0;i<n;i++)
	{
		
		if(t[i]<t[i+1])
		{
			c++;
		}
		else if(i==n-1) 
		{
			c++;
		}
		else
		{
			t[i+1]=(s[i+1]-s[i])/(p-l[i]);
		}
	}
	cout<<"\nNo. of drops :"<<c;
	
	return 0;
}
