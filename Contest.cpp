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
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    int result1=((3*a)/10),result2=(a-((a/250)*c));
    int result3=((3*b)/10),result4=(b-((b/250)*d));

    if(result1>result2)
        result1=result1;
    else
        result1=result2;

    if(result3>result4)
        result3=result3;
    else
        result3=result4;

    if(result3>result1)
        cout<<"Vasya"<<endl;

    else if(result3<result1)
        cout<<"Misha"<<endl;

    else
        cout<<"Tie"<<endl;

    return 0;
}