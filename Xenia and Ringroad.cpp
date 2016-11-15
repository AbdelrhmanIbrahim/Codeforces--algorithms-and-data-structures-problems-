#include <iostream>
#include<set>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;



int main()
{
    

    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m,current=1;
    long long t=0;
    cin>>n>>m;

    for(int x=0;x<m;x++)
    {
        int b;
        cin>>b;
        if(b>=current)
            t+=b-current;
        else
            t+=(b+(n-current));
        current=b;
    }
    cout<<t<<endl;
    return 0;
}