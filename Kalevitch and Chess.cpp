#include<iostream>
#include<vector>
#include<string>
#include<math.h>

using namespace std;

int main()

{
    int Row=0,Col=0;
    string str;
    bool close=false;
    vector<string>mine;
    
    while(mine.size()!=8)
    {
    cin>>str;
    mine.push_back(str);
    }

    for (int row=0;row<mine.size();row++)
    {
    
        if(mine[row]=="BBBBBBBB")
        {
        Row+=1;
        }
        else
        {

            if(close==false)
            {
            for(int col=0;col<mine[row].size();col++)
            {
            if(mine[row][col]=='B')
            {
            Col+=1;
            }
            }
            close=true;
            }   
        }
    }

    cout<<Row+Col<<endl;

return 0;
}