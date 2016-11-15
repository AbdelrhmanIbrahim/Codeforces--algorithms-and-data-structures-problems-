#include <iostream>
#include <map>   
#include<vector>
#include<string>
#include<algorithm>
using namespace std;


int main()
{
    
    int k,count=0,a;
    cin>>k;
    int h=k;
    vector<int>vec;
    for(int x=0;x<12;x++)
    {
        cin>>a;
        vec.push_back(a);
    }
    sort(vec.begin(),vec.end());
    for(int x=vec.size()-1;x>=0;x--)
    {
        
            k-=vec[x];
            count++;
        if(k<=0)
            break;
        
    }
    if(k>0)
        cout<<-1<<endl;
    else
    {
        if(h!=0)
            cout<<count<<endl;
        else
            cout<<0<<endl;
    }

    return 0;
}