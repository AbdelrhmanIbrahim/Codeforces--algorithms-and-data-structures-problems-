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
string s1,s2,out="";
int odd=0;
cin>>s1>>s2;
for(int x=0;x<s1.size();x++)
{
    if(s1[x]=='0' && s2[x]=='0')
        out+='1';
    else if(s1[x]=='1' && s2[x]=='1')
        out+='0';
    else 
    {
        if(odd%2==0)
            out+=s2[x];
        else
            out+=s1[x];
        odd++;      
    }
}
if(odd%2!=0)
    cout<<"impossible"<<endl;
else
    cout<<out<<endl;
return 0;
}