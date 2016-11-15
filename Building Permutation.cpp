#include<iostream>
#include<vector>
#include<string>
#include<math.h>
#include<cmath>
#include <time.h>
#include<fstream>
#include <map>
#include<algorithm>

using namespace std;

vector<long long> Perms,Counts;
//map<long long,int>Names;

int main()

{
    long long NamesNumber=0,num=0,COUNT=0;
    cin>>NamesNumber;

    for(int x=0;x<NamesNumber;x++)
    {
        cin>>num;
        Perms.push_back(num);
        Counts.push_back(x+1);
    }

    sort(Perms.begin(),Perms.end());

    for(int x=0;x<Perms.size();x++)
    {
        long long diff=Perms[x]-Counts[x];
        if(diff>0)
            COUNT+=diff;
        else
            COUNT+=(-1*diff);
    }
    
    cout<<COUNT<<endl;
}