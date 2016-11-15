#include <iostream>
#include <string>
#include<vector>
#include<map>
using namespace std;

bool IsPrime(int number){

    if(number < 2) return false;
    if(number == 2) return true;
    if(number % 2 == 0) return false;
    for(int i=3; (i*i)<=number; i+=2){
        if(number % i == 0 ) return false;
    }
    return true;

}
int main(){

long long n,a,count=0,A,B;
map<long long,string>old;
cin>>n;
for(int x=0;x<n;x++)
{
    cin>>a;
    long long gzr;
    gzr=sqrt((double)a);
    long long N=gzr*gzr;

    if(N!=a)
    {
        cout<<"NO"<<endl;
            old[a]="NO";
    }
    else
    {
        count=0;
        if(old.find(a)!=old.end())
            cout<<old[a]<<endl;
        else
        {

            if(IsPrime(gzr))
            {
                cout<<"YES"<<endl;
                old[a]="YES";
            }
            else
            {
            
                cout<<"NO"<<endl;
                old[a]="NO";
                    
            }
                        

        }
    }
    
}
    


return 0;
}