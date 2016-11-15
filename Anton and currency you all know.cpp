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

int b=10,X1=0;
bool l=false,l2=false;
string s,s2;

cin>>s;
s2=s;

for(int x=0;x<s.size();x++)
{
    int a=s[x]-'0';
    if(a%2==0)
    {
        l=true;
        if((s[s.size()-1]-'0')>(s[x]-'0'))
        {
            char temp=s[s.size()-1];
            s[s.size()-1]=s[x];
            s[x]=temp;
            break;
        }
        X1=x;

    }
}

if(!l)
    cout<<-1<<endl;
else
{
    if(s==s2)
    {
        char temp=s[s.size()-1];
        s[s.size()-1]=s[X1];
        s[X1]=temp;
    }
    cout<<s<<endl;
}
return 0;
}