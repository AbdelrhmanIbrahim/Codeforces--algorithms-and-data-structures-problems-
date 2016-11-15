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

int v1,v2,t,d;
cin>>v1>>v2;
cin>>t>>d;
int o=t,sum=v2;
t--;

for(int x=0;x<o-1;x++)
{
    sum+=v1;
    //cout<<v1<<endl;
    v1+=d;
    t--;
    int n=v1-v2;
    if(n<0)
        n*=-1;
    if(n>(t*d))
    {
        //cout<<n<<t<<d<<endl;
        v1-=d;
        int a=v2-(t*d),b=v2+(t*d);
        if(a<0)
            a*=-1;
        if(b<0)
            b*=-1;
        
        int lol=v1-b;
        if(lol<0)
            lol*=-1;
        if(lol<=d)  
            v1=b;
    
                
    }
    
    
    
}
cout<<sum<<endl;

//system("pause");
return 0;
}