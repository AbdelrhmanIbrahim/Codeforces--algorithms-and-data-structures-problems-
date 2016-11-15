#include<iostream>
#include<vector>
#include<list>
#include<string>
using namespace std;




int main()
{
	
	
	int n,a;
	cin>>n>>a;
	vector<int>vec;
	for(int x=0;x<n;x++)
	{
		int y;
		cin>>y;
		vec.push_back(y);
	}
	int sum=0,start=a-1;
	if(vec[start]==1)
		sum+=1;


	int pre=start-1,nex=start+1;

		while(1)
		{

				if(nex<n && vec[nex]==1 && pre<0)
					sum++;
				if(pre>=0 && vec[pre]==1 && nex>=n)
					sum++;
				if(pre>=0 && nex<n && vec[pre]==1 && vec[nex]==1)
					sum+=2;
			
				pre--;
				nex++;
				if(pre<0 && nex>=n)
					break;
		}
	
	cout<<sum<<endl;
	return 0;
}