#include<iostream>
#include<vector>

using namespace std;
long long sum=0;
int stuff(long long  a,long long b);
int main()
{

    long long a,b;
    cin>>a>>b;
    stuff(a,b);
    cout<<sum<<endl;

return 0;
}

int stuff(long long a,long long b)
{
if(a==0 || b==0)
    return 0;

if(a>b)
{
    sum+=(a-(a%b))/b;
    a=a%b;
    stuff(a,b);
}
else if (a==b)
{
    sum+=1;
    return 0;
}


else
{
    sum+=(b-(b%a))/a;
    b=b%a;
    stuff(a,b);
}

}