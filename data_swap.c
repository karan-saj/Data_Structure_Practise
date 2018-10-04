#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	string s;
	ofstream f1;
	f1.open("f.txt");
	int n=5,pos,i=0;
	
	while(n--)
	{
		cin>>s;
		f1<<s<<endl;
	}
	f1.close();
	cout<<"file is";
	ifstrean f2;
	f2.open("f1.txt");
	string a[5],k;
	string delimeter=",";
	while(f2>>s)
	{
		while(pos=s.find(delimeter)!=string::nps)
		{
			k=s.substr(0,pos);
			a[i]=k;
			s.erase(0,pos);
			a[i]=k;
			i++;
		}
	}
	f2.close;
	for(int j=0;j<i;j++)
	{
		cout<<a[i]<<endl;
	}
	return 0;
}
