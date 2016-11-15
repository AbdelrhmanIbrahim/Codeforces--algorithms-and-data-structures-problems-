#include<iostream>
#include<vector>
#include<string>
#include<set>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{

    int n,sum=0;
    vector<int>vec;
    cin>>n;
    for(int x=0;x<n;x++)
    {
        int a;
        cin>>a;
        
        vec.push_back(a);
    }
    bool s=false,d=false;
    for(int x=0;x<vec.size();x++)
    {
        if(vec[x]==x)
            sum++;
        else
        {
            if(vec[vec[x]]==x)
                d=true;
            else
                s=true;
        }
    }
    if(d && !s || d && s)
        cout<<sum+2<<endl;
    else if(s && !d)
        cout<<sum+1<<endl;
    else
        cout<<sum<<endl;
    return 0;
}