#include<iostream>
#include<vector>
#include<string>
#include<math.h>
#include <time.h>
#include<fstream>
#include <map>

using namespace std;

long long count=0,MapCount=0;
bool FoundBefore(string Name);
map<string,int>Names;
int main()

{

    int NamesNumber=0;
    string UserName;
    cin>>NamesNumber;

    for(int x=0;x<NamesNumber;x++)
    {
        cin>>UserName;

        if( Names.find(UserName) == Names.end() )
        {
            cout<<"OK"<<endl;
            Names[UserName]=0;
        }
        
        else 
        {
            Names[UserName]++;
            cout<<UserName<< Names[UserName] <<endl;            
        }
    }


}