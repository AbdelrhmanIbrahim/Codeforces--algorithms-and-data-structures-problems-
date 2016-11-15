#include <iostream>
#include <map>   
#include<vector>
#include<string>
#include<algorithm>
using namespace std;



int main()
{


    long long n,t,c,count=0,out=0;
    vector<long long>vec;
    cin>>n>>t>>c;
    for(int x=0;x<n;x++)
    {
        long long a;
        cin>>a;
        vec.push_back(a);
    }
    count=0;
    int X=1;
            
    for(long long x=0;x<vec.size();x++)
    {
            
            if(vec[x]<=t)
                count++;
            else
            {
                count=0;
                X=1;
            }
            if(count==c)
            {
                out++;
                count--;
                if(count<0)
                    count=0;

            }
            
    
    }
    if(out!=0)
        cout<<out<<endl;
    else
        cout<<0<<endl;
    
    return 0;
}