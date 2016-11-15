#include <iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<set>
#include<map>
#include<iterator>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>vec;
    for(int x=0;x<n;x++)
        vec.push_back(1);
    int A=1;
    for(int x=1;x<n;x++)
    {
        A=1;
        for(int y=1;y<n;y++)
        {
            vec[y]+=A;
            A=vec[y];
            
        }
    
    }
    cout<<A<<endl;

    return 0;
}