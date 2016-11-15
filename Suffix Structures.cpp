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
    string s,t;
    cin>>s>>t;
    int a=0,pre=-1;
    set<int>se;
    if(s.size()<t.size())
        cout<<"need tree"<<endl;
    else
    {
        string str="",str1="";
        for(int x=0;x<t.size();x++) 
        {
            for(int y=0;y<s.size();y++)
            {
                if(t[x]==s[y])
                {
                    if(y>pre)
                    {
                        pre=y;
                        str+=s[y];
                        break;
                    }
                }
        
            }
        }
        for(int x=0;x<t.size();x++) 
        {
            for(int y=0;y<s.size();y++)
            {
                if(t[x]==s[y])
                {
                    if(se.find(y)==se.end())
                    {
                        str1+=s[y];
                        se.insert(y);
                        break;
                    }
                }
        
            }
        }
        if(str==t)
            cout<<"automaton"<<endl;
        else
        {
            if(str1.size()==t.size())
            {
                if(s.size()>t.size())
                    cout<<"both"<<endl;
                else
                    cout<<"array"<<endl;
            }
            else
                cout<<"need tree"<<endl;
        
        }

    }


return 0;
}