#include <iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<set>
#include<map>
#include<iterator>
using namespace std;
 
int main()
{
    //2 1 
    //2 3 4 1
    int n,s,t;
    cin>>n>>s>>t;
    vector<int>vec;
    bool nope=false;
    for(int x=0;x<n;x++)
    {
        int a;
        cin>>a;
        vec.push_back(a);
    }
    int count=0,A=s;
    while(A!=t)
    {
        A=vec[A-1];
        count++;
        if(A==s)
        {
            nope=true;
            break;
        }
    }
    if(!nope)   
        cout<<count<<endl;
    else
        cout<<-1<<endl;
    return 0;
}