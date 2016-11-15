#include<iostream>
#include<string>
#include<vector>

using namespace std;


int main()
{
	string s1,s2,out="";
	cin>>s1>>s2;
	for(int x=0;x<s1.size();x++)
	{
		if(s1[x]!=s2[x])
			out+='1';
		else
			out+='0';
	}
	cout<<out<<endl;
	
	return 0;
}