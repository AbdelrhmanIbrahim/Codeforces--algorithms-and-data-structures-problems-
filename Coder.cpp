#include <iostream>
#include <map>   
#include<vector>
#include<string>
#include<algorithm>
using namespace std;


int main()
{
    
   int n;
   cin>>n;
   char a,b;
   if(n%2==0)
       cout<<(n/2) * n<<endl;
   else
            cout<<(n/2) * (n/2) + (n-(n/2)) * (n-(n/2))<<endl;
   
   for(int x=0;x<n;x++)
   {
       if(x%2==0)
       {
        a='C';
        b='.';
       }
       else
       {
        a='.';
        b='C';
       }
    for(int y=0;y<n;y++)
        {
            if(y%2==0)
                cout<<a;
            else
                cout<<b;
        }
        cout<<endl;
   }
 

    return 0;
}