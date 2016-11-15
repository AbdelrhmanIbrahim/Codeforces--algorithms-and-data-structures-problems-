#include <iostream>
#include<set>
#include<string>
using namespace std;

int main()
{

	int size,move=32;
	string a;
	cin>>size;
	cin>>a;
	set<char>alpha;
	int ascii=0;
	for(int x=0;x<a.size();x++)
		{
			ascii=a[x];
			if(ascii<=90)
			{
				ascii+=move;
				a[x]=ascii;
			}
			alpha.insert(a[x]);
		}

	if(alpha.size()==26)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
    return 0;

}