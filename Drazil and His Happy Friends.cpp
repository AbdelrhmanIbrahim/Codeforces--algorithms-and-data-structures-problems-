#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<set>
#include<math.h>
using namespace std;
    bool there=false;
    string ho="";
int main()

{
    
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,m,happyb,happyg;
    cin>>n>>m;
    set<int>boys,girls;
    cin>>happyb;

    int a;
    for(int x=0;x<happyb;x++)
        {
            cin>>a;
            boys.insert(a);
        }
    

    cin>>happyg;
    int b;
    for(int x=0;x<happyg;x++)
        {
            cin>>b;
            girls.insert(b);
        }
    

    int s=10000;
    for(int i=0;i<s;i++)
    {
        int b=i%n,g=i%m;
    
        if( boys.find(b) != boys.end() || girls.find(g) != girls.end()  )
        {
            boys.insert(b);
            girls.insert(g);
        }
    }


    if(boys.size()==n && girls.size()==m)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;

  return 0;
}