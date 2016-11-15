#include<iostream>
#include<vector>
#include<string>
#include<set>
#include<math.h>
using namespace std;
int main()
{
    int n,k,sum=0,count=0,sum2=0,C=0;
    vector<int>vec;
    cin>>n>>k;
    for(int x=0;x<n;x++)
    {
        int a;
        cin>>a;
        vec.push_back(a);
    }
    for(int x=0;x<k;x++)
    {
    sum+=vec[x];
    sum2+=vec[x];
    }
    for(int x=k;x<vec.size();x++)
    {
        sum2+=vec[x];
        sum2-=vec[count];
        if(sum2<sum)
        {
            sum=sum2;
            C=count+1;
        }
        count++;

    
    
    }
    cout<<C+1<<endl;
    return 0;
}