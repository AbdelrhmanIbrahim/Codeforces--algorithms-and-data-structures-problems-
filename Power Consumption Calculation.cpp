#include<iostream>
#include<vector>
#include<string>
#include<math.h>

using namespace std;

int sum=0;
vector<int>T;
vector<int>P;

void pow_cons(int diff);

int main()

{
    int n, P1, P2, P3, T1, T2,start,end,C=0;
    vector<int>periods;

    cin>>n>>P1>>P2>>P3>>T1>>T2;

    T.push_back(T1);
    T.push_back(T2);
    P.push_back(P1);
    P.push_back(P2);
    P.push_back(P3);

    while(C!=n)
    {
    cin>>start>>end;
    periods.push_back(start);
    periods.push_back(end);
    C++;
    }


    for(int i=0;i<periods.size();i+=2)
    {
        sum+=P[0]*(periods[i+1]-periods[i]);
        if(i>=2)
        {
        int diff=periods[i]-periods[i-1];
        pow_cons(diff);
        }
    }
    cout<<sum<<endl;

return 0;
}

void pow_cons(int diff)
{
    
        if(diff<=T[0])
            sum+=diff*P[0];

        if(diff>T[0] && diff<=T[0]+T[1])
            sum+=(P[0]*T[0])+(diff-T[0])*P[1];
        
        if(diff>T[0]+T[1])
            sum+=(P[0]*T[0])+(P[1]*T[1])+(diff-(T[0]+T[1]))*P[2];
    
}