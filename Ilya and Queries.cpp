#include <iostream>
#include <map>   
#include<vector>
#include<string>
#include<algorithm>
using namespace std;


int main()
{
    
    string str;
    cin>>str;
    int n,a,b;
    vector<int>vec1,vec2,vec3;
    cin>>n;
    for(int x=0;x<n;x++)
    {
        cin>>a>>b;
        vec1.push_back(a);
        vec2.push_back(b);
    }
    int sum=0,count=0;
    vec3.push_back(0);
    for(int x=1;x<str.size();x++)
    {

        if(str[x]==str[x-1])
            count++;
        vec3.push_back(count);
    }
    
   
    vec3.push_back(count);
 
    for(int x=0;x<vec2.size();x++)
    {
        cout<<vec3[vec2[x]-1]-vec3[vec1[x]-1]<<endl;
    }
    

    
   
    return 0;
}