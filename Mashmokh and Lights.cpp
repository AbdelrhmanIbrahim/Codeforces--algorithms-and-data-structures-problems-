#include<iostream>
#include<vector>
using namespace std;
int main()
{

    //12 18 27 30 45
    //12 6 9 3 15
    //3 6 9 12 15
    //3 3 3 3 3 
    int n,m;
    vector<int>vec;
    cin>>n>>m;
    for(int x=0;x<m;x++)
    {
        int a;
        cin>>a;
        vec.push_back(a);
    }
    for(int x=1;x<=n;x++)
    {
        for(int y=0;y<vec.size();y++)
        {
            if(x>=vec[y])
            {
                cout<<vec[y]<<" ";
                break;
            }
        }
    }

    return 0;
}