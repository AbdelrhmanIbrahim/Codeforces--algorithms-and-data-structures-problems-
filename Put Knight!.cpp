#include<iostream>
#include<fstream>
using namespace std;

int main()

{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout); 
    ios::sync_with_stdio(0);
    cin.tie(0);
    int num;
    cin>>num;
    for(int x=0;x<num;x++)
    {
        int o;
        cin>>o;
        if(o%2==0)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
    return 0;
}