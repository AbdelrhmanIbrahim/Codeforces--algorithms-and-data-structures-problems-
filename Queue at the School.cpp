#include <iostream>
#include<set>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;



int main()
{
    

    int n,s;
    string a,b;
    cin>>n>>s;
    cin>>a;
    b=a;
    for(int y=0;y<s;y++)
    {
        for(int x=0;x<a.size()-1;x++)
        {
            if(a[x]=='B' && a[x+1]=='G')
            {
                char temp=b[x];
                b[x]=b[x+1];
                b[x+1]=temp;
            }
        }
        a=b;
    }
    cout<<b<<endl;
    return 0;
}