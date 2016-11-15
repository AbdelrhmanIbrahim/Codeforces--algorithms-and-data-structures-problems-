#include <iostream>
#include<set>
#include<string>
#include<vector>
#include<algorithm>
#include<bitset>
using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n,m,k,count=0,d=0;
    long long a;
    vector<string>bins;
    cin>>n>>m>>k;

    for(int x=0;x<m+1;x++)
    {
        cin>>a;
        bitset<21> bin_x((int)a);
        bins.push_back(bin_x.to_string());
    }
    int s=bins[bins.size()-1].size();
    for(int x=0;x<bins.size()-1;x++)
    {
        for(int y=0;y<s;y++)
        {
            if(bins[x][y]!=bins[bins.size()-1][y])
                count++;
        }
        if(count<=k)
            d++;
        count=0;
    }

    cout<<d<<endl;
    return 0;
}