#include<iostream>
#include<vector>
#include<string>
#include<math.h>

using namespace std;

//int CalculateHowManyRecopCycles(string str);
//bool Rec(float RecopD,float D);

int main()

{
    
 //   clock_t t1,t2;
 //   t1=clock();
 //   

 //   //Code here
    ////anything mby2blsh el 2sma 3l 10,100,1000
    ////0.04167..recurse cause this means that it was 0.041666..then we will take the repeated digit of the before last digit (last digit) = (before last) +1 
    ////0.04157..not recurse but we will check it by long division
    ////third 1/7..1/8..long divison

 //  /* for(float d=2.0;d<22.0;d++)
    //{ 
    //  if(1000%(int)d!=0 && Rec(1/d,d) )
    //  {
    //      cout<<1/d<<endl;
    //      cout<<""<<endl;
    //  }
    //}*/

    //int z=0,h=0;
    //cin>>z>>h;
    //int** X=new int*[z];
    //for(int x=0;x<z;x++)
    //{
    //  X[x]=new int[h];
    //  for(int y=0;y<h;y++)
    //      X[x][y]=1;
    //} 

    //cout<<X[1][1]<<endl;  
    //
    //delete X;

    ////cout<<x<<" "<<*x<<endl;
    ////float x=6.0;
    ////Rec(1.0/2.0,2.0);
    ////cout<<0.16666 * 6.0<<endl;
 //   t2=clock();
 //   float diff ((float)t2-(float)t1);
 //   cout<<" "<<endl;
 //   cout<<"Execution time is "<<diff/CLOCKS_PER_SEC<<" sec"<<endl;
    long long in,in2,out=0;
    string y;
    bool a=false;
    cin>>in;
    in2=in;
    while(!a)
    {
        in2++;
        y=to_string(in2);   
        string str2="8";
        std::size_t found = y.find(str2);
         if (found!=std::string::npos)
              a=true;
        
    } 
    
    cout<<in2-in<<endl;
 
}