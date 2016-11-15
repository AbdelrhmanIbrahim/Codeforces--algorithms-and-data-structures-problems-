#include <iostream>
#include<set>
#include<string>
#include<vector>
#include<algorithm>
#include<bitset>
using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    long long n,m,k;
    cin>>n>>m;
    long long min=n/m,MIN=0;
    long long max=n-m+1;
    MIN+=(((min+1)*(min))/2)*(n%m);
    MIN+=((min*(min-1))/2)*((m)-(n%m));
    cout<<MIN<<" "<<(max*(max-1))/2<<endl;
    return 0;
}