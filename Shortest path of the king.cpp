#include<iostream>
#include<vector>
#include<string>

using namespace std;

int num_of_moves=0,mve=0;
vector <string> moves;

void Same_y(int x_start,int x_end)
{
    int diff=x_end-x_start;
    string R="R",L="L";

    if (diff>0)
    {
    num_of_moves+=diff;
    while (mve!=diff)
    {
    mve+=1;
    moves.push_back(R);
    }
    }

    if (diff<0)
    {
    num_of_moves+=-diff;
    while (mve!=-diff)
    {
    mve+=1;
    moves.push_back(L);
    }
    }
}
void Same_x(int y_start,int y_end)
{
    int diff=y_end-y_start;
    string U="U",D="D";
    if (diff>0)
    {
    num_of_moves+=diff;
    while (mve!=diff)
    {
    mve+=1;
    moves.push_back(U);
    }
    }

    if (diff<0)
    {
    num_of_moves+=-diff;
    while (mve!=-diff)
    {
    mve+=1;
    moves.push_back(D);
    }
    }
}
void diff_x_y(int& X_start,int& Y_start,int& X_end,int& Y_end)
    {
    while (X_start!=X_end && Y_start!=Y_end)
    {
    string RU="RU",LU="LU",RD="RD",LD="LD";

    if(X_start<X_end && Y_start<Y_end )
    {
    X_start+=1;
    Y_start+=1;
    num_of_moves+=1;
    moves.push_back(RU);
    }

    if(X_start>X_end && Y_start>Y_end )
    {
    X_start-=1;
    Y_start-=1;
    num_of_moves+=1;
    moves.push_back(LD);
    }

    if(X_start<X_end && Y_start>Y_end )
    {
    X_start+=1;
    Y_start-=1;
    num_of_moves+=1;
    moves.push_back(RD);
    }
    if(X_start>X_end && Y_start<Y_end )
    {
    X_start-=1;
    Y_start+=1;
    num_of_moves+=1;
    moves.push_back(LU);
    }
    }
    }

int main()
{
    
    string A,B;
    cin>>A;
    cin>>B;
    int X_start=(int)A[0]-96,Y_start=(int)A[1]-48,X_end=(int)B[0]-96,Y_end=(int)B[1]-48;
    diff_x_y(X_start,Y_start,X_end,Y_end);
    

    //same x
    if(X_start==X_end)
    {
    Same_x(Y_start,Y_end);
    }

    //same y
    if(Y_start==Y_end)
    {
    Same_y(X_start,X_end);
    }

    cout<<num_of_moves<<endl;
    for(int i=0;i<moves.size();i++)
    {
    cout<<moves[i]<<endl;
    }

return 0;
}