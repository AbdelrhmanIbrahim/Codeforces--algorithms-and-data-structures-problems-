#include <iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{

    int n,c=1;;
    cin>>n;
    vector<pair<int,int>>vec;
    vector<int>vec1,vec2,vec3;
    for(int x=0;x<n;x++)
    {
        int a;
        cin>>a;
        vec.push_back(make_pair(a,c));
        c++;
    }
    sort(vec.begin(),vec.end());
    int pre=vec[0].first;
    vec1.push_back(vec[0].second);
    vec2.push_back(vec[0].second);
    vec3.push_back(vec[0].second);
    int count=0;
    //cout<<vec.size()<<endl;
    for(int x=1;x<vec.size();x++)
    {
        //cout<<vec[x].first<<" "<<vec[x].second<<endl;
        if(vec[x].first==pre)
        {
            vec1.push_back(vec[x].second);
            if(count%2==0)
            {
                vec2.push_back(vec[x].second);
                int t=vec3[x-1];
                vec3[x-1]=vec[x].second;
                vec3.push_back(t);
            }
            else
            {
                vec3.push_back(vec[x].second);
                int t=vec2[x-1];
                vec2[x-1]=vec[x].second;
                vec2.push_back(t);
            }
        
            count++;
        }
    
        else
        {
            vec1.push_back(vec[x].second);
            vec2.push_back(vec[x].second);
            vec3.push_back(vec[x].second);
        }
        pre=vec[x].first;
    }
    //cout<<count<<endl;
    if(count>=2)
    {
        cout<<"YES"<<endl;
        for(int x=0;x<3;x++)
        {
            vector<int>v;
            if(x==0)    
                v=vec1;
            else if(x==1)   
                v=vec2;
            else if(x==2)   
                v=vec3;
            for(int x=0;x<v.size();x++)
                cout<<v[x]<<" ";

            cout<<endl;
        }
    }
    else
        cout<<"NO"<<endl;
    
    return 0;
}