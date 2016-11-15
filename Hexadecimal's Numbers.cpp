#include<iostream>
#include<vector>
#include<string>
#include<math.h>
#include <time.h>
#include<fstream>
#include<map>

using namespace std;

double y,x=2;
string Base,str;
void FillTheArray(vector<long long> &Nums);
int main()

{
	long long num,count=0;
	vector<long long>Numbers;
    cin>>num;
	str=to_string(num);
	y=str.size();
	double NumberOfBinaries=pow(x,y)-1;
	Base=to_string((long long)pow(10.0,y-1));
	
	FillTheArray(Numbers);

	for(int x=Numbers.size()-1;x>=0;x--)
	{
		if(num<Numbers[x])
			count++;
		else
			break;
	}

	cout<<NumberOfBinaries-count<<endl;
	
}

void FillTheArray(vector<long long> &Nums)
{
	
	for(long long x=(long long)pow(2.0,y)/2;x<(long long)pow(2.0,y);x++)
	{
		string Poss="";
		for(long long Y=(long long)pow(2.0,y)/2;Y>0;Y=Y/2)
			Poss+=to_string(x/Y%2);
		Nums.push_back((long long)stoi(Poss));
	}

}