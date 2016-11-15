#include<iostream>
#include<vector>
#include<string>
#include<math.h>
#include <time.h>
#include<fstream>
#include<map>

using namespace std;

int main()

{
    int Teams,K;
    cin>>Teams>>K;

    if((Teams%2!=0 && K<=Teams/2) || (Teams%2==0 && K<Teams/2) )
    {
            cout<<K*Teams<<endl;
            for(int x=1;x<=Teams;x++)
            {
                int count=0;
                for(int y=x+1;y<x+K+1;y++)
                {
                    if(y>Teams)
                    {
                        count++;
                        printf ("%d %ld\n", x, count);

                    }
                    else
                        printf (" %d %ld\n",x,y);
                }
            }
    }

    else
        cout<<-1<<endl;
    
}