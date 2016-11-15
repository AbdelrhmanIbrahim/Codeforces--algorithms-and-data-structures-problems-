#include <iostream>
#include <string>
#include<vector>
#include<map>
#include<algorithm>
#include<list>
using namespace std;


int main()
{
int n;
long long count=0,pre=0,out=0;
cin>>n;
for(int x=0;x<n;x++)
{
    int a;
    cin>>a;
    count++;
    if(a>=pre)
        out+=(a-pre);
    else
        out+=-(a-pre);
    
    pre=a;
}
cout<<(out+(2*count-1))<<endl;

return 0;
}