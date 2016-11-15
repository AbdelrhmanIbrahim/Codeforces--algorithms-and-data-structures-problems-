#include<iostream>
#include<string>
#include<fstream>
#include<vector>

using namespace std;
//int Bposition=0,Sposition=0,SbiggerPosition=0;
//bool Done=false;
//void FindRange(string Str);
//bool zero (string str);
//void FindRange2(string Str,char certain);
vector<int>nums;

int main()

{
    int sumX,sumY,sumZ;
   ios::sync_with_stdio(0);
    cin.tie(0);
    /*freopen("Input.txt","r",stdin);
    freopen("Output.txt","w",stdout); 
    vector<int>Xs,Ys,Zs;
    int o;
    cin>>o;
    for(int d=0;d<o;d++)
    {
    int x,y,z;
    cin>>x>>y>>z;
    int num;
    cin>>num;
    int X,Y,Z;

    for(int a=0;a<num;a++)
    {
        cin>>X>>Y>>Z;
        Xs.push_back(X);
        Ys.push_back(Y);
        Zs.push_back(Z);
    }
    
    for(int a=0;a<Xs.size();a++)
    {
         sumX=Xs[a];
         sumY=Ys[a];
        sumZ=Zs[a];
        for(int b=a+1;b<Xs.size();b++)
            {   
                sumX+=Xs[b];
                sumY+=Ys[a];
                sumZ+=Zs[a];
                if(sumX>X || sumY>Y || sumZ>Z)
                {
                    sumX-=Xs[b];
                    sumY-=Ys[a];
                    sumZ-=Zs[a];
                
                }
            }
    }
    cout<<sumX<<" "<<sumY<<" "<<sumZ<<" "<<endl;
    if(sumX==x && sumY==y && sumZ==z)
        {
            cout<<"Case #"<<d<<":"<< " yes"<<endl;
        }

    else
        cout<<"Case #"<<d<<":"<< " no"<<endl;

    }*/

    //cout<<"Case #"<<X+1<<": "<<Str2<<" "<<Str<<endl;  

    int x;
    cin>>x;
    vector<int>All(x+1);
    for(int y=0;y<x;y++)
    {
        int a;
        cin>>a;
        nums.push_back(a);
    }

    for(int b =0;b<x;b++)
    {
        int note;
        cin>>note;
        All[nums[b]]=note;  
    }

    for(int x=1;x<All.size();x++)
        cout<<All[x]<<" ";

    cout<<""<<endl;
    return 0;
}