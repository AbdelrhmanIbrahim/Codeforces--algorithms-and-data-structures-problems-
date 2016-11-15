#include <iostream>
#include <map>   
#include<vector>
#include<string>
#include<algorithm>
using namespace std;


int main()
{
    int n,a;
    string s="";
    vector<int>vec;
    cin>>n;
    for(int x=0;x<n;x++)
    {
        cin>>a;
        vec.push_back(a);
    }
    for(int x=0;x<vec.size();x++)
    {
    if(vec[x]==0 && x!=vec.size()-1)
        s+='R';
    else
    {
        int h=vec[x],A=x+1;
        char R='R',L='L';

        if(x==vec.size()-1)
        {
            R='L';
            L='R';
            A=x-1;
        }

        for(int y=0;y<h;y++)
        {
            if(vec[x]>0)
                s+='P';
            vec[x]--;
            if(vec[x]!=0)
            {
                s+=R;
                if(vec[A]>0)
                {
                    s+='P';
                    vec[A]--;
                }
                s+=L;
            }
        }
        if(x!=vec.size()-1)
            s+=R;
    }
    }
    cout<<s<<endl;
    return 0;
}