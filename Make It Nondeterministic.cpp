#include<iostream>
#include<vector>
#include<string>
#include<math.h>
#include <time.h>
#include<fstream>
#include<map>
#include<algorithm>

using namespace std;
vector<pair<string,int>>TotalNames;
vector<string>FirstNames;
vector<string>LastNames;
vector<long long>Orders;
int main()
{


    
    int Names,order,count=0;
    bool NO=false;
    string str1,str2;
    cin>>Names;
    for(int x=0;x<Names;x++)
    {
        cin>>str1;
        cin>>str2;
        count++;
        TotalNames.push_back(make_pair(str1,count));
        TotalNames.push_back(make_pair(str2,count));
    }

    for(int x=0;x<Names;x++)
    {
        cin>>order;
        Orders.push_back(order);
    }

    sort(TotalNames.begin(),TotalNames.end());
    int CountOrder=0;
    for(int x=0;x<TotalNames.size();x++)
    {
        if(CountOrder==Orders.size())
            break;
        if(TotalNames[x].second==Orders[CountOrder])
            CountOrder++;
    }

    if(CountOrder==Orders.size())
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;       
}