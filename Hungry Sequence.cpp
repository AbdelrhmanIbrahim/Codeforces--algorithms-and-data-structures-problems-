#include <iostream>
#include <map>   
#include<vector>
#include<string>
#include<algorithm>
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
int main()
{
    
   int n,count=0;
   cin>>n;
   while(n!=0)
   {
   count++;
   if(IsPrime(count))
   {
       cout<<count<<" ";
       n--;
   }
   }

    return 0;
}