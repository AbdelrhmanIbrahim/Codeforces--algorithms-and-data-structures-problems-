#include <iostream>
#include <string>
#include<vector>
#include<map>
#include<algorithm>
#include<list>
using namespace std;

long Mod(long a, long b)
{ return (a%b+b)%b; }
int main(){

long long x,y,mod=1000000007,n,power=1;
cin>>x>>y;
cin>>n;
if(((n-1)/3)%2==0)
{
    if(n%2==0)
        cout<<Mod(y,mod)<<endl;
    else
    {
        if(n%3==0)
            cout<<Mod((y-x),mod)<<endl;
        else
            cout<<Mod(x,mod)<<endl;
    }
}
else
{
    if(n%2==0)
    {
        if(n%6==0)
            cout<<Mod((x-y),mod)<<endl;
        else
            cout<<Mod(-x,mod)<<endl;
    }
    else
        cout<<Mod(-y,mod)<<endl;
    
}

return 0;
}