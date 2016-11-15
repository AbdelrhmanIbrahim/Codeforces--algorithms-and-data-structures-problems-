#include <iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<set>
#include<map>
#include<algorithm>
using namespace std;

int main()
{

    int n,c=0;
    cin>>n;
    set<int>se;
    map<int,int>m;
    vector<pair<int,int>>vec;

    for(int x=0;x<n;x++)
    {
        int a;
        cin>>a;
        vec.push_back(make_pair(a,c));
        c++;
    }
    sort(vec.begin(),vec.end());
    int pre=vec[0].first;
    m[vec[0].second]=pre;
    se.insert(pre);
    for(int x=1;x<n;x++)
    {
        if(se.find(vec[x].first)!=se.end())
        {
            m[vec[x].second]=pre+1;
            se.insert(pre+1);
            pre++;
        }
        else
        {
            m[vec[x].second]=vec[x].first;
            se.insert(vec[x].first);
            pre=vec[x].first;
        }   
    }   
    for(int x=0;x<n;x++)
        cout<<m[x]<<" ";
    
    return 0;
}