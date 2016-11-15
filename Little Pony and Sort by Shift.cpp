#include <iostream>
#include <string>
#include<vector>
#include<map>
#include<algorithm>
#include<list>
using namespace std;

int main(){

int n,pre=0,save=0,count=0;
vector<int>c;
bool lock=false,shit=false,notEqual=false;
cin>>n;
for(int x=0;x<n;x++)
{
	int a;
	cin>>a;
	c.push_back(a);
	if(a>=pre)
		pre=a;
	else
	{
		notEqual=true;
		if(!lock)
		{
			save=x;
			lock=true;
		}
	}
}
if(!notEqual)
	cout<<0<<endl;
else
{
for(int x=save;x<c.size()-1;x++)
{
	if(c[x+1]>=c[x])
		count++;
	else
	{
		shit=true;
		break;
	}
}
if(shit)
	cout<<-1<<endl;
else
{
	if(c[c.size()-1]<=c[0])
		cout<<count+1<<endl;
	else
		cout<<-1<<endl;
}
}
return 0;
}