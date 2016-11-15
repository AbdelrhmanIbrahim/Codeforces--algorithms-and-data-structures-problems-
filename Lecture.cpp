#include <iostream>
#include<map>
#include <set>
#include <vector>
#include<string>
#include<algorithm>

using namespace std;


int main()
{

    int n,m;
    map<string,string>vec;
    cin>>n>>m;
    for(int x=0;x<m;x++)
    {
        string a,b;
        cin>>a>>b;
        vec[a]=b;
    }
    for(int x=0;x<n;x++)
    {
        string a;
        cin>>a;
        if(vec[a].size()<a.size())
            cout<<vec[a]<<" ";
        else
            cout<<a<<" ";

    }

    return 0;
}