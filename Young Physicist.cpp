#include<iostream>
#include<vector>
#include<string>
#include<set>
#include<math.h>
#include<algorithm>
#include<map>
using namespace std;
int main()
{
    int n,sum1=0,sum2=0,sum3=0;
    cin>>n;
    for(int x=0;x<n;x++)
    {
    int a,b,c;
    cin>>a>>b>>c;
    sum1+=a;
    sum2+=b;
    sum3+=c;
    }
    if(sum1==0 && sum2==0 && sum3==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}