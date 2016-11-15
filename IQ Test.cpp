#include<iostream>
#include<vector>
#include<string>
#include<set>
#include<math.h>
#include<algorithm>
#include<map>
using namespace std;
int main()
{
    int n=4;
    vector<string>vec;
    for(int x=0;x<n;x++)
    {
        string a;
        cin>>a;
        vec.push_back(a);
    }
    bool yeah=false;
    for(int x=0;x<vec.size()-1;x++)
    {
        for(int y=0;y<vec[x].size()-1;y++)
        {
            
                if((vec[x][y]==vec[x][y+1] && vec[x][y]==vec[x+1][y] && vec[x][y]!=vec[x+1][y+1]) ||
                    (vec[x][y]==vec[x][y+1] && vec[x][y]!=vec[x+1][y] && vec[x][y]==vec[x+1][y+1]) 
                    || vec[x][y]!=vec[x][y+1] && vec[x][y]==vec[x+1][y] && vec[x][y]==vec[x+1][y+1] ||
                    (vec[x][y]==vec[x][y+1] && vec[x][y]==vec[x+1][y] && vec[x][y]==vec[x+1][y+1]) || 
                    (vec[x][y]!=vec[x][y+1]  && vec[x][y+1]==vec[x+1][y] && vec[x+1][y]==vec[x+1][y+1]))
                {
                    yeah=true;
                    break;
                }
            
                
        }
    }
    if(yeah)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}