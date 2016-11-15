#include<iostream>
#include<vector>
#include<string>
#include<set>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>vec;
    for(int x=0;x<m;x++)
    {
        int a;
        cin>>a;
        vec.push_back(a);
    }
    int pre=100000;
    sort(vec.begin(),vec.end());
    for(int x=0;x<=vec.size()-n;x++)
    {
        if(vec[x+n-1]-vec[x]<=pre)
            pre=vec[x+n-1]-vec[x];
    }
    cout<<pre<<endl;
    return 0;
}