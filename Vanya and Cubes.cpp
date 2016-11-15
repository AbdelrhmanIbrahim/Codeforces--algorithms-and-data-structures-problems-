#include <iostream>
#include <map>   
#include<vector>
#include<string>

using namespace std;


int main()
{
    int n,count=0;
    long long sum=0,sum2=0;
    cin>>n;
    while(1)
    {
    count++;
    sum+=count;
    sum2+=sum;
    if(sum2>n)
    {
        cout<<count-1<<endl;
        break;
    }
    }
    return 0;
}