<iostream>
#include <fstream>
using namespace std;

int main()
{
string s;
ofstream f1;
 f1.open("file.txt");
 int n=3,pos,i=0;
 while(n--){
    cout<<"Enter=";
    cin>>s;
    f1<<s<<endl;
 }
 f1.close();

cout<<"your file is="<<endl;
ifstream f2;
f2.open("file.txt");
string a[5],k;
string delimeter=",";
while(f2>>s){
    while(pos=s.find(delimeter)){
        k=s.substr(0,pos);
        a[i]=k;
        s.erase(0,pos+delimeter.length());
        i++;
    break;
    }
    }
f2.close();
for(int j=0;j<i;j++){
    cout<<a[j]<<endl;
}

    return 0;
}
