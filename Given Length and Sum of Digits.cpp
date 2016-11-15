#include <iostream>
#include<map>
#include <set>
#include <vector>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    //91/5
    
    int m,s;
    vector<int>a;
    bool n=false;
    string MAX="",MIN="";
    cin>>m>>s;
    int max=m*9;
    if(m>1 && s!=0)
    {
        if(s<=max)
        {
            for(int x=0;x<m;x++)
            {
                if(s>=9)
                {
                    MAX+='9';
                    a.push_back(9);
                }
                else
                {
                    MAX+=to_string((long long)s);
                    a.push_back(s);
                }
                s-=9;
                if(s<0)
                    s=0;
            }
            sort(a.begin(),a.end());

            for(int x=0;x<a.size();x++)
            {
                MIN+=to_string((long long)a[x]);
            }
            if(MIN[0]=='0')
            {
                for(int x=1;x<MIN.size();x++)
                {
                    if(MIN[x]!='0')
                    {
                        char temp=MIN[x];
                        MIN[x]=MIN[0];
                        MIN[0]=temp;
                        break;
                    }

                }
            }
            
        }
        else
            n=true;
    }
    else
        n=true;
    if(n)
        cout<<-1<<" " <<-1<<endl;
    else
    {
        if(MIN==MAX & MIN.size()==1)
            cout<<-1<<" "<<-1<<endl;
        else
            cout<<MIN<<" "<<MAX<<endl;
    }

    return 0;
}