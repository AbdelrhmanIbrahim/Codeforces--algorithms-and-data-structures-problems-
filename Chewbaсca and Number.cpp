#include <iostream>
#include <map>   
#include<vector>
#include<string>
#include<algorithm>
using namespace std;


int main()
{
    string str="";
    cin>>str;
    long long start=0,count=0;
    if(str[0]=='9')
        start=1;
    else
        start=0;
    for(long long x=start;x<(str.size()/2)+1;x++)
    {
        
        if(str[x]-'0'>=5)
            str[x]=(9-(str[x]-'0'))+48;
        
        if(str[str.size()-count-1]-'0'>=5)
            str[str.size()-count-1]=(9-(str[str.size()-count-1]-'0'))+48;

        
        count++;
    }
    cout<<str<<endl;
     return 0;
}