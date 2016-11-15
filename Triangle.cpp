#include<iostream>
#include<vector>
#include<string>

using namespace std;

int in,i=0,x=0,TRIANGLE=0,DEGENERATE=0,IMPOSSIBLE=0;
vector<int>mine;

void Is_triangle_or_what (int x,int y ,int z);

int main()

{
    
    while(mine.size()!=4)
    {
    cin>>in;
    mine.push_back(in);
    }   

    
    //get all the possiblties
    for(i=0;i<=mine.size()-3;i++)
    {
        for(x=i+2;x<=mine.size()-1;x++)
        {
            Is_triangle_or_what(mine[i],mine[i+1],mine[x]);
        }
    }

    Is_triangle_or_what(mine[mine.size()-1],mine[mine.size()-2],mine[0]);

    if(TRIANGLE>0)
    {
    cout<<"TRIANGLE"<<endl;
    }
    if(TRIANGLE==0 && DEGENERATE>0)
    {
    cout<<"SEGMENT"<<endl;
    }
    if(TRIANGLE==0 && DEGENERATE==0)
    {
    cout<<"IMPOSSIBLE"<<endl;
    }

return 0;
}


void Is_triangle_or_what(int x,int y,int z)
{
    
    vector<int>mine_2;
    mine_2.push_back(x);
    mine_2.push_back(y);
    mine_2.push_back(z);

    int high=mine_2[0],sum=0;

    for(int i=1;i<mine_2.size();i++)
    {
    if(mine_2[i]>high)
    {
    high=mine_2[i];
    }
    }
    
    //replace_remove_sum
    if(high==x){sum=y+z;}
    if(high==y){sum=x+z;}
    if(high==z){sum=x+y;}


    if(high<sum){TRIANGLE+=1;}

    if(high==sum){DEGENERATE+=1;}

    if(high>sum){IMPOSSIBLE+=1;}

    //delete all elements
    for(int a=mine_2.size();a>0;a--)
    {
    mine_2.pop_back();
    }
    
}