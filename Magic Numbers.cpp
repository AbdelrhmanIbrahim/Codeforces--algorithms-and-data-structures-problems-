#include <iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{


    string str;
    cin>>str;
    bool nope=false,nope2=false;
    if(str.size()==1 && str!="1")
        nope2=true;
    for(int x=0;x<str.size()-1;x++)
    {
        if(str[x]=='1' && str[x+1]=='4' && !nope)
            nope=true;
        else if((str[x]=='4' && str[x+1]=='4' && nope) || (str[x]=='1' && str[x+1]=='1' ) || (str[x]=='4' && str[x+1]=='1' && x!=0 ))
            nope=false;
        else
            {
            nope2=true;
            break;
            }
    
    }
    
    if(nope2)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
    
    return 0;
}