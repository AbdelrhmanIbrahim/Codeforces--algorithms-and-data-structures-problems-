#include <iostream>
#include <string>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;


int main(){

double r,x1,y1,x2,y2;
cin>>r>>x1>>y1>>x2>>y2;
double mag;
mag=sqrt( (double)((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)) );

long long out=mag/(2.0*r);
double n=fmod(mag,(2.0*r));
if(n==0)
    cout<<out<<endl;
else
    cout<<out+1<<endl;

return 0;
}