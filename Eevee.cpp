#include<iostream>
#include<vector>
#include<string>
#include<math.h>
#include <time.h>
#include<fstream>
#include<set>
#include<map>
#include<algorithm>
using namespace std;
int main()

{
    string names[8]={"vaporeon", "jolteon", "flareon", "espeon", "umbreon", "leafeon", "glaceon", "sylveon"};
    int n;
    cin>>n;
    string str,out="";
    cin>>str;
    bool wr=false;
    for(int x=0;x<8;x++)
    {   wr=false;
        for(int y=0;y<str.size();y++)
        {
            if( names[x].size()!=str.size() || (str[y]!='.' && names[x][y]!=str[y]))
            {
                wr=true;
                break;
            }

        }
            if(!wr)
                out=names[x];
    }
    cout<<out<<endl;

    return 0;