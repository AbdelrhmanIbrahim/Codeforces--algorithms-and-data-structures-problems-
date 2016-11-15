#include<iostream>
#include<vector>
#include<string>
#include<math.h>
#include <time.h>
#include<fstream>
#include<map>

using namespace std;
int main()

{   

    int n;
    cin>>n;
    if(n!=2)
    {
        if(n%2==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    else
        cout<<"NO"<<endl;
    return 0;
}