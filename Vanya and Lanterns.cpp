#include <iostream>
#include<set>
#include<string>
#include<vector>
#include<algorithm>
#include<bitset>
#include <iomanip>
using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n,m;
    double out=0,diff=0;
    vector<double>s;
    cin>>n>>m;
    for(int x=0;x<n;x++)
    {
        double a;
        cin>>a;
        s.push_back(a);
    }
    sort(s.begin(),s.end());
    //first distance
    if(s[0]>(m-s[s.size()-1]))
        diff=s[0];
    //last distance
    else
        diff=(m-s[s.size()-1]);
    for(int x=0;x<s.size()-1;x++)
    {
        if(((double)s[x+1]-s[x])/2.0>=diff)
            diff=((double)s[x+1]-s[x])/2.0;
    }
    cout<<setprecision(9)<< fixed <<diff<<endl;
    return 0;
}