#include<iostream>
#include<vector>
#include<string>
#include<set>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{
    int s,n;
    vector<pair<int,int>>vec;
    cin>>s>>n;
    for(int x=0;x<n;x++)
    {
        int a,b;
        cin>>a>>b;
        vec.push_back(make_pair(a,b));
    }
    sort(vec.begin(),vec.end());
    bool def=false;
    for(int x=0;x<vec.size();x++)
    {
        if(s<=vec[x].first)
        {
            def=true;
            break;
        }
        else
            s+=vec[x].second;
    }
    if(!def)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}