#include <iostream>
#include <string>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
int main()
{

int x1,x2,x3,x4,x5;
cin>>x1>>x2>>x3>>x4>>x5;
int sum=x1+x2+x3+x4+x5;
int div=sum/5;
if(div>0)
{
if(div*5==sum)
    cout<<div<<endl;
else
    cout<<-1<<endl;
}
else
cout<<-1<<endl;
return 0;
}