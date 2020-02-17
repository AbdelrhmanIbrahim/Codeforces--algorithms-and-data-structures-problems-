#include<iostream>
#include<vector>
#include<string>
#include<math.h>

using namespace std;

int Longest=0;
vector<string>Strings;
vector<string>result;

void Mul(string st1,string st2);
void AddRightZeros(vector<string>&input);
void Flip(vector<string>&input);
void FindLongest(vector<string>&input);
void AddLeftZeros(vector<string>&input);
void FindResult(vector<string>&input);

int main()

{
	long long num1,num2;
	string st1="",st2="";

	cout<<"Enter first number"<<endl;
	cin>>num1;
	cout<<"Enter second number"<<endl;
	cin>>num2;
	
	st1=to_string(num1);
	st2=to_string(num2);

	Mul(st1,st2);
	Flip(Strings);
	AddRightZeros(Strings);
	FindLongest(Strings);
	AddLeftZeros(Strings);
	FindResult(Strings);
	Flip(result);

	cout<<"Multiply is "<<result[0]<<endl;

	/*FindLongest(Strings);
	cout<<Longest<<endl;*/



system ("pause");
return 0;
}

void Mul(string str1,string str2)
{
	string outter="",inner="";
	if(str1.length()<=str2.length())
	{
		outter=str1;
		inner=str2;
	}

	else
	{
		outter=str2;
		inner=str1;
	}

	for(int i=outter.length()-1;i>=0;i--)

	{
		int carry=0;
		string Push="";

		for(int j=inner.length()-1;j>=0;j--)
		{
			//Multi
			int i_digit=outter[i]-'0';
			int j_digit=inner[j]-'0';
			long long OutputDigit=(i_digit*j_digit)+carry;

			//Convert
			string OutDigit=to_string(OutputDigit);

			//Carry and push
			if(OutDigit.length()==1)
			{
				Push+=OutDigit;
				carry=0;
			}

			else
			{
				if(j==0)
				{
					Push+=OutDigit[1];
					Push+=OutDigit[0];
				}

				else
				{
					Push+=OutDigit[1];
					carry=OutputDigit/10;
				}
			}
		}
	
	Strings.push_back(Push);
	}
}

void Flip(vector<string>&input)
{
	
	for(int x=0;x<input.size();x++)
	{
		int count=0;
		int limit=(input[x].size())/2;

		for(int y=input[x].size()-1;y>=limit;y--)
		{
			char Char=input[x][y];
			input[x][y]=input[x][count];
			input[x][count]= Char;
			count++;
		}
	}
}

void AddRightZeros(vector<string>&input)
{
	int limit=0;
	for(int x=0;x<input.size();x++)
		{
			string zeros="";

			for(int y=0;y<limit;y++)
				{
					zeros+="0";
				}
			limit++;
			input[x]+=zeros;
		}
}

void FindLongest(vector<string>&input)
{
	for(int x=0;x<input.size()-1;x++)
		{
			if(input[x].size()>=input[x+1].size())
				Longest=input[x].size();
			else
				Longest=input[x+1].size();
		}
}

void AddLeftZeros(vector<string>&input)
{
	for(int x=0;x<input.size();x++)
		{
			int LeftZerosLength=Longest-input[x].size();
			string LeftZeros="";
			
			for(int y=0;y<LeftZerosLength;y++)
				LeftZeros+="0";
			
			input[x]=LeftZeros+input[x];
		}		
}

void FindResult(vector<string>&input)
{
	int carry=0;
	string Result="";
	if(input.size()>0)
	{
		for(int x=(input[0].size())-1;x>=0;x--)
			{
				long long sum=carry;

				for(int y=0;y<input.size();y++)
					{
						int A=input[y][x]-'0';
						sum+=A;
					}

				string SUM=to_string(sum);

				if(SUM.size()==1)
				{
					Result+=SUM;
					carry=0;
				}

				else
					{
						if(x!=0)
						{
							Result+=SUM[SUM.size()-1];
							carry=stoi(SUM.substr(0,SUM.size()-1));
						}
						
						else
							{	
								int count=0;
								int limit=(SUM.size())/2;

								for(int y=SUM.size()-1;y>=limit;y--)
								{
									char Char=SUM[y];
									SUM[y]=SUM[count];
									SUM[count]= Char;
									count++;
								}
												
								Result+=SUM;
							}	
					}
			}

	}
	result.push_back(Result);
}