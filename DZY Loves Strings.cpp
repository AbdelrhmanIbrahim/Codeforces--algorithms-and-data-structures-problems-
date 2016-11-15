#include <iostream>
#include <string>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
int Count=0;
vector<int>all;
void stuff(int n)
{
string str=to_string(((long long) n));
string str2="";
for(int x=0;x<str.size();x++)
{
    int a=str[x]-'0';
    if(a>0)
        str2+='1';
    else
        str2+='0';
}
int num=stoi(str2);

all.push_back(num);
Count++;

n=n-num;
if(n!=0)
    stuff(n);
}
int main(){

int a=49,need;
map<int,int>ma;
vector<int>se;
string l;
cin>>l;
cin>>need;
for(int x=0;x<26;x++)
{
    int n;
    cin>>n;
    ma[a]=n;
    se.push_back(n);
    a++;
}
int sum=0;
for(int x=0;x<l.size();x++)
    sum+=((x+1)*ma[(l[x]-'0')]);

sort(se.begin(),se.end());
for(int x=l.size();x<l.size()+need;x++)
    sum+=((x+1)*se[se.size()-1]);

cout<<sum<<endl;

return 0;
}