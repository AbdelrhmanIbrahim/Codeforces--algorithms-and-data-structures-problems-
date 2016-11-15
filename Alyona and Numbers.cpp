#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;



int main()
{
	
	int n,m,work,other;
	cin>>n>>m;
	if(n<=m)
	{
		work=n;
		other=m;
	}
	else
	{
		work=m;
		other=n;
	}

	long long sum=0;
	for(int x=1;x<=work;x++)
	{
		if((x/5)<((other+x)/5))
			sum+=((other+x)/5)-(x/5);
		
	}
	cout<<sum<<endl;

	return 0;
}