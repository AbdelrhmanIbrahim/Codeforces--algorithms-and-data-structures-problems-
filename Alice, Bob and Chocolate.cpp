#include<iostream>
#include<vector>
#include<string>
#include<math.h> 
#include <time.h>
#include<fstream>
#include<map>

using namespace std;

int Chocs=0,sum=0,Alice=0,Bob=0;
vector<int>Chocolates;
int main()
{
    cin>>Chocs;
    for(int x=0;x<Chocs;x++)
    {
        int cho=0;
        cin>>cho;
        Chocolates.push_back(cho);
    }
    Bob=Chocs-1;
    while (Alice<=Bob)
    {
        if(sum>0)
        {
            sum-=Chocolates[Bob];
            Bob--;
        }
        else
        {
            sum+=Chocolates[Alice];
            Alice++;
           
        
        }

    }   
    cout<<Alice<<" " <<Chocs-Alice<<endl;

}