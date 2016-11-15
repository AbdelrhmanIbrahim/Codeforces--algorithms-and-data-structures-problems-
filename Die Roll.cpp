#include<iostream>
#include<vector>
#include<string>
#include<math.h>

using namespace std;

int main()

{
    int points1,points2,poss=6,diff=0;
    const int prob=7;
    cin>>points1>>points2;

    if(points1>points2)
        {
        diff=prob-points1;
        }

    else
        {
        diff=prob-points2;
        }

    if(diff==poss)
        {
        cout<<"1/1"<<endl;
        }

    else
    {
        if(diff%2==0)
        {
        diff=diff/2;
        poss=3;
        }

        if(diff%3==0)
        {
        diff=diff/3;
        poss=2;
        }
        
        cout<<diff<<"/"<<poss<<endl;
    }
    

return 0;
}