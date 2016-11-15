#include<iostream>
#include<string>
#include<fstream>
#include<vector>
#include<map>
using namespace std;
vector<string>f,s;
int O=0;
bool Exist(string Str1)
{
for(int x=0;x<s.size();x++)
        {
            if(Str1==s[x])
            {
                O=x;
                return true;
            }
        }
return false;
}
int main()

{
    ios::sync_with_stdio(0);
    cin.tie(0);
    map<string,string>Names;
    int num,count=0;
    cin>>num;

    for(int x=0;x<num;x++)
    {
        string str1,str2;
        cin>>str1>>str2;
        O=0;
        if(Exist(str1))
        {
                s[O]=str2;
                count++;
        }
        else
        {
        f.push_back(str1);
        s.push_back(str2);
        }

    }

    cout<<num-count<<endl;
    for(int y=0;y<s.size();y++)
    {
            cout<<f[y]<<" "<<s[y]<<endl;
    }
    return 0;
}