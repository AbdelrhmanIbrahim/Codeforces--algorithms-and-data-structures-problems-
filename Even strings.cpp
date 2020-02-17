/*
Given a string, check if all characters repeat even or odd times in exactly O(N).

Input :
aabb
ab
ccccbb1

Output:
Yes
No
No
*/

#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

void EvenString(string str);

int main() 
{
	while(1)
	{
		cout<<"-1 for exit"<<endl;
		cout<<"Enter your string : "<<endl;
		string str;
		cin>>str;
		if(str=="-1")
			break;
		EvenString(str);
	}
	system("pause");
	return 0;
}

void EvenString(string str)
{
	int sum=0;
	unordered_map<char,int>hash;

	for(int x=0;x<str.size();x++)	
	{
		if(hash.find(str[x])!=hash.end())
			hash[str[x]]*=-1;
		else
			hash[str[x]]=1;


		int sign=hash[str[x]];
		sum+=(sign*str[x]);
	}

	if(sum==0)
		cout<<"yes,all characters repeat even times"<<endl;
	else
		cout<<"no,some characters repeat odd times"<<endl;

	cout<<endl;


}

