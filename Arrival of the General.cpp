#include<iostream>
#include<string>
#include<vector>

using namespace std;


int main()
{
	int n,tallest=0,tallestPlace=0,shortest=1000,shortestPlace=0;
	cin>>n;
	for(int x=0;x<n;x++)
	{
		int a;
		cin>>a;
		if(a>tallest)
		{
			tallest=a;
			tallestPlace=x;
		}
		if(a<=shortest)
		{
			shortest=a;
			shortestPlace=x;
		}

	}
	if(tallestPlace>shortestPlace)	
		cout<<(n-shortestPlace-1)+tallestPlace-1<<endl;
	else
		cout<<(n-shortestPlace-1)+tallestPlace<<endl;

	return 0;
}