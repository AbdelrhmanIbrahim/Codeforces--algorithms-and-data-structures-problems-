#include<iostream>
#include<vector>
#include<string>
#include<math.h>

using namespace std;


int main()

{
    int d=0,total_sum=0,min=0,max=0,SUM=0,MIN_SUM=0;
    string str="",str1="";
    bool close=false;
    vector<int>MAX;
    vector<int>MIN;

    cin>>d>>total_sum;

    while(d!=0)
    {
    d--;
    cin>>min>>max;
    MIN.push_back(min);
    MAX.push_back(max);
    }

    for(int i=0;i<MAX.size();i++)
    {
    SUM+=MAX[i];
    MIN_SUM+=MIN[i];
    str+=to_string(long long (MAX[i]))+" ";
    str1+=to_string(long long (MIN[i]))+" ";
    }

    if(SUM==total_sum)
    {
    cout<<"YES"<<endl;
    cout<<str<<endl;
    close=true;
    }

    if(MIN_SUM==total_sum && !close)
    {
    cout<<"YES"<<endl;
    cout<<str1<<endl;
    }


    if(SUM<total_sum || MIN_SUM>total_sum)
    {
    cout<<"NO"<<endl;
    }


    if(SUM>total_sum && MIN_SUM<total_sum)
    {
        for(int i=0;i<MAX.size();i++)
        {
        while (MIN[i]<MAX[i] && MIN_SUM<total_sum)
        {
        MIN[i]++;
        MIN_SUM++;
        }
        }
    
    cout<<"YES"<<endl;
    for(int i=0;i<MAX.size();i++)
    {
    cout<<MIN[i]<<" ";
    }

    }

return 0;
}