#include <iostream>
#include<string>
using namespace std;

int main()
{

    long long n;
    cin>>n;
    string  o=to_string(n);
    long long a=1,b,c=9;
    for(int x=0;x<o.size()-1;x++)
        a*=10;
    b=n-a+1;
    long long sum=b*o.size();
    for(int x=1;x<o.size();x++)
    {
        sum+=(x*c);
        c*=10;
    }
    cout<<sum<<endl;

    return 0;
}