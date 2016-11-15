#include <iostream>
#include <map>   
#include<vector>

using namespace std;


int main()
{
    
    int n,a;
    map<int,int>m;
    vector<int>vec;
    cin>>n;
    for(int x=0;x<n;x++)
    {
    cin>>a;
    vec.push_back(a);
    }

    for(int x=0;x<vec.size();x++)
    {
        // found
        if(m.find(vec[x])!=m.end())
            cout<<m[vec[x]]<<" ";
        else
        {
            int count=1;
            for(int y=0;y<vec.size();y++)
            {
                if(vec[y]>vec[x])
                    count++;
            }
            cout<<count<<" ";
            m[vec[x]]=count;
        }
    
    }
    return 0;
}