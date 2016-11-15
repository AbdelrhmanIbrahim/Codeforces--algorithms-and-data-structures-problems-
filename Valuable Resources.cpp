#include<iostream>
#include<vector>
#include<string>
#include<set>
#include<math.h>
using namespace std;
    long long pre=0;
long long mag(long long x1,long long y1,long long x2,long long y2)
{
    return ( sqrt ((float)((x1-x2)*(x1-x2)) + ((y1-y2)*(y1-y2))) ) ;
}
int main()
{
    int n;
    vector<pair<long long,long long>>vec;
    cin>>n;
    for(int x=0;x<n;x++)
    {
        long long a,b;
        cin>>a>>b;
        vec.push_back(make_pair(a,b));
    }
    for(int x=0;x<vec.size();x++)
    {
        for(int y=x;y<vec.size();y++)
        {
            if(mag(vec[x].first,vec[x].second,vec[y].first,vec[y].second)>=pre)
            {
                long long diffx,diffy;
                diffx=vec[x].first-vec[y].first;
                diffy=vec[x].second-vec[y].second;
                if(diffx<0)
                    diffx*=-1;
                if(diffy<0)
                    diffy*=-1;

                if(diffx >= diffy  )
                {
                    if(diffx>=pre)
                        pre=diffx;
                }
                else
                {
                    if(diffy>=pre)
                        pre=diffy;
                }
                if(pre<0)
                    pre*=-1;
            }

        }
    }
    if(pre<0)
        pre*=-1;
    cout<<pre *pre<<endl;
    
    return 0;
}