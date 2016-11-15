#include <iostream>
#include<map>
#include <set>
#include <vector>
#include<string>
#include<algorithm>

using namespace std;


int main()
{

    
    int n;
    long long A=0,B=10000000000;
    bool a=false,sign=false;
    vector<long long>vec,vec2;
    cin>>n;
    for(int x=0;x<n;x++)
    {
        long long o;
        cin>>o;
        vec.push_back(o);
    }
    for(int x=1;x<vec.size();x++)
        {
            if(vec[x]<=vec[x-1])
            {
                if(!a)
                {
                    if(x>=2)
                        A=vec[x-2];
                    vec2.push_back(x);
                    a=true;
                }

                vec2.push_back(x+1);
            }
            else
            {
                if(vec2.size()!=0)
                {
                    for(int g=x;g<vec.size()-1;g++)
                        {
                            if(vec[g]>vec[g+1])
                            {
                                sign=true;
                                break;
                            }
                        }
                    B=vec[x];
                    break;
                }
            }
        }



    if(vec2.size()!=0)
    {
        if(B>=vec[vec2[0]-1] && vec[vec2[vec2.size()-1]-1]>=A)
        {
            if(!sign)
            {
                cout<<"yes"<<endl;
                cout<<vec2[0]<<" "<<vec2[vec2.size()-1]<<endl;
            }
            else
                cout<<"no"<<endl;
        }
        else
            cout<<"no"<<endl;
    }
    else
    {
        cout<<"yes"<<endl;
        cout<<1<<" "<<1<<endl;
    }
    return 0;
}