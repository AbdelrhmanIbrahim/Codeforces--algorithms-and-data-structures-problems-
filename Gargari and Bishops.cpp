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
    ios::sync_with_stdio(0);
    cin.tie(0);
    int size=0;
    cin>>size;

    const int Size=2001;
    long long Arr[Size][Size],RightD[Size][Size],LeftD[Size][Size];
    for(int x=0;x<size;x++)
    {
        for(int y=0;y<size;y++)
        {
            cin>>Arr[x][y]; 
            if(x==0 || y==0)
            {
                RightD[x][y]=0;
                RightD[x][y]+=Arr[x][y];
            }
            else
            {
                int X,Y=0;
                if(x>y)
                {
                    X=x-y;
                    Y=0;
                }
                else
                
                {
                    Y=y-x;
                    X=0;
                }

                RightD[X][Y]+=Arr[x][y];
            }

            if(x==0 || y==size-1)
            {
                LeftD[x][y]=0;
                LeftD[x][y]+=Arr[x][y];
            }
            else
            {
                int X,Y=0;
                if(x>size-y-1)
                {
                    X=x-(size-y-1);
                    Y=size-1;
                    
                }

                else
                {
                    Y=y+x;
                    X=0;
                }

                LeftD[X][Y]+=Arr[x][y];
            }

        }
    
    }
    int PosX=1,PosY=1,PosX2=2,PosY2=1;
    long long Sum=0,Sum2=0;
    for(int x=0;x<size;x++)
    {
        for(int y=0;y<size;y++)
        {
            //find the 2 diagonals and sum them-Arr[x][y] AND put the x,y in PosX,PosY
                int X=0,Y=0,X1=0,Y1=0;;
                if(x>y)
                {
                    X=x-y;
                    Y=0;
                }
                else
                
                {
                    Y=y-x;
                    X=0;
                }

                if(x>size-y-1)
                {
                    X1=x-(size-y-1);
                    Y1=size-1;
                    
                }

                else
                {
                    Y1=y+x;
                    X1=0;
                }

                long long sum=RightD[X][Y]+LeftD[X1][Y1]-Arr[x][y];
        
                if((x+y)%2!=0 && sum>Sum)
                        {
                        Sum=sum;
                        PosX=x;
                        PosY=y;
                        }
                else if((x+y)%2==0 && sum>Sum2)
                        {
                        Sum2=sum;
                        PosX2=x;
                        PosY2=y;
                        }
                
        }
    
    }

    cout<<Sum+Sum2<<endl;
    cout<<PosX2+1<<" "<<PosY2+1<<" "<<PosX+1<<" "<<PosY+1<<" "<<endl;

}