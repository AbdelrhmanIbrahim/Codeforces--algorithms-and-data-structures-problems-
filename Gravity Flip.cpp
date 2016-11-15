#include <iostream>
#include <string>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

int main()
{

int n,a;
vector<int>vec;
cin>>n;
for(int x=0;x<n;x++)
{
cin>>a;
vec.push_back(a);
}
for(int x=vec.size()-1;x>=0;x--)
{
    int g=0,X=0;
    for(int y=0;y<x;y++)
    {
        if(vec[y]>=g)
        {
            g=vec[y];
            X=y;
        }
    }
    if(vec[x]<=g)
    {
        int h=vec[x];
        vec[x]+=(g-vec[x]);
        vec[X]-=(g-h);
    }

}

for(int x=0;x<vec.size();x++)
    cout<<vec[x]<<" ";
return 0;
}