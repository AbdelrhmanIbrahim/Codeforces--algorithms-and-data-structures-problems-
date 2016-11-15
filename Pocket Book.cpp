#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()

{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,m;
    string name;
    vector<string>names;
    vector<long long>poss;
    cin>>n>>m;

    for(int x=0;x<n;x++)
    {
        cin>>name;
        names.push_back(name);
    }

    for(int x=0;x<m;x++)
        poss.push_back(n);

    for(int x=0;x<names.size()-1;x++)
    {
        for(int y=x+1;y<names.size();y++)
        {
            for(int z=0;z<m;z++)
            {
                if(names[y][z]!='.' && names[x][z]==names[y][z])
                {
                    names[y][z]='.';
                    poss[z]--;
                }
            }
        
        }
    
    }
    vector<long long>outs;
    long long output=1;

    for(int x=0;x<poss.size();x++)
        output=(output*poss[x])%1000000007;
    

    cout<<output<<endl;

}