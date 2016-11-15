#include<iostream>

using namespace std;
int main()

{
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long a,b,s;
    cin>>a>>b>>s;
    if(a<0)
        a=-a;
    if(b<0)
        b=-b;

    long long sum=a+b;
    if(s>=sum)
    {
        if(sum%2==0)
        {
            if(s%2==0)
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
    
    
    
        else
        {
            if(s%2!=0)
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
    }
    else
        cout<<"No"<<endl;

  return 0;
}