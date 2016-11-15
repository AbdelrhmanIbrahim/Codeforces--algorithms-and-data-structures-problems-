#include <iostream>
#include<map>
#include <set>
#include <vector>
#include<string>
#include<algorithm>

using namespace std;

long long fn(long long n,long long r)
{
    long long aa=n-1;
    for(long long x=0;x<r-1;x++)
    {
        n*=aa;
        aa--;
    }
    return n;
}

int main()
{
    int n;
    string str="",str1="";
    set<char>myset;
    cin>>n;
    cin>>str;
    if(str.size()<n)
        cout<<"NO"<<endl;
    else
    {
        myset.insert(str[0]);
        vector<string>ss;
        for(int x=0;x<str.size();x++)
        {
            // found
            if(myset.find(str[x]) != myset.end())
                str1+=str[x];

            else
            {
                myset.insert(str[x]);
                ss.push_back(str1);
                str1=str[x];
            }
        }
        ss.push_back(str1);

        if(ss.size()>=n)
        {
            cout<<"YES"<<endl;
            for(int x=0;x<n;x++)
            {
                if(x!=n-1)
                    cout<<ss[x]<<endl;
                else
                {
                    for(int a=x;a<ss.size();a++)
                        cout<<ss[a];
                }
            
            }
        }
        else
            cout<<"NO"<<endl;
    }

     return 0;
}