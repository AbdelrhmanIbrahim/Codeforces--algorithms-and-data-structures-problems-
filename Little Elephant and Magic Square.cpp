#include<iostream>
#include<vector>
#include<string>
#include<math.h>
#include <time.h>
#include<fstream>
#include<set>
#include<map>
#include<algorithm>
using namespace std;

int main()

{
    vector<pair<int,int>>num,num2;
    vector<vector<int>>vec;
    for(int x=0;x<3;x++)
    {
        vector<int>c;
        vec.push_back(c);
        int sum=0;
        for(int y=0;y<3;y++)
        {
            int a;
            cin>>a;
            sum+=a;
            vec[x].push_back(a);
        }
        num.push_back(make_pair(sum,x));
        num2.push_back(make_pair(sum,x));
        
    }
    sort(num.begin(),num.end());
    int A=1;
    bool U=true;
    while(U)
    {
        
        for(int x=0;x<vec.size();x++)
        {

            if(x!=num[num.size()-1].second)
                vec[x][x]=(num[num.size()-1].first+A)-num2[x].first;
            else
                vec[x][x]=A;
            if(vec[0][0]+vec[1][1]+vec[2][2]==vec[0][0]+vec[0][1]+vec[0][2])
            {
                for(int x=0;x<vec.size();x++)
                {   
                    for(int y=0;y<vec[x].size();y++)    
                        cout<<vec[x][y]<<" ";
                    cout<<endl;
                }
                    U=false;
                    break;

            }
        
        }
        A++;
    }

    
return 0;
}