#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{

    int inst,days,count=0;
    vector<pair<int,int>>vec;
    cin>>inst;
    cin>>days;
    for(int x=0;x<inst;x++)
    {
        int a;
        cin>>a;
        vec.push_back(make_pair(a,x+1));
    }
    sort(vec.begin(),vec.end());
    for(int x=0;x<vec.size();x++)
    {
        if(days>=vec[x].first)
        {
            days-=vec[x].first;
            count++;
        }
        else
            break;

    }

    cout<<count<<endl;
    for(int x=0;x<count;x++)
        cout<<vec[x].second<<" ";   

    cout<<""<<endl;
    return 0;
}