#include<iostream>
#include<math.h>

using namespace std;


int main()
{
	int r,c;
	for(int x=0;x<5;x++)
	{	
		for(int y=0;y<5;y++)
		{
			int a; 
			cin>>a;
			if(a!=0)
			{
				r=x;
				c=y;
			}
		}
	}
		

	cout<<abs(r-2)+abs(c-2)<<endl;
	return 0;
}